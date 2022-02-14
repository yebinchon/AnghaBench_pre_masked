
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {scalar_t__* spurChans; } ;
struct TYPE_5__ {scalar_t__* spurChans; } ;
struct ar9300_eeprom {TYPE_3__ modalHeader2G; TYPE_2__ modalHeader5G; } ;
struct TYPE_4__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
struct ath9k_channel {int channel; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 int FUNC_3 (struct ath_hw*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ath_hw*,int) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*,struct ath9k_channel*,int,int,int) ;
 int FUNC_8 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_9(struct ath_hw *VAR_3,
      struct ath9k_channel *VAR_4)
{
 int VAR_5;
 int VAR_6 = 10;
 int VAR_7 = 0;
 int VAR_8;
 u8* VAR_9;
 unsigned int VAR_10;
 struct ar9300_eeprom *VAR_11 = &VAR_3->eeprom.ar9300_eep;

 if (FUNC_1(VAR_4)) {
  VAR_9 = &(VAR_11->modalHeader5G.spurChans[0]);
  VAR_8 = 0;
 }
 else {
  VAR_9 = &(VAR_11->modalHeader2G.spurChans[0]);
  VAR_8 = 1;
 }

 if (VAR_9[0] == 0)
  return;

 if (FUNC_2(VAR_4)) {
  VAR_6 = 19;
  if (FUNC_3(VAR_3, VAR_2,
       VAR_1) == 0x0)
   VAR_5 = VAR_4->channel - 10;
  else
   VAR_5 = VAR_4->channel + 10;
 } else {
  VAR_6 = 10;
  VAR_5 = VAR_4->channel;
 }

 FUNC_6(VAR_3);

 for (VAR_10 = 0; VAR_10 < VAR_0 && VAR_9[VAR_10]; VAR_10++) {
  VAR_7 = FUNC_8(VAR_9[VAR_10], VAR_8);
  VAR_7 -= VAR_5;
  if (FUNC_4(VAR_7) < VAR_6) {
   FUNC_7(VAR_3, VAR_4, VAR_7,
       VAR_6, VAR_5);

   if (FUNC_0(VAR_3) && (VAR_10 < 4)) {
    VAR_7 = FUNC_8(VAR_9[VAR_10 + 1],
         VAR_8);
    VAR_7 -= VAR_5;
    if (FUNC_4(VAR_7) < VAR_6)
     FUNC_5(VAR_3, VAR_7);
   }

   break;
  }
 }
}
