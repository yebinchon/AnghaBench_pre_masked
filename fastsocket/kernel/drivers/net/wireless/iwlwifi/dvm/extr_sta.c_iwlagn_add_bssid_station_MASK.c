
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_rxon_context {int dummy; } ;
struct iwl_priv {int sta_lock; TYPE_1__* stations; } ;
struct iwl_link_quality_cmd {int dummy; } ;
struct TYPE_2__ {struct iwl_link_quality_cmd* lq; int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_priv*,struct iwl_rxon_context*,size_t const*,int ,int *,size_t*) ;
 int FUNC_2 (struct iwl_priv*,struct iwl_rxon_context*,struct iwl_link_quality_cmd*,int ,int) ;
 struct iwl_link_quality_cmd* FUNC_3 (struct iwl_priv*,struct iwl_rxon_context*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iwl_priv *VAR_4,
        struct iwl_rxon_context *VAR_5,
        const u8 *VAR_6, u8 *VAR_7)
{
 int VAR_8;
 u8 VAR_9;
 struct iwl_link_quality_cmd *VAR_10;

 if (VAR_7)
  *VAR_7 = VAR_2;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, 0, ((void*)0), &VAR_9);
 if (VAR_8) {
  FUNC_0(VAR_4, "Unable to add station %pM\n", VAR_6);
  return VAR_8;
 }

 if (VAR_7)
  *VAR_7 = VAR_9;

 FUNC_4(&VAR_4->sta_lock);
 VAR_4->stations[VAR_9].used |= VAR_3;
 FUNC_5(&VAR_4->sta_lock);


 VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_9);
 if (!VAR_10) {
  FUNC_0(VAR_4,
   "Unable to initialize rate scaling for station %pM.\n",
   VAR_6);
  return -VAR_1;
 }

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_10, VAR_0, 1);
 if (VAR_8)
  FUNC_0(VAR_4, "Link quality command failed (%d)\n", VAR_8);

 FUNC_4(&VAR_4->sta_lock);
 VAR_4->stations[VAR_9].lq = VAR_10;
 FUNC_5(&VAR_4->sta_lock);

 return 0;
}
