
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {scalar_t__ WPA2enabled; scalar_t__ WPAenabled; scalar_t__ wep_enabled; } ;
struct lbs_private {TYPE_1__ secinfo; } ;
struct bss_descriptor {scalar_t__ mode; int capability; int * rsn_ie; int * wpa_ie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int ,int ,...) ;
 int FUNC_3 (TYPE_1__*,struct bss_descriptor*) ;
 int FUNC_4 (TYPE_1__*,struct bss_descriptor*) ;
 int FUNC_5 (TYPE_1__*,struct bss_descriptor*) ;
 int FUNC_6 (TYPE_1__*,struct bss_descriptor*) ;
 int FUNC_7 (TYPE_1__*,struct bss_descriptor*) ;

__attribute__((used)) static int FUNC_8(struct lbs_private *VAR_2,
     struct bss_descriptor *VAR_3, uint8_t VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(VAR_0);

 if (VAR_3->mode != VAR_4)
  goto done;

 VAR_5 = FUNC_4(&VAR_2->secinfo, VAR_3);
 if (VAR_5)
  goto done;
 VAR_5 = FUNC_5(&VAR_2->secinfo, VAR_3);
 if (VAR_5)
  goto done;
 VAR_5 = FUNC_6(&VAR_2->secinfo, VAR_3);
 if (VAR_5) {
  FUNC_2("is_network_compatible() WPA: wpa_ie 0x%x "
        "wpa2_ie 0x%x WEP %s WPA %s WPA2 %s "
        "privacy 0x%x\n", VAR_3->wpa_ie[0], VAR_3->rsn_ie[0],
        VAR_2->secinfo.wep_enabled ? "e" : "d",
        VAR_2->secinfo.WPAenabled ? "e" : "d",
        VAR_2->secinfo.WPA2enabled ? "e" : "d",
        (VAR_3->capability & VAR_1));
  goto done;
 }
 VAR_5 = FUNC_7(&VAR_2->secinfo, VAR_3);
 if (VAR_5) {
  FUNC_2("is_network_compatible() WPA2: wpa_ie 0x%x "
        "wpa2_ie 0x%x WEP %s WPA %s WPA2 %s "
        "privacy 0x%x\n", VAR_3->wpa_ie[0], VAR_3->rsn_ie[0],
        VAR_2->secinfo.wep_enabled ? "e" : "d",
        VAR_2->secinfo.WPAenabled ? "e" : "d",
        VAR_2->secinfo.WPA2enabled ? "e" : "d",
        (VAR_3->capability & VAR_1));
  goto done;
 }
 VAR_5 = FUNC_3(&VAR_2->secinfo, VAR_3);
 if (VAR_5) {
  FUNC_2("is_network_compatible() dynamic WEP: "
        "wpa_ie 0x%x wpa2_ie 0x%x privacy 0x%x\n",
        VAR_3->wpa_ie[0], VAR_3->rsn_ie[0],
        (VAR_3->capability & VAR_1));
  goto done;
 }


 FUNC_2("is_network_compatible() FAILED: wpa_ie 0x%x "
       "wpa2_ie 0x%x WEP %s WPA %s WPA2 %s privacy 0x%x\n",
       VAR_3->wpa_ie[0], VAR_3->rsn_ie[0],
       VAR_2->secinfo.wep_enabled ? "e" : "d",
       VAR_2->secinfo.WPAenabled ? "e" : "d",
       VAR_2->secinfo.WPA2enabled ? "e" : "d",
       (VAR_3->capability & VAR_1));

done:
 FUNC_1(VAR_0, "matched: %d", VAR_5);
 return VAR_5;
}
