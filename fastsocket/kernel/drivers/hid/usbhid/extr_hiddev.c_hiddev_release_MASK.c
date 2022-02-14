
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hiddev_list {struct hiddev_list* hiddev; int hid; scalar_t__ exist; int open; int list_lock; int node; } ;
struct file {struct hiddev_list* private_data; } ;


 int FUNC_0 (struct hiddev_list*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct inode * VAR_0, struct file * VAR_1)
{
 struct hiddev_list *VAR_2 = VAR_1->private_data;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->hiddev->list_lock, VAR_3);
 FUNC_1(&VAR_2->node);
 FUNC_3(&VAR_2->hiddev->list_lock, VAR_3);

 if (!--VAR_2->hiddev->open) {
  if (VAR_2->hiddev->exist) {
   FUNC_4(VAR_2->hiddev->hid);
   FUNC_5(VAR_2->hiddev->hid);
  } else {
   FUNC_0(VAR_2->hiddev);
  }
 }

 FUNC_0(VAR_2);

 return 0;
}
