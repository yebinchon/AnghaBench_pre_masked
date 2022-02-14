
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wdm_device {TYPE_1__* intf; int flags; int count; int plock; } ;
struct inode {int dummy; } ;
struct file {struct wdm_device* private_data; } ;
struct TYPE_2__ {scalar_t__ needs_remote_wakeup; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct wdm_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct wdm_device *VAR_4 = VAR_3->private_data;

 FUNC_2(&VAR_1);
 FUNC_2(&VAR_4->plock);
 VAR_4->count--;
 FUNC_3(&VAR_4->plock);

 if (!VAR_4->count) {
  FUNC_0(&VAR_4->intf->dev, "wdm_release: cleanup");
  FUNC_1(VAR_4);
  if (!FUNC_4(VAR_0, &VAR_4->flags))
   VAR_4->intf->needs_remote_wakeup = 0;
 }
 FUNC_3(&VAR_1);
 return 0;
}
