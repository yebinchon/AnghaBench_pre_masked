
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atmel_private {int BSS_list_entries; int current_BSS; scalar_t__ operating_mode; scalar_t__ SSID_size; TYPE_1__* BSSinfo; int SSID; scalar_t__ wep_is_on; scalar_t__ connect_to_any_BSS; } ;
struct TYPE_2__ {scalar_t__ BSStype; int channel; int RSSI; scalar_t__ SSIDsize; int SSID; scalar_t__ UsingWEP; } ;


 scalar_t__ FUNC_0 (struct atmel_private*,int) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct atmel_private *VAR_0)
{
 int VAR_1;
 int VAR_2 = -128;
 int VAR_3 = -1;

 if (VAR_0->BSS_list_entries == 0)
  return -1;

 if (VAR_0->connect_to_any_BSS) {




  VAR_0->current_BSS = 0;
  for (VAR_1 = 0; VAR_1 < VAR_0->BSS_list_entries; VAR_1++) {
   if (VAR_0->operating_mode == VAR_0->BSSinfo[VAR_1].BSStype &&
       ((!VAR_0->wep_is_on && !VAR_0->BSSinfo[VAR_1].UsingWEP) ||
        (VAR_0->wep_is_on && VAR_0->BSSinfo[VAR_1].UsingWEP)) &&
       !(VAR_0->BSSinfo[VAR_1].channel & 0x80)) {
    VAR_2 = VAR_0->BSSinfo[VAR_1].RSSI;
    VAR_0->current_BSS = VAR_3 = VAR_1;
   }
  }
  return VAR_3;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->BSS_list_entries; VAR_1++) {
  if (VAR_0->SSID_size == VAR_0->BSSinfo[VAR_1].SSIDsize &&
      FUNC_1(VAR_0->SSID, VAR_0->BSSinfo[VAR_1].SSID, VAR_0->SSID_size) == 0 &&
      VAR_0->operating_mode == VAR_0->BSSinfo[VAR_1].BSStype &&
      FUNC_0(VAR_0, VAR_0->BSSinfo[VAR_1].channel) == 0) {
   if (VAR_0->BSSinfo[VAR_1].RSSI >= VAR_2) {
    VAR_2 = VAR_0->BSSinfo[VAR_1].RSSI;
    VAR_3 = VAR_1;
   }
  }
 }
 return VAR_3;
}
