
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath9k_htc_priv {int num_sta_assoc_vif; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (int ,int ,int ,struct ath9k_htc_priv*) ;

__attribute__((used)) static void FUNC_2(struct ath9k_htc_priv *VAR_2)
{
 if (VAR_2->num_sta_assoc_vif == 1) {
  FUNC_1(
   VAR_2->hw, VAR_0,
   VAR_1, VAR_2);
  FUNC_0(VAR_2);
 }
}
