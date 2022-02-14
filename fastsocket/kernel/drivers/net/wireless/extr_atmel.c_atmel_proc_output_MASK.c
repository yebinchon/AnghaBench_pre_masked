
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int major_version; int minor_version; int build_version; } ;
struct atmel_private {int station_state; int card_type; char* firmware_id; scalar_t__ reg_domain; scalar_t__ use_wpa; scalar_t__ do_rx_crc; scalar_t__ firmware; TYPE_1__ host_info; } ;
struct TYPE_5__ {scalar_t__ reg_domain; char* name; } ;


 int FUNC_0 (TYPE_2__*) ;



 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int FUNC_2 (char *VAR_3, struct atmel_private *VAR_4)
{
 int VAR_5;
 char *VAR_6 = VAR_3;
 char *VAR_7, *VAR_8, *VAR_9;

 VAR_6 += FUNC_1(VAR_6, "Driver version:\t\t%d.%d\n",
       VAR_0, VAR_1);

 if (VAR_4->station_state != 133) {
  VAR_6 += FUNC_1(VAR_6, "Firmware version:\t%d.%d build %d\n"
    "Firmware location:\t",
        VAR_4->host_info.major_version,
        VAR_4->host_info.minor_version,
        VAR_4->host_info.build_version);

  if (VAR_4->card_type != 138)
   VAR_6 += FUNC_1(VAR_6, "on card\n");
  else if (VAR_4->firmware)
   VAR_6 += FUNC_1(VAR_6, "%s loaded by host\n",
         VAR_4->firmware_id);
  else
   VAR_6 += FUNC_1(VAR_6, "%s loaded by hotplug\n",
         VAR_4->firmware_id);

  switch (VAR_4->card_type) {
  case 137:
   VAR_9 = "Parallel flash";
   break;
  case 136:
   VAR_9 = "SPI flash\n";
   break;
  case 138:
   VAR_9 = "EEPROM";
   break;
  default:
   VAR_9 = "<unknown>";
  }

  VAR_8 = "<unknown>";
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
   if (VAR_4->reg_domain == VAR_2[VAR_5].reg_domain)
    VAR_8 = VAR_2[VAR_5].name;

  VAR_6 += FUNC_1(VAR_6, "MAC memory type:\t%s\n", VAR_9);
  VAR_6 += FUNC_1(VAR_6, "Regulatory domain:\t%s\n", VAR_8);
  VAR_6 += FUNC_1(VAR_6, "Host CRC checking:\t%s\n",
        VAR_4->do_rx_crc ? "On" : "Off");
  VAR_6 += FUNC_1(VAR_6, "WPA-capable firmware:\t%s\n",
        VAR_4->use_wpa ? "Yes" : "No");
 }

 switch (VAR_4->station_state) {
 case 128:
  VAR_7 = "Scanning";
  break;
 case 132:
  VAR_7 = "Joining";
  break;
 case 134:
  VAR_7 = "Authenticating";
  break;
 case 135:
  VAR_7 = "Associating";
  break;
 case 130:
  VAR_7 = "Ready";
  break;
 case 129:
  VAR_7 = "Reassociating";
  break;
 case 131:
  VAR_7 = "Management error";
  break;
 case 133:
  VAR_7 = "Down";
  break;
 default:
  VAR_7 = "<unknown>";
 }

 VAR_6 += FUNC_1(VAR_6, "Current state:\t\t%s\n", VAR_7);
 return VAR_6 - VAR_3;
}
