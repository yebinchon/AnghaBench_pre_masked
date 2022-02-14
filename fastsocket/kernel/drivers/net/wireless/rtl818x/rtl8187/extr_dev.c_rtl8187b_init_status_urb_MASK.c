
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct TYPE_2__ {int buf; } ;
struct rtl8187_priv {int anchored; TYPE_1__ b_tx_status; int udev; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct urb* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct urb*,int *) ;
 int FUNC_2 (struct urb*,int ,int ,int *,int,int ,struct ieee80211_hw*) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct urb*,int ) ;
 int FUNC_6 (struct urb*) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_3)
{
 struct rtl8187_priv *VAR_4 = VAR_3->priv;
 struct urb *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_0(0, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(VAR_5, VAR_4->udev, FUNC_4(VAR_4->udev, 9),
     &VAR_4->b_tx_status.buf, sizeof(VAR_4->b_tx_status.buf),
     VAR_2, VAR_3);

 FUNC_1(VAR_5, &VAR_4->anchored);
 VAR_6 = FUNC_5(VAR_5, VAR_1);
 if (VAR_6)
  FUNC_6(VAR_5);
 FUNC_3(VAR_5);

 return VAR_6;
}
