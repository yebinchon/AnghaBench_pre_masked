
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_5__ {int tl; int flags; int netdev; int rx_urb; struct sk_buff* rx_skb; int udev; int rx_pool_lock; } ;
typedef TYPE_1__ rtl8150_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_5)
{
 rtl8150_t *VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_6 = (rtl8150_t *)VAR_5;

 FUNC_5(&VAR_6->rx_pool_lock);
 FUNC_1(VAR_6);
 FUNC_6(&VAR_6->rx_pool_lock);
 if (FUNC_8(VAR_3, &VAR_6->flags))
  if (VAR_6->rx_skb)
   goto try_again;
 FUNC_5(&VAR_6->rx_pool_lock);
 VAR_7 = FUNC_3(VAR_6);
 FUNC_6(&VAR_6->rx_pool_lock);
 if (VAR_7 == ((void*)0))
  goto tlsched;
 VAR_6->rx_skb = VAR_7;
 FUNC_9(VAR_6->rx_urb, VAR_6->udev, FUNC_10(VAR_6->udev, 1),
        VAR_6->rx_skb->data, VAR_2, VAR_4, VAR_6);
try_again:
 VAR_8 = FUNC_11(VAR_6->rx_urb, VAR_1);
 if (VAR_8 == -VAR_0) {
  FUNC_2(VAR_6->netdev);
 } else if (VAR_8) {
  FUNC_4(VAR_3, &VAR_6->flags);
  goto tlsched;
 } else {
  FUNC_0(VAR_3, &VAR_6->flags);
 }

 return;
tlsched:
 FUNC_7(&VAR_6->tl);
}
