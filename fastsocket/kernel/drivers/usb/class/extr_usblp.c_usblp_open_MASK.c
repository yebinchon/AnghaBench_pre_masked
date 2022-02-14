
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usblp {int used; int wcomplete; scalar_t__ rcomplete; scalar_t__ wstatus; int present; int dev; } ;
struct usb_interface {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct usblp* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct usblp*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*) ;
 struct usb_interface* FUNC_6 (int *,int) ;
 struct usblp* FUNC_7 (struct usb_interface*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_5);
 struct usblp *VAR_8;
 struct usb_interface *VAR_9;
 int VAR_10;

 if (VAR_7 < 0)
  return -VAR_2;

 FUNC_2 (&VAR_4);

 VAR_10 = -VAR_2;
 VAR_9 = FUNC_6(&VAR_3, VAR_7);
 if (!VAR_9) {
  goto out;
 }
 VAR_8 = FUNC_7 (VAR_9);
 if (!VAR_8 || !VAR_8->dev || !VAR_8->present)
  goto out;

 VAR_10 = -VAR_0;
 if (VAR_8->used)
  goto out;







 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10 < 0)
  goto out;
 VAR_8->used = 1;
 VAR_6->private_data = VAR_8;

 VAR_8->wcomplete = 1;
 VAR_8->wstatus = 0;
 VAR_8->rcomplete = 0;

 if (FUNC_0(VAR_8) < 0) {
  FUNC_5(VAR_9);
  VAR_8->used = 0;
  VAR_6->private_data = ((void*)0);
  VAR_10 = -VAR_1;
 }
out:
 FUNC_3 (&VAR_4);
 return VAR_10;
}
