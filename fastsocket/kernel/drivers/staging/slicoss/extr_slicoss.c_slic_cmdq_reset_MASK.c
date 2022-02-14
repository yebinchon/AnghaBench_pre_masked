
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct slic_hostcmd {struct slic_hostcmd* next_all; struct slic_hostcmd* next; struct sk_buff* skb; scalar_t__ busy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_11__ {int flags; int lock; } ;
struct TYPE_12__ {scalar_t__ count; TYPE_5__ lock; struct slic_hostcmd* head; int * tail; } ;
struct TYPE_9__ {int flags; int lock; } ;
struct TYPE_10__ {scalar_t__ count; TYPE_3__ lock; int * tail; int * head; } ;
struct TYPE_8__ {scalar_t__ count; struct slic_hostcmd* head; } ;
struct adapter {TYPE_6__ cmdq_free; TYPE_4__ cmdq_done; TYPE_2__ cmdq_all; TYPE_1__* netdev; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_0)
{
 struct slic_hostcmd *VAR_1;
 struct sk_buff *VAR_2;
 u32 VAR_3;

 FUNC_3(&VAR_0->cmdq_free.lock.lock,
   VAR_0->cmdq_free.lock.flags);
 FUNC_3(&VAR_0->cmdq_done.lock.lock,
   VAR_0->cmdq_done.lock.flags);
 VAR_3 = VAR_0->cmdq_all.count - VAR_0->cmdq_done.count;
 VAR_3 -= VAR_0->cmdq_free.count;
 VAR_1 = VAR_0->cmdq_all.head;
 while (VAR_1) {
  if (VAR_1->busy) {
   VAR_2 = VAR_1->skb;
   FUNC_0(VAR_2);
   VAR_1->busy = 0;
   VAR_1->skb = ((void*)0);
   FUNC_2(VAR_2);
  }
  VAR_1 = VAR_1->next_all;
 }
 VAR_0->cmdq_free.count = 0;
 VAR_0->cmdq_free.head = ((void*)0);
 VAR_0->cmdq_free.tail = ((void*)0);
 VAR_0->cmdq_done.count = 0;
 VAR_0->cmdq_done.head = ((void*)0);
 VAR_0->cmdq_done.tail = ((void*)0);
 VAR_0->cmdq_free.head = VAR_0->cmdq_all.head;
 VAR_1 = VAR_0->cmdq_all.head;
 while (VAR_1) {
  VAR_0->cmdq_free.count++;
  VAR_1->next = VAR_1->next_all;
  VAR_1 = VAR_1->next_all;
 }
 if (VAR_0->cmdq_free.count != VAR_0->cmdq_all.count) {
  FUNC_1(&VAR_0->netdev->dev,
   "free_count %d != all count %d\n",
   VAR_0->cmdq_free.count, VAR_0->cmdq_all.count);
 }
 FUNC_4(&VAR_0->cmdq_done.lock.lock,
    VAR_0->cmdq_done.lock.flags);
 FUNC_4(&VAR_0->cmdq_free.lock.lock,
    VAR_0->cmdq_free.lock.flags);
}
