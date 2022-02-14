
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {int * survey; int * used_rxkeys; int * rssi_db; int * curve_data; int * output_limit; int * iq_autocal; int ** band_table; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ieee80211_hw *VAR_1)
{
 struct p54_common *VAR_2 = VAR_1->priv;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(VAR_2->band_table[VAR_3]);

 FUNC_1(VAR_2->iq_autocal);
 FUNC_1(VAR_2->output_limit);
 FUNC_1(VAR_2->curve_data);
 FUNC_1(VAR_2->rssi_db);
 FUNC_1(VAR_2->used_rxkeys);
 FUNC_1(VAR_2->survey);
 VAR_2->iq_autocal = ((void*)0);
 VAR_2->output_limit = ((void*)0);
 VAR_2->curve_data = ((void*)0);
 VAR_2->rssi_db = ((void*)0);
 VAR_2->used_rxkeys = ((void*)0);
 VAR_2->survey = ((void*)0);
 FUNC_0(VAR_1);
}
