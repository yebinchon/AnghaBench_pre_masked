
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {scalar_t__ bt_traffic_load; scalar_t__ bt_is_sco; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwl_priv*,int) ;

void FUNC_1(struct iwl_priv *VAR_1)
{
 if (VAR_1->bt_is_sco &&
     VAR_1->bt_traffic_load == VAR_0)
  FUNC_0(VAR_1, 1);
 else
  FUNC_0(VAR_1, 0);
}
