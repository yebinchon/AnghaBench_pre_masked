
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int data_len; int truesize; int dev; } ;
struct frame {int bcnt; int bv_off; int bv; TYPE_1__* buf; int lba; scalar_t__ waited_total; scalar_t__ waited; int tag; struct aoetgt* t; struct sk_buff* skb; } ;
struct aoetgt {TYPE_2__* ifp; int rpkts; int wpkts; TYPE_3__* d; int nout; } ;
struct aoe_hdr {int dummy; } ;
struct aoe_atahdr {int scnt; int lba3; char cmdstat; int aflags; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int nd; } ;
struct TYPE_4__ {int bio; int sector; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,struct aoetgt*,struct aoe_hdr*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct frame*) ;
 int FUNC_3 (struct aoe_hdr*,int ,int) ;
 int FUNC_4 (struct aoe_atahdr*,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_8(struct frame *VAR_5)
{
 struct aoetgt *VAR_6;
 struct aoe_hdr *VAR_7;
 struct aoe_atahdr *VAR_8;
 struct sk_buff *VAR_9;
 char VAR_10, VAR_11;

 VAR_9 = VAR_5->skb;
 VAR_7 = (struct aoe_hdr *) FUNC_6(VAR_9);
 VAR_8 = (struct aoe_atahdr *) (VAR_7 + 1);
 FUNC_7(VAR_9, sizeof(*VAR_7) + sizeof(*VAR_8));
 FUNC_3(VAR_7, 0, VAR_9->len);

 VAR_10 = 0x10;
 VAR_11 = 0x4;

 VAR_6 = VAR_5->t;
 VAR_5->tag = FUNC_0(VAR_6->d, VAR_6, VAR_7);
 FUNC_2(VAR_5);
 VAR_6->nout++;
 VAR_5->waited = 0;
 VAR_5->waited_total = 0;
 if (VAR_5->buf)
  VAR_5->lba = VAR_5->buf->sector;


 VAR_8->scnt = VAR_5->bcnt >> 9;
 FUNC_4(VAR_8, VAR_5->lba);
 if (VAR_6->d->flags & VAR_3) {
  VAR_8->aflags |= VAR_0;
 } else {
  VAR_11 = 0;
  VAR_8->lba3 &= 0x0f;
  VAR_8->lba3 |= 0xe0;
 }
 if (VAR_5->buf && FUNC_1(VAR_5->buf->bio) == VAR_4) {
  FUNC_5(VAR_9, VAR_5->bv, VAR_5->bv_off, VAR_5->bcnt);
  VAR_8->aflags |= VAR_1;
  VAR_9->len += VAR_5->bcnt;
  VAR_9->data_len = VAR_5->bcnt;
  VAR_9->truesize += VAR_5->bcnt;
  VAR_6->wpkts++;
 } else {
  VAR_6->rpkts++;
  VAR_10 = 0;
 }

 VAR_8->cmdstat = VAR_2 | VAR_10 | VAR_11;
 VAR_9->dev = VAR_6->ifp->nd;
}
