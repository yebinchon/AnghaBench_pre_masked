
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_flags; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct p54u_priv {int submitted; int udev; } ;
struct p54_hdr {int req_id; } ;
struct lm87_tx_hdr {int device_addr; int chksum; } ;
struct ieee80211_hw {struct p54u_priv* priv; } ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 struct urb* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (struct urb*,int ,int ,struct lm87_tx_hdr*,scalar_t__,int ,struct sk_buff*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct urb*,int ) ;
 int FUNC_9 (struct urb*) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_5, struct sk_buff *VAR_6)
{
 struct p54u_priv *VAR_7 = VAR_5->priv;
 struct urb *VAR_8;
 struct lm87_tx_hdr *VAR_9 = (void *)VAR_6->data - sizeof(*VAR_9);

 VAR_8 = FUNC_3(0, VAR_0);
 if (!VAR_8) {
  FUNC_1(VAR_5, VAR_6);
  return;
 }

 VAR_9->chksum = FUNC_2((__le32 *)VAR_6->data, VAR_6->len);
 VAR_9->device_addr = ((struct p54_hdr *)VAR_6->data)->req_id;

 FUNC_5(VAR_8, VAR_7->udev,
     FUNC_7(VAR_7->udev, VAR_1),
     VAR_9, VAR_6->len + sizeof(*VAR_9), FUNC_0(VAR_6) ?
     VAR_3 : VAR_4, VAR_6);
 VAR_8->transfer_flags |= VAR_2;

 FUNC_4(VAR_8, &VAR_7->submitted);
 if (FUNC_8(VAR_8, VAR_0)) {
  FUNC_9(VAR_8);
  FUNC_1(VAR_5, VAR_6);
 }
 FUNC_6(VAR_8);
}
