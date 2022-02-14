
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_5__ {TYPE_1__* bas; } ;
struct bc_state {struct sk_buff* skb; TYPE_3__* cs; TYPE_2__ hw; int ignore; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int goodbytes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (struct sk_buff*,TYPE_3__*,struct bc_state*) ;
 int FUNC_5 (struct bc_state*) ;
 unsigned char* FUNC_6 (struct sk_buff*,unsigned int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static inline void FUNC_9(unsigned char *VAR_4, unsigned VAR_5,
     struct bc_state *VAR_6)
{
 struct sk_buff *VAR_7;
 int VAR_8;
 unsigned char *VAR_9;

 if (FUNC_8(VAR_6->ignore)) {
  VAR_6->ignore--;
  FUNC_5(VAR_6);
  return;
 }
 if (FUNC_8((VAR_7 = VAR_6->skb) == ((void*)0))) {
  VAR_6->skb = VAR_7 = FUNC_1(VAR_2 + VAR_1);
  if (!VAR_7) {
   FUNC_2(VAR_6->cs->dev, "could not allocate skb\n");
   return;
  }
  FUNC_7(VAR_7, VAR_1);
 }
 VAR_6->hw.bas->goodbytes += VAR_7->len;
 VAR_8 = VAR_3 - VAR_7->len;
 while (VAR_5 > 0) {
  VAR_9 = FUNC_6(VAR_7, VAR_5 < VAR_8 ? VAR_5 : VAR_8);
  while (VAR_5 > 0 && VAR_8 > 0) {
   *VAR_9++ = FUNC_0(*VAR_4++);
   VAR_5--;
   VAR_8--;
  }
  if (VAR_8 == 0) {
   FUNC_3(VAR_0,
       "rcv data", VAR_7->data, VAR_7->len);
   FUNC_4(VAR_7, VAR_6->cs, VAR_6);
   VAR_6->skb = VAR_7 = FUNC_1(VAR_2 + VAR_1);
   if (!VAR_7) {
    FUNC_2(VAR_6->cs->dev,
     "could not allocate skb\n");
    return;
   }
   FUNC_7(VAR_6->skb, VAR_1);
   VAR_8 = VAR_3;
  }
 }
}
