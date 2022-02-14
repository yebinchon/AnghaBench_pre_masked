
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {int type; } ;
struct ath9k_vif_iter_data {int has_hw_macaddr; int* mask; int* hw_macaddr; int nwds; int nmeshes; int nadhocs; int nstations; int naps; } ;


 int VAR_0 ;





 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, u8 *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct ath9k_vif_iter_data *VAR_4 = VAR_1;
 int VAR_5;

 if (VAR_4->has_hw_macaddr) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   VAR_4->mask[VAR_5] &=
    ~(VAR_4->hw_macaddr[VAR_5] ^ VAR_2[VAR_5]);
 } else {
  FUNC_0(VAR_4->hw_macaddr, VAR_2, VAR_0);
  VAR_4->has_hw_macaddr = 1;
 }

 switch (VAR_3->type) {
 case 131:
  VAR_4->naps++;
  break;
 case 129:
  VAR_4->nstations++;
  break;
 case 132:
  VAR_4->nadhocs++;
  break;
 case 130:
  VAR_4->nmeshes++;
  break;
 case 128:
  VAR_4->nwds++;
  break;
 default:
  break;
 }
}
