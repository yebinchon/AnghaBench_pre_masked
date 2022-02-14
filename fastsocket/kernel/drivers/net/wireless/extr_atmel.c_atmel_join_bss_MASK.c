
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bss_info {int SSIDsize; scalar_t__ BSStype; int channel; scalar_t__ preamble; scalar_t__ UsingWEP; int beacon_period; int SSID; int BSSID; } ;
struct atmel_private {int SSID_size; scalar_t__ operating_mode; int listen_interval; int channel; scalar_t__ preamble; scalar_t__ station_is_associated; scalar_t__ wep_is_on; int beacon_period; scalar_t__ power_mode; scalar_t__ use_wpa; int SSID; int CurrentBSSID; struct bss_info* BSSinfo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct atmel_private*,int ) ;
 int FUNC_1 (struct atmel_private*,int ,int ,int) ;
 int FUNC_2 (struct atmel_private*,int ,int ,scalar_t__) ;
 int FUNC_3 (struct atmel_private*) ;
 int FUNC_4 (struct atmel_private*,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct atmel_private *VAR_12, int VAR_13)
{
 struct bss_info *VAR_14 = &VAR_12->BSSinfo[VAR_13];

 FUNC_5(VAR_12->CurrentBSSID, VAR_14->BSSID, 6);
 FUNC_5(VAR_12->SSID, VAR_14->SSID, VAR_12->SSID_size = VAR_14->SSIDsize);


 if (VAR_12->use_wpa)
  FUNC_3(VAR_12);



 if (VAR_14->BSStype == VAR_3 &&
     VAR_12->operating_mode != VAR_3 &&
     VAR_12->power_mode) {
  VAR_12->power_mode = 0;
  VAR_12->listen_interval = 1;
  FUNC_2(VAR_12, VAR_9,
          VAR_8, VAR_0);
  FUNC_1(VAR_12, VAR_9,
    VAR_7, 1);
 }

 VAR_12->operating_mode = VAR_14->BSStype;
 VAR_12->channel = VAR_14->channel & 0x7f;
 VAR_12->beacon_period = VAR_14->beacon_period;

 if (VAR_12->preamble != VAR_14->preamble) {
  VAR_12->preamble = VAR_14->preamble;
  FUNC_2(VAR_12, VAR_6,
          VAR_5, VAR_14->preamble);
 }

 if (!VAR_12->wep_is_on && VAR_14->UsingWEP) {
  FUNC_0(VAR_12, VAR_11);
  VAR_12->station_is_associated = 0;
  return;
 }

 if (VAR_12->wep_is_on && !VAR_14->UsingWEP) {
  FUNC_0(VAR_12, VAR_11);
  VAR_12->station_is_associated = 0;
  return;
 }

 FUNC_0(VAR_12, VAR_10);

 if (VAR_12->operating_mode == VAR_4)
  FUNC_4(VAR_12, VAR_2);
 else
  FUNC_4(VAR_12, VAR_1);
}
