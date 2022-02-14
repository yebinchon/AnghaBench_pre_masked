
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int private_data; } ;
typedef TYPE_1__* pdabusb_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ opened; int remove_ok; TYPE_2__* usbdev; int remove_pending; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8 (struct inode *VAR_1, struct file *VAR_2)
{
 pdabusb_t VAR_3 = (pdabusb_t) VAR_2->private_data;

 FUNC_2("dabusb_release");

 FUNC_4(&VAR_3->mutex);
 FUNC_1 (VAR_3);
 FUNC_0 (VAR_3);
 FUNC_5(&VAR_3->mutex);

 if (!VAR_3->remove_pending) {
  if (FUNC_6 (VAR_3->usbdev, VAR_0, 0) < 0)
   FUNC_3(&VAR_3->usbdev->dev, "set_interface failed\n");
 }
 else
  FUNC_7 (&VAR_3->remove_ok);

 VAR_3->opened = 0;
 return 0;
}
