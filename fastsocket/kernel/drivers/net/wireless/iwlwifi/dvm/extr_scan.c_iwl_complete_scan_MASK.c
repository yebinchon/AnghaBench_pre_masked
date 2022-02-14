
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {scalar_t__ scan_type; int * scan_request; int * scan_vif; int hw; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct iwl_priv*) ;

__attribute__((used)) static void FUNC_3(struct iwl_priv *VAR_2, bool VAR_3)
{

 if (VAR_2->scan_request) {
  FUNC_0(VAR_2, "Complete scan in mac80211\n");
  FUNC_1(VAR_2->hw, VAR_3);
 }

 if (VAR_2->scan_type == VAR_1)
  FUNC_2(VAR_2);

 VAR_2->scan_type = VAR_0;
 VAR_2->scan_vif = ((void*)0);
 VAR_2->scan_request = ((void*)0);
}
