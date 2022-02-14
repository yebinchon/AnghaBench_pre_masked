
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int hw_counters; } ;
struct ar9170 {TYPE_2__ fw; TYPE_1__* hw; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_7__ {int reg; int _5ghz_20; int _2ghz_20; int _5ghz_40; int _2ghz_40; } ;
struct TYPE_5__ {int conf; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (struct ar9170*,int,int) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ar9170*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct ar9170*,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct ar9170 *VAR_3, enum ieee80211_band VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7;
 bool VAR_8 = VAR_4 == VAR_1;
 bool VAR_9 = FUNC_8(&VAR_3->hw->conf);

 FUNC_4(VAR_3);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (VAR_9) {
   if (VAR_8)
    VAR_7 = VAR_2[VAR_5]._2ghz_40;
   else
    VAR_7 = VAR_2[VAR_5]._5ghz_40;
  } else {
   if (VAR_8)
    VAR_7 = VAR_2[VAR_5]._2ghz_20;
   else
    VAR_7 = VAR_2[VAR_5]._5ghz_20;
  }

  FUNC_3(VAR_2[VAR_5].reg, VAR_7);
 }

 FUNC_5();
 VAR_6 = FUNC_6();
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_8, VAR_9);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6)
  return VAR_6;

 if (!VAR_3->fw.hw_counters) {
  VAR_6 = FUNC_7(VAR_3, VAR_0,
      VAR_8 ? 0x5163 : 0x5143);
 }

 return VAR_6;
}
