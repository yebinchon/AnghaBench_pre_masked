
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxon_context {int dummy; } ;
struct iwl_priv {int mutex; } ;


 int FUNC_0 (struct iwl_priv*,struct iwl_rxon_context*,int) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct iwl_priv *VAR_0,
     struct iwl_rxon_context *VAR_1)
{
 FUNC_1(&VAR_0->mutex);

 return FUNC_0(VAR_0, VAR_1, 0);
}
