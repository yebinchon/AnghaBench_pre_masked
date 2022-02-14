
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_802_11_security {int WPA2enabled; int WPAenabled; int wep_enabled; } ;
struct bss_descriptor {scalar_t__* wpa_ie; scalar_t__* rsn_ie; int capability; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct lbs_802_11_security *VAR_3,
     struct bss_descriptor *VAR_4)
{
 if (!VAR_3->wep_enabled && !VAR_3->WPAenabled
     && !VAR_3->WPA2enabled
     && (VAR_4->wpa_ie[0] != VAR_1)
     && (VAR_4->rsn_ie[0] != VAR_2)
     && (VAR_4->capability & VAR_0))
  return 1;
 else
  return 0;
}
