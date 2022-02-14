
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wps_data {int use_psk_key; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct wps_data *VAR_10, const u8 *VAR_11)
{
 u16 VAR_12;

 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_0, "WPS: No Config Methods received");
  return -1;
 }

 VAR_12 = FUNC_0(VAR_11);

 FUNC_1(VAR_0, "WPS: Enrollee Config Methods 0x%x"
     "%s%s%s%s%s%s%s%s%s", VAR_12,
     VAR_12 & VAR_9 ? " [USBA]" : "",
     VAR_12 & VAR_2 ? " [Ethernet]" : "",
     VAR_12 & VAR_6 ? " [Label]" : "",
     VAR_12 & VAR_1 ? " [Display]" : "",
     VAR_12 & VAR_3 ? " [Ext NFC Token]" : "",
     VAR_12 & VAR_4 ? " [Int NFC Token]" : "",
     VAR_12 & VAR_7 ? " [NFC]" : "",
     VAR_12 & VAR_8 ? " [PBC]" : "",
     VAR_12 & VAR_5 ? " [Keypad]" : "");

 if (!(VAR_12 & VAR_1) && !VAR_10->use_psk_key) {





  FUNC_1(VAR_0, "WPS: Prefer PSK format key due to "
      "Enrollee not supporting display");
  VAR_10->use_psk_key = 1;
 }

 return 0;
}
