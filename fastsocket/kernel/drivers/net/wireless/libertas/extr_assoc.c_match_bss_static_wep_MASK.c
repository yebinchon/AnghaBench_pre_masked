
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_802_11_security {int WPA2enabled; int WPAenabled; scalar_t__ wep_enabled; } ;
struct bss_descriptor {int capability; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct lbs_802_11_security *VAR_1,
           struct bss_descriptor *VAR_2)
{
 if (VAR_1->wep_enabled && !VAR_1->WPAenabled
     && !VAR_1->WPA2enabled
     && (VAR_2->capability & VAR_0))
  return 1;
 else
  return 0;
}
