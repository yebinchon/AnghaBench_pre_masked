
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_parse_attr {int const* version2; int const* authorized_macs; int authorized_macs_len; int const* network_key_shareable; int const* request_to_enroll; int const* settings_delay_time; } ;


 int VAR_0 ;





 int FUNC_0 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct wps_parse_attr *VAR_1,
       u8 VAR_2, u8 VAR_3, const u8 *VAR_4)
{
 FUNC_0(VAR_0, "WPS: WFA subelement id=%u len=%u",
     VAR_2, VAR_3);
 switch (VAR_2) {
 case 128:
  if (VAR_3 != 1) {
   FUNC_0(VAR_0, "WPS: Invalid Version2 length "
       "%u", VAR_3);
   return -1;
  }
  VAR_1->version2 = VAR_4;
  break;
 case 132:
  VAR_1->authorized_macs = VAR_4;
  VAR_1->authorized_macs_len = VAR_3;
  break;
 case 131:
  if (VAR_3 != 1) {
   FUNC_0(VAR_0, "WPS: Invalid Network Key "
       "Shareable length %u", VAR_3);
   return -1;
  }
  VAR_1->network_key_shareable = VAR_4;
  break;
 case 130:
  if (VAR_3 != 1) {
   FUNC_0(VAR_0, "WPS: Invalid Request to Enroll "
       "length %u", VAR_3);
   return -1;
  }
  VAR_1->request_to_enroll = VAR_4;
  break;
 case 129:
  if (VAR_3 != 1) {
   FUNC_0(VAR_0, "WPS: Invalid Settings Delay "
       "Time length %u", VAR_3);
   return -1;
  }
  VAR_1->settings_delay_time = VAR_4;
  break;
 default:
  FUNC_0(VAR_0, "WPS: Skipped unknown WFA Vendor "
      "Extension subelement %u", VAR_2);
  break;
 }

 return 0;
}
