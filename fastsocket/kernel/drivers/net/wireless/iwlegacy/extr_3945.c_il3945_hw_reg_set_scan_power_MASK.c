
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct il_priv {int const tx_power_user_lmt; } ;
struct il_channel_info {int scan_power; TYPE_1__* power_info; struct il3945_scan_power_info* scan_pwr_info; } ;
struct TYPE_5__ {int dsp_atten; int tx_gain; } ;
struct il3945_scan_power_info {int requested_power; size_t power_table_idx; TYPE_2__ tpc; } ;
typedef int s8 ;
typedef size_t s32 ;
struct TYPE_6__ {int dsp_atten; int tx_gain; } ;
struct TYPE_4__ {size_t power_table_idx; int requested_power; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int,int const) ;
 TYPE_3__** VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct il_priv *VAR_2, u32 VAR_3, s32 VAR_4,
        const s8 *VAR_5,
        struct il_channel_info *VAR_6, int VAR_7)
{
 struct il3945_scan_power_info *VAR_8;
 s8 VAR_9;
 u8 VAR_10;

 VAR_8 = &VAR_6->scan_pwr_info[VAR_3];




 VAR_9 = FUNC_1(VAR_6->scan_power, VAR_5[VAR_0]);

 VAR_9 = FUNC_1(VAR_9, VAR_2->tx_power_user_lmt);
 VAR_8->requested_power = VAR_9;






 VAR_10 =
     VAR_6->power_info[VAR_4].power_table_idx - (VAR_9 -
            VAR_6->
            power_info
            [VAR_0].
            requested_power) *
     2;
 VAR_10 = FUNC_0(VAR_10);

 VAR_8->power_table_idx = VAR_10;
 VAR_8->tpc.tx_gain =
     VAR_1[VAR_7][VAR_10].tx_gain;
 VAR_8->tpc.dsp_atten =
     VAR_1[VAR_7][VAR_10].dsp_atten;
}
