
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_usb_data {int isopen; TYPE_1__* rio_dev; int lock; int wait_q; int present; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct rio_usb_data VAR_1 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 struct rio_usb_data *VAR_4 = &VAR_1;

 FUNC_2(&(VAR_4->lock));

 if (VAR_4->isopen || !VAR_4->present) {
  FUNC_3(&(VAR_4->lock));
  return -VAR_0;
 }
 VAR_4->isopen = 1;

 FUNC_1(&VAR_4->wait_q);

 FUNC_3(&(VAR_4->lock));

 FUNC_0(&VAR_4->rio_dev->dev, "Rio opened.\n");

 return 0;
}
