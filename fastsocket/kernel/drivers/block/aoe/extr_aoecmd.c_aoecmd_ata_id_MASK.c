
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dev; int len; } ;
struct frame {scalar_t__ sent_jiffs; int sent; scalar_t__ waited_total; scalar_t__ waited; int tag; struct sk_buff* skb; } ;
struct aoetgt {TYPE_1__* ifp; int nout; } ;
struct TYPE_4__ {int function; } ;
struct aoedev {TYPE_2__ timer; int rttdev; int rttavg; struct aoetgt** tgt; } ;
struct aoe_hdr {int dummy; } ;
struct aoe_atahdr {int scnt; int lba3; int cmdstat; } ;
struct TYPE_3__ {int nd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aoedev*,struct aoetgt*,struct aoe_hdr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct frame*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct aoe_hdr*,int ,int ) ;
 struct frame* FUNC_4 (struct aoedev*) ;
 int VAR_5 ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;

struct sk_buff *
FUNC_8(struct aoedev *VAR_6)
{
 struct aoe_hdr *VAR_7;
 struct aoe_atahdr *VAR_8;
 struct frame *VAR_9;
 struct sk_buff *VAR_10;
 struct aoetgt *VAR_11;

 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9 == ((void*)0))
  return ((void*)0);

 VAR_11 = *VAR_6->tgt;


 VAR_10 = VAR_9->skb;
 VAR_7 = (struct aoe_hdr *) FUNC_6(VAR_10);
 VAR_8 = (struct aoe_atahdr *) (VAR_7+1);
 FUNC_7(VAR_10, sizeof *VAR_7 + sizeof *VAR_8);
 FUNC_3(VAR_7, 0, VAR_10->len);
 VAR_9->tag = FUNC_0(VAR_6, VAR_11, VAR_7);
 FUNC_2(VAR_9);
 VAR_11->nout++;
 VAR_9->waited = 0;
 VAR_9->waited_total = 0;


 VAR_8->scnt = 1;
 VAR_8->cmdstat = VAR_0;
 VAR_8->lba3 = 0xa0;

 VAR_10->dev = VAR_11->ifp->nd;

 VAR_6->rttavg = VAR_2;
 VAR_6->rttdev = VAR_3;
 VAR_6->timer.function = VAR_5;

 VAR_10 = FUNC_5(VAR_10, VAR_1);
 if (VAR_10) {
  FUNC_1(&VAR_9->sent);
  VAR_9->sent_jiffs = (u32) VAR_4;
 }

 return VAR_10;
}
