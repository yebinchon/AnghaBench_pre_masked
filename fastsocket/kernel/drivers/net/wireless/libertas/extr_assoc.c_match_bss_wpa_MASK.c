
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_802_11_security {scalar_t__ WPAenabled; int wep_enabled; } ;
struct bss_descriptor {scalar_t__* wpa_ie; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct lbs_802_11_security *VAR_1,
    struct bss_descriptor *VAR_2)
{
 if (!VAR_1->wep_enabled && VAR_1->WPAenabled
     && (VAR_2->wpa_ie[0] == VAR_0)


    )
  return 1;
 else
  return 0;
}
