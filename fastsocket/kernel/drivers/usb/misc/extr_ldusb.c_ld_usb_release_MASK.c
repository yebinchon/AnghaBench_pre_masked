
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ld_usb {int open_count; int mutex; scalar_t__ interrupt_out_busy; int write_wait; int * intf; } ;
struct inode {int dummy; } ;
struct file {struct ld_usb* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ld_usb*) ;
 int FUNC_1 (struct ld_usb*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 struct ld_usb *VAR_5;
 int VAR_6 = 0;

 VAR_5 = VAR_4->private_data;

 if (VAR_5 == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto exit;
 }

 if (FUNC_2(&VAR_5->mutex)) {
  VAR_6 = -VAR_1;
  goto exit;
 }

 if (VAR_5->open_count != 1) {
  VAR_6 = -VAR_0;
  goto unlock_exit;
 }
 if (VAR_5->intf == ((void*)0)) {

  FUNC_3(&VAR_5->mutex);

  FUNC_1(VAR_5);
  goto exit;
 }


 if (VAR_5->interrupt_out_busy)
  FUNC_4(VAR_5->write_wait, !VAR_5->interrupt_out_busy, 2 * VAR_2);
 FUNC_0(VAR_5);
 VAR_5->open_count = 0;

unlock_exit:
 FUNC_3(&VAR_5->mutex);

exit:
 return VAR_6;
}
