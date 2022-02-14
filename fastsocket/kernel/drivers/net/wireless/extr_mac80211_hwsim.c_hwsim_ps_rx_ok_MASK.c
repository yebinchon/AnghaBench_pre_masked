
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct mac80211_hwsim_data {int ps; int ps_poll_pending; TYPE_2__* hw; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {int perm_addr; } ;


 int VAR_0 ;




 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct mac80211_hwsim_data *VAR_1,
      struct sk_buff *VAR_2)
{
 switch (VAR_1->ps) {
 case 130:
  return 1;
 case 129:
  return 0;
 case 131:


  return 1;
 case 128:


  if (VAR_1->ps_poll_pending &&
      FUNC_0(VAR_1->hw->wiphy->perm_addr, VAR_2->data + 4,
      VAR_0) == 0) {
   VAR_1->ps_poll_pending = 0;
   return 1;
  }
  return 0;
 }

 return 1;
}
