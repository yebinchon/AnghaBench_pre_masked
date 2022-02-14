
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_rxon_context {size_t bcast_sta_id; } ;
struct iwl_priv {int sta_lock; TYPE_1__* stations; } ;
struct iwl_link_quality_cmd {int dummy; } ;
struct TYPE_2__ {struct iwl_link_quality_cmd* lq; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 struct iwl_link_quality_cmd* FUNC_2 (struct iwl_priv*,struct iwl_rxon_context*,size_t) ;
 int FUNC_3 (struct iwl_link_quality_cmd*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iwl_priv *VAR_1,
        struct iwl_rxon_context *VAR_2)
{
 struct iwl_link_quality_cmd *VAR_3;
 u8 VAR_4 = VAR_2->bcast_sta_id;

 VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_4);
 if (!VAR_3) {
  FUNC_1(VAR_1, "Unable to initialize rate scaling for bcast station.\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_1->sta_lock);
 if (VAR_1->stations[VAR_4].lq)
  FUNC_3(VAR_1->stations[VAR_4].lq);
 else
  FUNC_0(VAR_1, "Bcast station rate scaling has not been initialized yet.\n");
 VAR_1->stations[VAR_4].lq = VAR_3;
 FUNC_5(&VAR_1->sta_lock);

 return 0;
}
