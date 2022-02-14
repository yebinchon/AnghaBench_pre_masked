
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slic_hostcmd {struct slic_hostcmd* next_all; struct sk_buff* skb; scalar_t__ busy; } ;
struct slic_cmdqueue {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {struct slic_hostcmd* head; } ;
struct adapter {TYPE_1__ cmdq_done; TYPE_1__ cmdq_free; TYPE_1__ cmdq_all; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct adapter*) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_0)
{
 struct slic_hostcmd *VAR_1;

 VAR_1 = VAR_0->cmdq_all.head;
 while (VAR_1) {
  if (VAR_1->busy) {
   struct sk_buff *VAR_2;

   VAR_2 = VAR_1->skb;
   if (VAR_2) {
    VAR_1->skb = ((void*)0);
    FUNC_0(VAR_2);
   }
  }
  VAR_1 = VAR_1->next_all;
 }
 FUNC_1(&VAR_0->cmdq_all, 0, sizeof(struct slic_cmdqueue));
 FUNC_1(&VAR_0->cmdq_free, 0, sizeof(struct slic_cmdqueue));
 FUNC_1(&VAR_0->cmdq_done, 0, sizeof(struct slic_cmdqueue));
 FUNC_2(VAR_0);
}
