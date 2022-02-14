
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tx_iter_data {int receive; int channel; } ;
struct ieee80211_vif {int chanctx_conf; } ;
struct TYPE_3__ {int chan; } ;
struct TYPE_4__ {TYPE_1__ def; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, u8 *VAR_1,
       struct ieee80211_vif *VAR_2)
{
 struct tx_iter_data *VAR_3 = VAR_0;

 if (!VAR_2->chanctx_conf)
  return;

 if (!FUNC_0(VAR_3->channel,
    FUNC_1(VAR_2->chanctx_conf)->def.chan))
  return;

 VAR_3->receive = 1;
}
