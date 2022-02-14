
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ qlen; } ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_6__ {scalar_t__ qlen; } ;
struct usbnet {int net; TYPE_2__ txq; int bh; TYPE_1__ rxq; int flags; int delay; scalar_t__ wait; TYPE_3__ done; } ;
struct skb_data {int state; int urb; } ;
struct sk_buff {scalar_t__ cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usbnet*) ;
 scalar_t__ FUNC_1 (struct usbnet*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct usbnet*,int ,int ,char*,int,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct usbnet*,int ) ;


 int FUNC_11 (struct usbnet*,struct sk_buff*) ;
 struct sk_buff* FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *) ;

 int FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__) ;

__attribute__((used)) static void FUNC_18 (unsigned long VAR_5)
{
 struct usbnet *VAR_6 = (struct usbnet *) VAR_5;
 struct sk_buff *VAR_7;
 struct skb_data *VAR_8;

 while ((VAR_7 = FUNC_12 (&VAR_6->done))) {
  VAR_8 = (struct skb_data *) VAR_7->cb;
  switch (VAR_8->state) {
  case 129:
   VAR_8->state = 130;
   FUNC_11 (VAR_6, VAR_7);
   continue;
  case 128:
  case 130:
   FUNC_16 (VAR_8->urb);
   FUNC_3 (VAR_7);
   continue;
  default:
   FUNC_4(VAR_6->net, "bogus skb state %d\n", VAR_8->state);
  }
 }


 FUNC_2(VAR_2, &VAR_6->flags);


 if (VAR_6->wait) {
  if ((VAR_6->txq.qlen + VAR_6->rxq.qlen + VAR_6->done.qlen) == 0) {
   FUNC_17 (VAR_6->wait);
  }


 } else if (FUNC_8 (VAR_6->net) &&
     FUNC_7 (VAR_6->net) &&
     FUNC_5(VAR_6->net) &&
     !FUNC_15 (&VAR_6->delay) &&
     !FUNC_14 (VAR_1, &VAR_6->flags)) {
  int VAR_9 = VAR_6->rxq.qlen;

  if (VAR_9 < FUNC_0(VAR_6)) {
   if (FUNC_10(VAR_6, VAR_3) == -VAR_0)
    return;
   if (VAR_9 != VAR_6->rxq.qlen)
    FUNC_6(VAR_6, VAR_4, VAR_6->net,
       "rxqlen %d --> %d\n",
       VAR_9, VAR_6->rxq.qlen);
   if (VAR_6->rxq.qlen < FUNC_0(VAR_6))
    FUNC_13 (&VAR_6->bh);
  }
  if (VAR_6->txq.qlen < FUNC_1 (VAR_6))
   FUNC_9 (VAR_6->net);
 }
}
