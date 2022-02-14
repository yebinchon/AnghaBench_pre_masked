
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct hidraw_list {struct hidraw_list* hidraw; scalar_t__ exist; int node; } ;
struct hidraw {TYPE_2__* hid; int open; } ;
struct file {struct hidraw_list* private_data; } ;
struct TYPE_5__ {TYPE_1__* ll_driver; } ;
struct TYPE_4__ {int (* close ) (TYPE_2__*) ;int (* power ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct hidraw** VAR_2 ;
 unsigned int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct hidraw_list*) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct inode * VAR_4, struct file * VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4);
 struct hidraw *VAR_7;
 struct hidraw_list *VAR_8 = VAR_5->private_data;
 int VAR_9;

 FUNC_3(&VAR_3);
 if (!VAR_2[VAR_6]) {
  VAR_9 = -VAR_0;
  goto unlock;
 }

 FUNC_2(&VAR_8->node);
 VAR_7 = VAR_2[VAR_6];
 if (!--VAR_7->open) {
  if (VAR_8->hidraw->exist) {
   if (VAR_7->hid->ll_driver->power)
    VAR_7->hid->ll_driver->power(VAR_7->hid, VAR_1);
   VAR_7->hid->ll_driver->close(VAR_7->hid);
  } else {
   FUNC_1(VAR_8->hidraw);
  }
 }
 FUNC_1(VAR_8);
 VAR_9 = 0;
unlock:
 FUNC_4(&VAR_3);

 return VAR_9;
}
