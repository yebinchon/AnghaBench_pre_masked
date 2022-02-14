
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccwgroup_driver {int (* set_online ) (struct ccwgroup_device*) ;} ;
struct TYPE_2__ {int driver; } ;
struct ccwgroup_device {scalar_t__ state; int onoff; TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ccwgroup_device*) ;
 struct ccwgroup_driver* FUNC_3 (int ) ;

int FUNC_4(struct ccwgroup_device *VAR_3){
 struct ccwgroup_driver *VAR_4;
 int VAR_5;

 if (FUNC_0(&VAR_3->onoff, 0, 1) != 0)
  return -VAR_1;
 if (VAR_3->state == VAR_0) {
  VAR_5 = 0;
  goto out;
 }
 if (!VAR_3->dev.driver) {
  VAR_5 = -VAR_2;
  goto out;
 }
 VAR_4 = FUNC_3 (VAR_3->dev.driver);
 if ((VAR_5 = VAR_4->set_online ? VAR_4->set_online(VAR_3) : 0))
  goto out;

 VAR_3->state = VAR_0;
 out:
 FUNC_1(&VAR_3->onoff, 0);
 return VAR_5;
}
