
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {size_t len; size_t data_len; size_t truesize; } ;
struct frame {size_t bcnt; scalar_t__ sent_jiffs; int sent; struct sk_buff* skb; int flags; } ;
struct aoetgt {struct aoedev* d; int addr; } ;
struct aoedev {size_t maxbcnt; int aoeminor; scalar_t__ aoemajor; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct frame*) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (struct aoetgt*) ;
 scalar_t__ VAR_5 ;
 struct frame* FUNC_6 (struct aoedev*,struct aoetgt*) ;
 int FUNC_7 (char*,char*,int ,long,int ,char*) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct sk_buff*,int,int ,int ,size_t) ;

__attribute__((used)) static void
FUNC_10(struct aoetgt *VAR_6)
{
 struct aoedev *VAR_7;
 struct frame *VAR_8;
 struct sk_buff *VAR_9;
 struct sk_buff_head VAR_10;
 size_t VAR_11, VAR_12;
 int VAR_13;

 VAR_7 = VAR_6->d;
 VAR_8 = FUNC_6(VAR_7, VAR_6);
 if (!VAR_8) {
  FUNC_7("%s %pm for e%ld.%d: %s\n",
   "aoe: cannot probe remote address",
   VAR_6->addr,
   (long) VAR_7->aoemajor, VAR_7->aoeminor,
   "no frame available");
  return;
 }
 VAR_8->flags |= VAR_1;
 FUNC_5(VAR_6);
 VAR_8->bcnt = VAR_6->d->maxbcnt ? VAR_6->d->maxbcnt : VAR_0;
 FUNC_3(VAR_8);
 VAR_9 = VAR_8->skb;
 for (VAR_13 = 0, VAR_11 = VAR_8->bcnt; VAR_11 > 0; ++VAR_13, VAR_11 -= VAR_12) {
  if (VAR_11 < VAR_3)
   VAR_12 = VAR_11;
  else
   VAR_12 = VAR_3;
  FUNC_9(VAR_9, VAR_13, VAR_4, 0, VAR_12);
 }
 VAR_9->len += VAR_8->bcnt;
 VAR_9->data_len = VAR_8->bcnt;
 VAR_9->truesize += VAR_8->bcnt;

 VAR_9 = FUNC_8(VAR_8->skb, VAR_2);
 if (VAR_9) {
  FUNC_4(&VAR_8->sent);
  VAR_8->sent_jiffs = (u32) VAR_5;
  FUNC_0(&VAR_10);
  FUNC_1(&VAR_10, VAR_9);
  FUNC_2(&VAR_10);
 }
}
