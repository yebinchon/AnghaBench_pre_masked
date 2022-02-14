
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long data; int function; } ;
struct iwl_priv {TYPE_2__ ucode_trace; TYPE_2__ statistics_periodic; TYPE_1__* cfg; int hw_roc_disable_work; int bt_runtime_config; int bt_full_concurrency; int tx_flush; int run_time_calib_work; int beacon_update; int restart; int workqueue; } ;
struct TYPE_3__ {scalar_t__ bt_params; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (struct iwl_priv*) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_6(struct iwl_priv *VAR_10)
{
 VAR_10->workqueue = FUNC_2(VAR_0);

 FUNC_1(&VAR_10->restart, VAR_4);
 FUNC_1(&VAR_10->beacon_update, VAR_1);
 FUNC_1(&VAR_10->run_time_calib_work, VAR_5);
 FUNC_1(&VAR_10->tx_flush, VAR_7);
 FUNC_1(&VAR_10->bt_full_concurrency, VAR_2);
 FUNC_1(&VAR_10->bt_runtime_config, VAR_3);
 FUNC_0(&VAR_10->hw_roc_disable_work,
     VAR_9);

 FUNC_4(VAR_10);

 if (VAR_10->cfg->bt_params)
  FUNC_5(VAR_10);

 FUNC_3(&VAR_10->statistics_periodic);
 VAR_10->statistics_periodic.data = (unsigned long)VAR_10;
 VAR_10->statistics_periodic.function = VAR_6;

 FUNC_3(&VAR_10->ucode_trace);
 VAR_10->ucode_trace.data = (unsigned long)VAR_10;
 VAR_10->ucode_trace.function = VAR_8;
}
