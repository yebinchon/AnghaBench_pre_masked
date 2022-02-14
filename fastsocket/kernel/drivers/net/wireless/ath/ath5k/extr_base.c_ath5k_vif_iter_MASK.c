
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ath5k_vif_iter_data {int* hw_macaddr; int* mask; int found_active; int need_set_hw_addr; int any_assoc; scalar_t__ opmode; int n_stas; int active_mac; } ;
struct ath5k_vif {scalar_t__ opmode; scalar_t__ assoc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int*,int*) ;
 int FUNC_1 (int ,int*,int) ;

void FUNC_2(void *VAR_4, u8 *VAR_5, struct ieee80211_vif *VAR_6)
{
 struct ath5k_vif_iter_data *VAR_7 = VAR_4;
 int VAR_8;
 struct ath5k_vif *VAR_9 = (void *)VAR_6->drv_priv;

 if (VAR_7->hw_macaddr)
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   VAR_7->mask[VAR_8] &=
    ~(VAR_7->hw_macaddr[VAR_8] ^ VAR_5[VAR_8]);

 if (!VAR_7->found_active) {
  VAR_7->found_active = 1;
  FUNC_1(VAR_7->active_mac, VAR_5, VAR_0);
 }

 if (VAR_7->need_set_hw_addr && VAR_7->hw_macaddr)
  if (FUNC_0(VAR_7->hw_macaddr, VAR_5))
   VAR_7->need_set_hw_addr = 0;

 if (!VAR_7->any_assoc) {
  if (VAR_9->assoc)
   VAR_7->any_assoc = 1;
 }






 if (VAR_9->opmode == VAR_1)
  VAR_7->opmode = VAR_1;
 else {
  if (VAR_9->opmode == VAR_2)
   VAR_7->n_stas++;
  if (VAR_7->opmode == VAR_3)
   VAR_7->opmode = VAR_9->opmode;
 }
}
