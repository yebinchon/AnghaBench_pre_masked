
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ath9k_htc_priv {int data_vo_ep; int data_vi_ep; int data_be_ep; int data_bk_ep; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline enum htc_endpoint_id FUNC_1(struct ath9k_htc_priv *VAR_4,
      u16 VAR_5)
{
 enum htc_endpoint_id VAR_6;

 switch (VAR_5) {
 case 0:
  FUNC_0(VAR_3);
  VAR_6 = VAR_4->data_vo_ep;
  break;
 case 1:
  FUNC_0(VAR_2);
  VAR_6 = VAR_4->data_vi_ep;
  break;
 case 2:
  FUNC_0(VAR_0);
  VAR_6 = VAR_4->data_be_ep;
  break;
 case 3:
 default:
  FUNC_0(VAR_1);
  VAR_6 = VAR_4->data_bk_ep;
  break;
 }

 return VAR_6;
}
