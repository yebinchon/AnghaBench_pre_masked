
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {struct list_head* next; } ;
struct devres_group {TYPE_1__* node; } ;
struct device {int devres_lock; struct list_head devres_head; } ;
struct TYPE_2__ {struct list_head entry; } ;


 int FUNC_0 (int) ;
 struct devres_group* FUNC_1 (struct device*,void*) ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct device*,struct list_head*,struct list_head*,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct device *VAR_0, void *VAR_1)
{
 struct devres_group *VAR_2;
 unsigned long VAR_3;
 int VAR_4 = 0;

 FUNC_4(&VAR_0->devres_lock, VAR_3);

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  struct list_head *VAR_5 = &VAR_2->node[0].entry;
  struct list_head *VAR_6 = &VAR_0->devres_head;

  if (!FUNC_2(&VAR_2->node[1].entry))
   VAR_6 = VAR_2->node[1].entry.next;

  VAR_4 = FUNC_3(VAR_0, VAR_5, VAR_6, VAR_3);
 } else {
  FUNC_0(1);
  FUNC_5(&VAR_0->devres_lock, VAR_3);
 }

 return VAR_4;
}
