
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_ops {int (* list_voltage ) (struct regulator_dev*,unsigned int) ;} ;
struct regulator_dev {TYPE_1__* constraints; int mutex; TYPE_2__* desc; } ;
struct regulator {struct regulator_dev* rdev; } ;
struct TYPE_4__ {unsigned int n_voltages; struct regulator_ops* ops; } ;
struct TYPE_3__ {int min_uV; int max_uV; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct regulator_dev*,unsigned int) ;

int FUNC_3(struct regulator *VAR_1, unsigned VAR_2)
{
 struct regulator_dev *VAR_3 = VAR_1->rdev;
 struct regulator_ops *VAR_4 = VAR_3->desc->ops;
 int VAR_5;

 if (!VAR_4->list_voltage || VAR_2 >= VAR_3->desc->n_voltages)
  return -VAR_0;

 FUNC_0(&VAR_3->mutex);
 VAR_5 = VAR_4->list_voltage(VAR_3, VAR_2);
 FUNC_1(&VAR_3->mutex);

 if (VAR_5 > 0) {
  if (VAR_5 < VAR_3->constraints->min_uV)
   VAR_5 = 0;
  else if (VAR_5 > VAR_3->constraints->max_uV)
   VAR_5 = 0;
 }

 return VAR_5;
}
