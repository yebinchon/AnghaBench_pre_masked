
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pda_country {scalar_t__ flags; int alpha2; } ;
struct ieee80211_hw {int wiphy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,void*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2,
          void *VAR_3, int VAR_4)
{
 struct pda_country *VAR_5;

 if (VAR_4 != sizeof(*VAR_5)) {
  FUNC_2(VAR_2->wiphy,
     "found possible invalid default country eeprom entry. (entry size: %d)\n",
     VAR_4);

  FUNC_0("country:", VAR_0,
         VAR_3, VAR_4);

  FUNC_2(VAR_2->wiphy, "please report this issue.\n");
  return;
 }

 VAR_5 = (struct pda_country *) VAR_3;
 if (VAR_5->flags == VAR_1)
  FUNC_1(VAR_2->wiphy, VAR_5->alpha2);
 else {





 }
}
