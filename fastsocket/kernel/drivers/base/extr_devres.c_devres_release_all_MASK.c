
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * next; } ;
struct device {TYPE_1__ devres_head; int devres_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int *,TYPE_1__*,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct device *VAR_1)
{
 unsigned long VAR_2;


 if (FUNC_0(VAR_1->devres_head.next == ((void*)0)))
  return -VAR_0;
 FUNC_2(&VAR_1->devres_lock, VAR_2);
 return FUNC_1(VAR_1, VAR_1->devres_head.next, &VAR_1->devres_head,
        VAR_2);
}
