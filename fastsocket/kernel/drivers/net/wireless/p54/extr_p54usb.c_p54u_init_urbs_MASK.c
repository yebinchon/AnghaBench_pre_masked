
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;
struct p54u_rx_info {struct ieee80211_hw* dev; struct urb* urb; } ;
struct TYPE_2__ {scalar_t__ rx_mtu; } ;
struct p54u_priv {int rx_queue; int submitted; TYPE_1__ common; int udev; } ;
struct ieee80211_hw {struct p54u_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int *) ;
 struct urb* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct urb*,int *) ;
 int FUNC_9 (struct urb*,int ,int ,int ,scalar_t__,int ,struct sk_buff*) ;
 int FUNC_10 (struct urb*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct urb*,int ) ;
 int FUNC_13 (struct urb*) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_hw *VAR_4)
{
 struct p54u_priv *VAR_5 = VAR_4->priv;
 struct urb *VAR_6 = ((void*)0);
 struct sk_buff *VAR_7;
 struct p54u_rx_info *VAR_8;
 int VAR_9 = 0;

 while (FUNC_3(&VAR_5->rx_queue) < 32) {
  VAR_7 = FUNC_0(VAR_5->common.rx_mtu + 32, VAR_1);
  if (!VAR_7) {
   VAR_9 = -VAR_0;
   goto err;
  }
  VAR_6 = FUNC_7(0, VAR_1);
  if (!VAR_6) {
   VAR_9 = -VAR_0;
   goto err;
  }

  FUNC_9(VAR_6, VAR_5->udev,
      FUNC_11(VAR_5->udev, VAR_2),
      FUNC_5(VAR_7),
      VAR_5->common.rx_mtu + 32, VAR_3, VAR_7);
  VAR_8 = (struct p54u_rx_info *) VAR_7->cb;
  VAR_8->urb = VAR_6;
  VAR_8->dev = VAR_4;
  FUNC_4(&VAR_5->rx_queue, VAR_7);

  FUNC_8(VAR_6, &VAR_5->submitted);
  VAR_9 = FUNC_12(VAR_6, VAR_1);
  if (VAR_9) {
   FUNC_6(VAR_7, &VAR_5->rx_queue);
   FUNC_13(VAR_6);
   goto err;
  }
  FUNC_10(VAR_6);
  VAR_6 = ((void*)0);
 }

 return 0;

 err:
 FUNC_10(VAR_6);
 FUNC_1(VAR_7);
 FUNC_2(VAR_4);
 return VAR_9;
}
