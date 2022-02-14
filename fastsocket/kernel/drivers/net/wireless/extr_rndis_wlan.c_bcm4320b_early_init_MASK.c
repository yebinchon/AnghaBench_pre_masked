
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct rndis_wlan_private {char* param_country; int param_power_save; int param_power_output; int param_roamtrigger; int param_roamdelta; scalar_t__ param_afterburner; scalar_t__ param_frameburst; } ;


 int VAR_0 ;
 struct rndis_wlan_private* FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usbnet*,int ) ;
 int FUNC_2 (struct usbnet*,char*,char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_1)
{
 struct rndis_wlan_private *VAR_2 = FUNC_0(VAR_1);
 char VAR_3[8];

 FUNC_1(VAR_1, VAR_0);





 FUNC_2(VAR_1, "Country", VAR_2->param_country);
 FUNC_2(VAR_1, "FrameBursting",
     VAR_2->param_frameburst ? "1" : "0");
 FUNC_2(VAR_1, "Afterburner",
     VAR_2->param_afterburner ? "1" : "0");
 FUNC_3(VAR_3, "%d", VAR_2->param_power_save);
 FUNC_2(VAR_1, "PowerSaveMode", VAR_3);
 FUNC_3(VAR_3, "%d", VAR_2->param_power_output);
 FUNC_2(VAR_1, "PwrOut", VAR_3);
 FUNC_3(VAR_3, "%d", VAR_2->param_roamtrigger);
 FUNC_2(VAR_1, "RoamTrigger", VAR_3);
 FUNC_3(VAR_3, "%d", VAR_2->param_roamdelta);
 FUNC_2(VAR_1, "RoamDelta", VAR_3);

 return 0;
}
