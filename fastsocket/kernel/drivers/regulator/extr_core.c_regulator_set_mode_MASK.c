
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {int mutex; TYPE_2__* desc; } ;
struct regulator {struct regulator_dev* rdev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_mode ) (struct regulator_dev*,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct regulator_dev*,unsigned int) ;
 int FUNC_3 (struct regulator_dev*,unsigned int) ;

int FUNC_4(struct regulator *VAR_1, unsigned int VAR_2)
{
 struct regulator_dev *VAR_3 = VAR_1->rdev;
 int VAR_4;

 FUNC_0(&VAR_3->mutex);


 if (!VAR_3->desc->ops->set_mode) {
  VAR_4 = -VAR_0;
  goto out;
 }


 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4 < 0)
  goto out;

 VAR_4 = VAR_3->desc->ops->set_mode(VAR_3, VAR_2);
out:
 FUNC_1(&VAR_3->mutex);
 return VAR_4;
}
