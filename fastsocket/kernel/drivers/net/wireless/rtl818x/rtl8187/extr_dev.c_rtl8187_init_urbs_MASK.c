
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;
struct rtl8187_rx_info {struct ieee80211_hw* dev; struct urb* urb; } ;
struct rtl8187_priv {int anchored; int rx_queue; scalar_t__ is_rtl8187b; int udev; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int *) ;
 struct urb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct urb*,int *) ;
 int FUNC_8 (struct urb*,int ,int ,int ,int ,int ,struct sk_buff*) ;
 int FUNC_9 (struct urb*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct urb*,int ) ;
 int FUNC_13 (struct urb*) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_hw *VAR_4)
{
 struct rtl8187_priv *VAR_5 = VAR_4->priv;
 struct urb *VAR_6 = ((void*)0);
 struct sk_buff *VAR_7;
 struct rtl8187_rx_info *VAR_8;
 int VAR_9 = 0;

 while (FUNC_2(&VAR_5->rx_queue) < 16) {
  VAR_7 = FUNC_0(VAR_2, VAR_1);
  if (!VAR_7) {
   VAR_9 = -VAR_0;
   goto err;
  }
  VAR_6 = FUNC_6(0, VAR_1);
  if (!VAR_6) {
   VAR_9 = -VAR_0;
   goto err;
  }
  FUNC_8(VAR_6, VAR_5->udev,
      FUNC_11(VAR_5->udev,
      VAR_5->is_rtl8187b ? 3 : 1),
      FUNC_4(VAR_7),
      VAR_2, VAR_3, VAR_7);
  VAR_8 = (struct rtl8187_rx_info *)VAR_7->cb;
  VAR_8->urb = VAR_6;
  VAR_8->dev = VAR_4;
  FUNC_3(&VAR_5->rx_queue, VAR_7);
  FUNC_7(VAR_6, &VAR_5->anchored);
  VAR_9 = FUNC_12(VAR_6, VAR_1);
  if (VAR_9) {
   FUNC_5(VAR_7, &VAR_5->rx_queue);
   FUNC_13(VAR_6);
   goto err;
  }
  FUNC_9(VAR_6);
 }
 return VAR_9;

err:
 FUNC_9(VAR_6);
 FUNC_1(VAR_7);
 FUNC_10(&VAR_5->anchored);
 return VAR_9;
}
