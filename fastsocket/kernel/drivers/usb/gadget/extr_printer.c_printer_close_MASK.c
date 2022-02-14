
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer_dev {int lock; int printer_status; scalar_t__ printer_cdev_open; } ;
struct inode {int dummy; } ;
struct file {struct printer_dev* private_data; } ;


 int FUNC_0 (struct printer_dev*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct printer_dev *VAR_3 = VAR_2->private_data;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 VAR_3->printer_cdev_open = 0;
 VAR_2->private_data = ((void*)0);

 VAR_3->printer_status &= ~VAR_0;
 FUNC_2(&VAR_3->lock, VAR_4);

 FUNC_0(VAR_3, "printer_close\n");

 return 0;
}
