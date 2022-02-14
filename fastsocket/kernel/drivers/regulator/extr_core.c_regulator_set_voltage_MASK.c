
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {int mutex; TYPE_2__* desc; } ;
struct regulator {int min_uV; int max_uV; struct regulator_dev* rdev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_voltage ) (struct regulator_dev*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regulator_dev*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct regulator_dev*,int*,int*) ;
 int FUNC_4 (struct regulator_dev*,int,int) ;

int FUNC_5(struct regulator *VAR_2, int VAR_3, int VAR_4)
{
 struct regulator_dev *VAR_5 = VAR_2->rdev;
 int VAR_6;

 FUNC_1(&VAR_5->mutex);


 if (!VAR_5->desc->ops->set_voltage) {
  VAR_6 = -VAR_0;
  goto out;
 }


 VAR_6 = FUNC_3(VAR_5, &VAR_3, &VAR_4);
 if (VAR_6 < 0)
  goto out;
 VAR_2->min_uV = VAR_3;
 VAR_2->max_uV = VAR_4;
 VAR_6 = VAR_5->desc->ops->set_voltage(VAR_5, VAR_3, VAR_4);

out:
 FUNC_0(VAR_5, VAR_1, ((void*)0));
 FUNC_2(&VAR_5->mutex);
 return VAR_6;
}
