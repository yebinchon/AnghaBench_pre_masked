
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_skel {int kref; int io_mutex; scalar_t__ interface; int open_count; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 struct usb_skel *VAR_4;

 VAR_4 = (struct usb_skel *)VAR_3->private_data;
 if (VAR_4 == ((void*)0))
  return -VAR_0;


 FUNC_1(&VAR_4->io_mutex);
 if (!--VAR_4->open_count && VAR_4->interface)
  FUNC_3(VAR_4->interface);
 FUNC_2(&VAR_4->io_mutex);


 FUNC_0(&VAR_4->kref, VAR_1);
 return 0;
}
