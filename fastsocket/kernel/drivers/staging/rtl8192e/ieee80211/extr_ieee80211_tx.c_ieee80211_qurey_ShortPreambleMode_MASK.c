
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int capability; } ;
struct ieee80211_device {TYPE_1__ current_network; } ;
struct TYPE_5__ {int bUseShortPreamble; int data_rate; } ;
typedef TYPE_2__ cb_desc ;


 int VAR_0 ;

extern void FUNC_0(struct ieee80211_device* VAR_1, cb_desc* VAR_2)
{
 VAR_2->bUseShortPreamble = 0;
 if (VAR_2->data_rate == 2)
 {
  return;
 }
 else if (VAR_1->current_network.capability & VAR_0)
 {
  VAR_2->bUseShortPreamble = 1;
 }
 return;
}
