
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar9300_base_eep_hdr {int miscConfiguration; } ;
struct ar9300_eeprom {struct ar9300_base_eep_hdr baseEepHeader; } ;
struct TYPE_2__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_3)
{
 struct ar9300_eeprom *VAR_4 = &VAR_3->eeprom.ar9300_eep;
 struct ar9300_base_eep_hdr *VAR_5 = &VAR_4->baseEepHeader;
 int VAR_6;
 unsigned long VAR_7;

 VAR_6 = VAR_5->miscConfiguration & FUNC_0(0);
 if (!VAR_6)
  return;

 VAR_7 = FUNC_1(VAR_3, VAR_0);
 VAR_7 &= ~0x00ffffc0;
 VAR_7 |= 0x5 << 21;
 VAR_7 |= 0x5 << 18;
 VAR_7 |= 0x5 << 15;
 VAR_7 |= 0x5 << 12;
 VAR_7 |= 0x5 << 9;
 VAR_7 |= 0x5 << 6;
 FUNC_2(VAR_3, VAR_0, VAR_7);

 VAR_7 = FUNC_1(VAR_3, VAR_1);
 VAR_7 &= ~0xffffffe0;
 VAR_7 |= 0x5 << 29;
 VAR_7 |= 0x5 << 26;
 VAR_7 |= 0x5 << 23;
 VAR_7 |= 0x5 << 20;
 VAR_7 |= 0x5 << 17;
 VAR_7 |= 0x5 << 14;
 VAR_7 |= 0x5 << 11;
 VAR_7 |= 0x5 << 8;
 VAR_7 |= 0x5 << 5;
 FUNC_2(VAR_3, VAR_1, VAR_7);

 VAR_7 = FUNC_1(VAR_3, VAR_2);
 VAR_7 &= ~0xff800000;
 VAR_7 |= 0x5 << 29;
 VAR_7 |= 0x5 << 26;
 VAR_7 |= 0x5 << 23;
 FUNC_2(VAR_3, VAR_2, VAR_7);
}
