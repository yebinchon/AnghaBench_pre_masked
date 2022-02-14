
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {int mutex; TYPE_2__* desc; } ;
struct regulator {struct regulator_dev* rdev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_current_limit ) (struct regulator_dev*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct regulator_dev*,int*,int*) ;
 int FUNC_3 (struct regulator_dev*,int,int) ;

int FUNC_4(struct regulator *VAR_1,
          int VAR_2, int VAR_3)
{
 struct regulator_dev *VAR_4 = VAR_1->rdev;
 int VAR_5;

 FUNC_0(&VAR_4->mutex);


 if (!VAR_4->desc->ops->set_current_limit) {
  VAR_5 = -VAR_0;
  goto out;
 }


 VAR_5 = FUNC_2(VAR_4, &VAR_2, &VAR_3);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = VAR_4->desc->ops->set_current_limit(VAR_4, VAR_2, VAR_3);
out:
 FUNC_1(&VAR_4->mutex);
 return VAR_5;
}
