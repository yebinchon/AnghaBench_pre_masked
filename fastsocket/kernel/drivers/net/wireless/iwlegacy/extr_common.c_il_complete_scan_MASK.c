
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int * scan_request; int * scan_vif; int hw; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct il_priv *VAR_0, bool VAR_1)
{

 if (VAR_0->scan_request) {
  FUNC_0("Complete scan in mac80211\n");
  FUNC_1(VAR_0->hw, VAR_1);
 }

 VAR_0->scan_vif = ((void*)0);
 VAR_0->scan_request = ((void*)0);
}
