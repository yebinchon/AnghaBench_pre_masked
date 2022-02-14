
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct hiddev_list {TYPE_1__* hiddev; int node; int thread_lock; } ;
struct hid_device {int dummy; } ;
struct file {struct hiddev_list* private_data; } ;
struct TYPE_2__ {struct hid_device* hid; scalar_t__ exist; int open; int list_lock; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct hiddev_list*) ;
 struct hiddev_list* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hid_device*) ;
 int FUNC_8 (struct hid_device*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_7, struct file *VAR_8)
{
 struct hiddev_list *VAR_9;
 int VAR_10;

 int VAR_11 = FUNC_0(VAR_7) - VAR_5;

 if (VAR_11 >= VAR_4 || VAR_11 < 0 || !VAR_6[VAR_11])
  return -VAR_1;

 if (!(VAR_9 = FUNC_2(sizeof(struct hiddev_list), VAR_3)))
  return -VAR_2;
 FUNC_4(&VAR_9->thread_lock);

 VAR_9->hiddev = VAR_6[VAR_11];


 VAR_8->private_data = VAR_9;





 if (VAR_9->hiddev->exist) {
  if (!VAR_9->hiddev->open++) {
   VAR_10 = FUNC_8(VAR_6[VAR_11]->hid);
   if (VAR_10 < 0) {
    VAR_10 = -VAR_0;
    goto bail;
   }
  }
 } else {
  VAR_10 = -VAR_1;
  goto bail;
 }

 FUNC_5(&VAR_9->hiddev->list_lock);
 FUNC_3(&VAR_9->node, &VAR_6[VAR_11]->list);
 FUNC_6(&VAR_9->hiddev->list_lock);

 if (!VAR_9->hiddev->open++)
  if (VAR_9->hiddev->exist) {
   struct hid_device *VAR_12 = VAR_6[VAR_11]->hid;
   VAR_10 = FUNC_7(VAR_12);
   if (VAR_10 < 0) {
    VAR_10 = -VAR_0;
    goto bail;
   }
   FUNC_8(VAR_12);
  }

 return 0;
bail:
 VAR_8->private_data = ((void*)0);
 FUNC_1(VAR_9);
 return VAR_10;
}
