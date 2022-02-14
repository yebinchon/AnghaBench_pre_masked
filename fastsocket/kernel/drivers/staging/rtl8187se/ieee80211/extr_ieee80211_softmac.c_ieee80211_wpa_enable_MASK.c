
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int wpa_enabled; } ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_device *VAR_0, int VAR_1)
{


 FUNC_0("%s WPA\n",VAR_1 ? "enabling" : "disabling");
 VAR_0->wpa_enabled = VAR_1;
 return 0;
}
