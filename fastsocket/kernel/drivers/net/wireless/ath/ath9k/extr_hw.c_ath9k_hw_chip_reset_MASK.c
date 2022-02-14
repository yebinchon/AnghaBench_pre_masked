
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int chip_fullsleep; TYPE_1__* eep_ops; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ath_hw*,int ) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_5 (struct ath_hw*,int) ;
 int FUNC_6 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_7 (struct ath_hw*,int ) ;
 scalar_t__ FUNC_8 (struct ath_hw*,int ) ;

__attribute__((used)) static bool FUNC_9(struct ath_hw *VAR_8,
    struct ath9k_channel *VAR_9)
{
 int VAR_10 = VAR_6;

 if (FUNC_0(VAR_8)) {
  if (VAR_8->eep_ops->get_eeprom(VAR_8, VAR_7))
   VAR_10 = VAR_5;
  else
   VAR_10 = VAR_4;
 } else if (VAR_8->chip_fullsleep || FUNC_2(VAR_8, VAR_2) ||
     (FUNC_2(VAR_8, VAR_0) & VAR_1))
  VAR_10 = VAR_4;

 if (!FUNC_5(VAR_8, VAR_10))
  return 0;

 if (!FUNC_7(VAR_8, VAR_3))
  return 0;

 VAR_8->chip_fullsleep = 0;

 if (FUNC_1(VAR_8))
  FUNC_3(VAR_8);
 FUNC_4(VAR_8, VAR_9);
 FUNC_6(VAR_8, VAR_9);

 return 1;
}
