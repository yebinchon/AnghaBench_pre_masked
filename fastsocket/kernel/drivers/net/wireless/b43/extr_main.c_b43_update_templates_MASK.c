
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct b43_wl {int beacon0_uploaded; int beacon1_uploaded; int beacon_update_trigger; int hw; struct sk_buff* current_beacon; int vif; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct b43_wl *VAR_0)
{
 struct sk_buff *VAR_1;
 VAR_1 = FUNC_1(VAR_0->hw, VAR_0->vif);
 if (FUNC_3(!VAR_1))
  return;

 if (VAR_0->current_beacon)
  FUNC_0(VAR_0->current_beacon);
 VAR_0->current_beacon = VAR_1;
 VAR_0->beacon0_uploaded = 0;
 VAR_0->beacon1_uploaded = 0;
 FUNC_2(VAR_0->hw, &VAR_0->beacon_update_trigger);
}
