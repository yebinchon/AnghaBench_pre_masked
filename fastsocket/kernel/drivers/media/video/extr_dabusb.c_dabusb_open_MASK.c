
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; TYPE_1__* private_data; scalar_t__ f_pos; } ;
typedef TYPE_1__* pdabusb_t ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int opened; int mutex; TYPE_2__* usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,struct file*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_9 (struct inode *VAR_10, struct file *VAR_11)
{
 int VAR_12 = FUNC_2(VAR_10);
 pdabusb_t VAR_13;

 if (VAR_12 < VAR_0 || VAR_12 >= (VAR_0 + VAR_5))
  return -VAR_4;

 VAR_13 = &VAR_9[VAR_12 - VAR_0];

 FUNC_0("dabusb_open");
 FUNC_4(&VAR_13->mutex);

 while (!VAR_13->usbdev || VAR_13->opened) {
  FUNC_5(&VAR_13->mutex);

  if (VAR_11->f_flags & VAR_6) {
   return -VAR_2;
  }
  FUNC_3(500);

  if (FUNC_7 (VAR_8)) {
   return -VAR_1;
  }
  FUNC_4(&VAR_13->mutex);
 }
 if (FUNC_8 (VAR_13->usbdev, VAR_7, 1) < 0) {
  FUNC_5(&VAR_13->mutex);
  FUNC_1(&VAR_13->usbdev->dev, "set_interface failed\n");
  return -VAR_3;
 }
 VAR_13->opened = 1;
 FUNC_5(&VAR_13->mutex);

 VAR_11->f_pos = 0;
 VAR_11->private_data = VAR_13;

 return FUNC_6(VAR_10, VAR_11);
}
