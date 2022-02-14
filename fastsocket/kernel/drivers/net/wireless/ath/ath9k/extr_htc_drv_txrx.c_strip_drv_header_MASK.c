
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_mgmt_hdr {int cookie; } ;
struct tx_frame_hdr {int cookie; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_tx_ctl {scalar_t__ epid; } ;
struct ath9k_htc_priv {scalar_t__ mgmt_ep; scalar_t__ data_bk_ep; scalar_t__ data_be_ep; scalar_t__ data_vi_ep; scalar_t__ data_vo_ep; scalar_t__ cab_ep; int ah; } ;


 int VAR_0 ;
 struct ath9k_htc_tx_ctl* FUNC_0 (struct sk_buff*) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,char*,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static inline int FUNC_4(struct ath9k_htc_priv *VAR_1,
       struct sk_buff *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_1(VAR_1->ah);
 struct ath9k_htc_tx_ctl *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->epid == VAR_1->mgmt_ep) {
  struct tx_mgmt_hdr *VAR_6 =
   (struct tx_mgmt_hdr *)VAR_2->data;
  VAR_5 = VAR_6->cookie;
  FUNC_3(VAR_2, sizeof(struct tx_mgmt_hdr));
 } else if ((VAR_4->epid == VAR_1->data_bk_ep) ||
     (VAR_4->epid == VAR_1->data_be_ep) ||
     (VAR_4->epid == VAR_1->data_vi_ep) ||
     (VAR_4->epid == VAR_1->data_vo_ep) ||
     (VAR_4->epid == VAR_1->cab_ep)) {
  struct tx_frame_hdr *VAR_7 =
   (struct tx_frame_hdr *)VAR_2->data;
  VAR_5 = VAR_7->cookie;
  FUNC_3(VAR_2, sizeof(struct tx_frame_hdr));
 } else {
  FUNC_2(VAR_3, "Unsupported EPID: %d\n", VAR_4->epid);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
