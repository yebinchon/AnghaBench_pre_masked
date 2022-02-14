
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct regulator {struct regulator_dev* rdev; } ;
struct TYPE_2__ {scalar_t__ n_voltages; } ;


 int VAR_0 ;

int FUNC_0(struct regulator *VAR_1)
{
 struct regulator_dev *VAR_2 = VAR_1->rdev;

 return VAR_2->desc->n_voltages ? : -VAR_0;
}
