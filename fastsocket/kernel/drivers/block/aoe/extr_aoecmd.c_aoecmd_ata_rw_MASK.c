
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef scalar_t__ u32 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct frame {scalar_t__ bv_off; scalar_t__ sent_jiffs; int sent; int skb; scalar_t__ bcnt; struct buf* buf; TYPE_2__* bv; } ;
struct buf {scalar_t__ resid; scalar_t__ bv_resid; int nframesout; scalar_t__ sector; TYPE_2__* bv; } ;
struct aoetgt {int dummy; } ;
struct TYPE_3__ {int * buf; } ;
struct aoedev {scalar_t__ maxbcnt; TYPE_1__ ip; struct aoetgt** tgt; } ;
struct TYPE_4__ {scalar_t__ bv_offset; scalar_t__ bv_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct frame*) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 struct frame* FUNC_6 (struct aoedev*) ;
 struct buf* FUNC_7 (struct aoedev*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct aoedev *VAR_3)
{
 struct frame *VAR_4;
 struct buf *VAR_5;
 struct aoetgt *VAR_6;
 struct sk_buff *VAR_7;
 struct sk_buff_head VAR_8;
 ulong VAR_9, VAR_10;

 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5 == ((void*)0))
  return 0;
 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4 == ((void*)0))
  return 0;
 VAR_6 = *VAR_3->tgt;
 VAR_9 = VAR_3->maxbcnt;
 if (VAR_9 == 0)
  VAR_9 = VAR_0;
 if (VAR_9 > VAR_5->resid)
  VAR_9 = VAR_5->resid;
 VAR_10 = VAR_9;
 VAR_4->bv = VAR_5->bv;
 VAR_4->bv_off = VAR_4->bv->bv_offset + (VAR_4->bv->bv_len - VAR_5->bv_resid);
 do {
  if (VAR_10 < VAR_5->bv_resid) {
   VAR_5->bv_resid -= VAR_10;
   VAR_5->resid -= VAR_10;
   break;
  }
  VAR_10 -= VAR_5->bv_resid;
  VAR_5->resid -= VAR_5->bv_resid;
  if (VAR_5->resid == 0) {
   VAR_3->ip.buf = ((void*)0);
   break;
  }
  VAR_5->bv++;
  VAR_5->bv_resid = VAR_5->bv->bv_len;
  FUNC_0(VAR_5->bv_resid == 0);
 } while (VAR_10);


 VAR_4->buf = VAR_5;
 VAR_4->bcnt = VAR_9;
 FUNC_4(VAR_4);


 VAR_5->nframesout += 1;
 VAR_5->sector += VAR_9 >> 9;

 VAR_7 = FUNC_8(VAR_4->skb, VAR_1);
 if (VAR_7) {
  FUNC_5(&VAR_4->sent);
  VAR_4->sent_jiffs = (u32) VAR_2;
  FUNC_1(&VAR_8);
  FUNC_2(&VAR_8, VAR_7);
  FUNC_3(&VAR_8);
 }
 return 1;
}
