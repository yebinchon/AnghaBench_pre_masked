
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* constraints; } ;
struct TYPE_2__ {int valid_ops_mask; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct regulator_dev *VAR_1)
{
 if (!VAR_1->constraints)
  return 0;

 if (VAR_1->constraints->valid_ops_mask & VAR_0)
  return 1;
 else
  return 0;
}
