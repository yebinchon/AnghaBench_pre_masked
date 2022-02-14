
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {TYPE_1__* dev; } ;
struct frame {int flags; void* sent_jiffs; int sent; void* tag; struct sk_buff* skb; struct aoetgt* t; } ;
struct aoetgt {TYPE_2__* ifp; int addr; int nout; } ;
struct aoedev {int aoeminor; int aoemajor; } ;
struct aoe_hdr {int src; int dst; int tag; } ;
struct aoe_atahdr {int dummy; } ;
typedef int buf ;
struct TYPE_4__ {TYPE_1__* nd; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct frame*) ;
 int * FUNC_7 (struct aoetgt*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (struct frame*,int *) ;
 int FUNC_9 (int ,int ,int) ;
 void* FUNC_10 (struct aoedev*) ;
 int FUNC_11 (char*) ;
 struct sk_buff* FUNC_12 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (char*,int,char*,char*,int ,int ,void*,scalar_t__,void*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_15(struct aoedev *VAR_3, struct frame *VAR_4)
{
 struct sk_buff *VAR_5;
 struct sk_buff_head VAR_6;
 struct aoe_hdr *VAR_7;
 struct aoe_atahdr *VAR_8;
 struct aoetgt *VAR_9;
 char VAR_10[128];
 u32 VAR_11;

 VAR_9 = VAR_4->t;
 VAR_11 = FUNC_10(VAR_3);
 VAR_5 = VAR_4->skb;
 if (FUNC_7(VAR_9) == ((void*)0)) {

  FUNC_11("aoe: resend: no interfaces to rotate to.\n");
  FUNC_8(VAR_4, ((void*)0));
  return;
 }
 VAR_7 = (struct aoe_hdr *) FUNC_13(VAR_5);
 VAR_8 = (struct aoe_atahdr *) (VAR_7+1);

 if (!(VAR_4->flags & VAR_0)) {
  FUNC_14(VAR_10, sizeof(VAR_10),
   "%15s e%ld.%d oldtag=%08x@%08lx newtag=%08x s=%pm d=%pm nout=%d\n",
   "retransmit", VAR_3->aoemajor, VAR_3->aoeminor,
   VAR_4->tag, VAR_2, VAR_11,
   VAR_7->src, VAR_7->dst, VAR_9->nout);
  FUNC_2(VAR_10);
 }

 VAR_4->tag = VAR_11;
 FUNC_6(VAR_4);
 VAR_7->tag = FUNC_4(VAR_11);
 FUNC_9(VAR_7->dst, VAR_9->addr, sizeof VAR_7->dst);
 FUNC_9(VAR_7->src, VAR_9->ifp->nd->dev_addr, sizeof VAR_7->src);

 VAR_5->dev = VAR_9->ifp->nd;
 VAR_5 = FUNC_12(VAR_5, VAR_1);
 if (VAR_5 == ((void*)0))
  return;
 FUNC_5(&VAR_4->sent);
 VAR_4->sent_jiffs = (u32) VAR_2;
 FUNC_0(&VAR_6);
 FUNC_1(&VAR_6, VAR_5);
 FUNC_3(&VAR_6);
}
