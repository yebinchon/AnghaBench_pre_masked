
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {int dummy; } ;
struct TYPE_2__ {int sta_id; int modify_mask; } ;
struct iwl_addsta_cmd {int sleep_tx_count; TYPE_1__ sta; int station_flags_msk; int station_flags; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iwl_priv*,struct iwl_addsta_cmd*,int ) ;

void FUNC_2(struct iwl_priv *VAR_4, int VAR_5, int VAR_6)
{
 struct iwl_addsta_cmd VAR_7 = {
  .mode = VAR_1,
  .station_flags = VAR_2,
  .station_flags_msk = VAR_2,
  .sta.sta_id = VAR_5,
  .sta.modify_mask = VAR_3,
  .sleep_tx_count = FUNC_0(VAR_6),
 };

 FUNC_1(VAR_4, &VAR_7, VAR_0);
}
