
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int wowlan_sram; int noa_data; int beacon_cmd; int scan_cmd; } ;


 int FUNC_0 (struct iwl_priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct iwl_priv *VAR_0)
{
 FUNC_1(VAR_0->scan_cmd);
 FUNC_1(VAR_0->beacon_cmd);
 FUNC_1(FUNC_2(VAR_0->noa_data));
 FUNC_0(VAR_0);



}
