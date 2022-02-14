
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {TYPE_1__* ac; } ;
struct TYPE_6__ {TYPE_2__ def_qos_parm; } ;
struct il_priv {int lock; TYPE_3__ qos_data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int cw_min; int cw_max; int txop; int aifs; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
struct TYPE_4__ {scalar_t__ reserved1; void* edca_txop; int aifsn; void* cw_max; void* cw_min; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int
FUNC_5(struct ieee80211_hw *VAR_2, struct ieee80211_vif *VAR_3, u16 VAR_4,
        const struct ieee80211_tx_queue_params *VAR_5)
{
 struct il_priv *VAR_6 = VAR_2->priv;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_0("enter\n");

 if (!FUNC_2(VAR_6)) {
  FUNC_0("leave - RF not ready\n");
  return -VAR_1;
 }

 if (VAR_4 >= VAR_0) {
  FUNC_0("leave - queue >= AC_NUM %d\n", VAR_4);
  return 0;
 }

 VAR_8 = VAR_0 - 1 - VAR_4;

 FUNC_3(&VAR_6->lock, VAR_7);

 VAR_6->qos_data.def_qos_parm.ac[VAR_8].cw_min =
     FUNC_1(VAR_5->cw_min);
 VAR_6->qos_data.def_qos_parm.ac[VAR_8].cw_max =
     FUNC_1(VAR_5->cw_max);
 VAR_6->qos_data.def_qos_parm.ac[VAR_8].aifsn = VAR_5->aifs;
 VAR_6->qos_data.def_qos_parm.ac[VAR_8].edca_txop =
     FUNC_1((VAR_5->txop * 32));

 VAR_6->qos_data.def_qos_parm.ac[VAR_8].reserved1 = 0;

 FUNC_4(&VAR_6->lock, VAR_7);

 FUNC_0("leave\n");
 return 0;
}
