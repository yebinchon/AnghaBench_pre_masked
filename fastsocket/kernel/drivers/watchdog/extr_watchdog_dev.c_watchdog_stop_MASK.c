
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int lock; int status; TYPE_1__* ops; int dev; } ;
struct TYPE_2__ {int (* stop ) (struct watchdog_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct watchdog_device*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_5)
{
 int VAR_6 = 0;

 FUNC_2(&VAR_5->lock);

 if (FUNC_5(VAR_4, &VAR_5->status)) {
  VAR_6 = -VAR_1;
  goto out_stop;
 }

 if (!FUNC_6(VAR_5))
  goto out_stop;

 if (FUNC_5(VAR_3, &VAR_5->status)) {
  FUNC_1(VAR_5->dev, "nowayout prevents watchdog being stopped!\n");
  VAR_6 = -VAR_0;
  goto out_stop;
 }

 VAR_6 = VAR_5->ops->stop(VAR_5);
 if (VAR_6 == 0)
  FUNC_0(VAR_2, &VAR_5->status);

out_stop:
 FUNC_3(&VAR_5->lock);
 return VAR_6;
}
