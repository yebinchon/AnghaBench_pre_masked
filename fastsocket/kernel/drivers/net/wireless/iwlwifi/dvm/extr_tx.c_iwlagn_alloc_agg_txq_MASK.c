
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_priv {int* queue_to_mac80211; int agg_q_alloc; TYPE_2__* cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int num_of_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct iwl_priv *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_1;
      VAR_4 < VAR_2->cfg->base_params->num_of_queues; VAR_4++) {
  if (!FUNC_0(VAR_4, VAR_2->agg_q_alloc)) {
   VAR_2->queue_to_mac80211[VAR_4] = VAR_3;
   return VAR_4;
  }
 }

 return -VAR_0;
}
