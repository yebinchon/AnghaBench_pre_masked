
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ath_hw {scalar_t__ modes_index; int iniAdditional; int iniModesFastClock; int iniModesTxGain; int ini_radio_post_sys2ant; int * iniRadio; int * iniBB; int * iniMac; int * iniSOC; } ;
struct ath9k_channel {int chanmode; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_3 (int *,int,unsigned int) ;
 int FUNC_4 (struct ath_hw*,int *,scalar_t__) ;
 int FUNC_5 (struct ath_hw*,struct ath9k_channel*) ;

__attribute__((used)) static int FUNC_6(struct ath_hw *VAR_2,
          struct ath9k_channel *VAR_3,
          u8 *VAR_4)
{
 unsigned int VAR_5 = 0;
 u32 VAR_6;

 switch (VAR_3->chanmode) {
 case 136:
 case 135:
  VAR_6 = 1;
  break;
 case 133:
 case 134:
  VAR_6 = 2;
  break;
 case 131:
 case 130:
 case 132:
  VAR_6 = 4;
  break;
 case 128:
 case 129:
  VAR_6 = 3;
  break;

 default:
  return -VAR_1;
 }

 if (VAR_6 == VAR_2->modes_index) {
  *VAR_4 = 0;
  goto set_rfmode;
 }

 FUNC_4(VAR_2, &VAR_2->iniSOC[VAR_0], VAR_6);
 FUNC_4(VAR_2, &VAR_2->iniMac[VAR_0], VAR_6);
 FUNC_4(VAR_2, &VAR_2->iniBB[VAR_0], VAR_6);
 FUNC_4(VAR_2, &VAR_2->iniRadio[VAR_0], VAR_6);

 if (FUNC_0(VAR_2))
  FUNC_4(VAR_2, &VAR_2->ini_radio_post_sys2ant,
       VAR_6);

 FUNC_3(&VAR_2->iniModesTxGain, VAR_6, VAR_5);





 if (FUNC_2(VAR_2, VAR_3))
  FUNC_3(&VAR_2->iniModesFastClock, VAR_6, VAR_5);

 if (FUNC_1(VAR_2))
  FUNC_3(&VAR_2->iniModesFastClock, 1, VAR_5);

 FUNC_3(&VAR_2->iniAdditional, 1, VAR_5);

 VAR_2->modes_index = VAR_6;
 *VAR_4 = 1;

set_rfmode:
 FUNC_5(VAR_2, VAR_3);
 return 0;
}
