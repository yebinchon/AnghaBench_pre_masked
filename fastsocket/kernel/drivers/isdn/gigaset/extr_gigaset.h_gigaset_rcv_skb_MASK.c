
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* rcvcallb_skb ) (int ,int ,struct sk_buff*) ;} ;
struct cardstate {int myid; TYPE_1__ iif; } ;
struct bc_state {int trans_down; int channel; } ;


 int FUNC_0 (int ,int ,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct sk_buff *VAR_0,
       struct cardstate *VAR_1,
       struct bc_state *VAR_2)
{
 VAR_1->iif.rcvcallb_skb(VAR_1->myid, VAR_2->channel, VAR_0);
 VAR_2->trans_down++;
}
