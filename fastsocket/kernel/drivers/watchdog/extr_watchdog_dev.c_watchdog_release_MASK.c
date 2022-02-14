
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct watchdog_device {TYPE_2__* ops; int status; int lock; int dev; TYPE_1__* info; } ;
struct inode {int dummy; } ;
struct file {struct watchdog_device* private_data; } ;
struct TYPE_4__ {int (* unref ) (struct watchdog_device*) ;int owner; } ;
struct TYPE_3__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct watchdog_device*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct watchdog_device*) ;
 int FUNC_9 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_5, struct file *VAR_6)
{
 struct watchdog_device *VAR_7 = VAR_6->private_data;
 int VAR_8 = -VAR_0;






 if (FUNC_6(VAR_2, &VAR_7->status) ||
     !(VAR_7->info->options & VAR_1))
  VAR_8 = FUNC_9(VAR_7);


 if (VAR_8 < 0) {
  FUNC_3(&VAR_7->lock);
  if (!FUNC_7(VAR_4, &VAR_7->status))
   FUNC_1(VAR_7->dev, "watchdog did not stop!\n");
  FUNC_4(&VAR_7->lock);
  FUNC_8(VAR_7);
 }


 FUNC_2(VAR_7->ops->owner);


 FUNC_0(VAR_3, &VAR_7->status);


 if (VAR_7->ops->unref)
  VAR_7->ops->unref(VAR_7);

 return 0;
}
