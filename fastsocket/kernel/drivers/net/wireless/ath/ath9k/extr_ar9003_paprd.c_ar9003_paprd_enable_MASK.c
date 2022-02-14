
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tx_chainmask; } ;
struct TYPE_5__ {int papdRateMaskHt20; } ;
struct ar9300_eeprom {TYPE_2__ modalHeader5G; } ;
struct TYPE_4__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {int paprd_table_write_done; TYPE_3__ caps; TYPE_1__ eeprom; struct ath9k_channel* curchan; } ;
struct ath9k_channel {scalar_t__ channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ath_hw*,int ,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct ath_hw*,struct ath9k_channel*,int) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct ath_hw *VAR_6, bool VAR_7)
{
 struct ath9k_channel *VAR_8 = VAR_6->curchan;
 struct ar9300_eeprom *VAR_9 = &VAR_6->eeprom.ar9300_eep;
 if (FUNC_1(VAR_8)) {
  if (VAR_8->channel >= VAR_5) {
   if (FUNC_4(VAR_9->modalHeader5G.papdRateMaskHt20)
          & FUNC_0(30))
    VAR_7 = 0;
  } else if (VAR_8->channel >= VAR_4) {
   if (FUNC_4(VAR_9->modalHeader5G.papdRateMaskHt20)
          & FUNC_0(29))
    VAR_7 = 0;
  } else {
   if (FUNC_4(VAR_9->modalHeader5G.papdRateMaskHt20)
          & FUNC_0(28))
    VAR_7 = 0;
  }
 }

 if (VAR_7) {
  VAR_6->paprd_table_write_done = 1;
  FUNC_3(VAR_6, VAR_8, 0);
 }

 FUNC_2(VAR_6, VAR_0,
        VAR_3, !!VAR_7);
 if (VAR_6->caps.tx_chainmask & FUNC_0(1))
  FUNC_2(VAR_6, VAR_1,
         VAR_3, !!VAR_7);
 if (VAR_6->caps.tx_chainmask & FUNC_0(2))
  FUNC_2(VAR_6, VAR_2,
         VAR_3, !!VAR_7);
}
