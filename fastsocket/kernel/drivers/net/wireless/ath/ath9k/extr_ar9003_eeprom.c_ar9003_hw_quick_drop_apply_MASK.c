
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int quick_drop_low; int quick_drop_high; } ;
struct TYPE_6__ {int quick_drop; } ;
struct TYPE_5__ {int quick_drop; } ;
struct ar9300_base_eep_hdr {int miscConfiguration; } ;
struct ar9300_eeprom {TYPE_3__ base_ext1; TYPE_2__ modalHeader5G; TYPE_1__ modalHeader2G; struct ar9300_base_eep_hdr baseEepHeader; } ;
struct TYPE_8__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_4__ eeprom; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int) ;
 int FUNC_2 (int,int*,int*,int) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_2, u16 VAR_3)
{
 struct ar9300_eeprom *VAR_4 = &VAR_2->eeprom.ar9300_eep;
 struct ar9300_base_eep_hdr *VAR_5 = &VAR_4->baseEepHeader;
 int VAR_6;
 s32 VAR_7[3], VAR_8[3] = {5180, 5500, 5785};

 if (!(VAR_5->miscConfiguration & FUNC_0(1)))
  return;

 if (VAR_3 < 4000)
  VAR_6 = VAR_4->modalHeader2G.quick_drop;
 else {
  VAR_7[0] = VAR_4->base_ext1.quick_drop_low;
  VAR_7[1] = VAR_4->modalHeader5G.quick_drop;
  VAR_7[2] = VAR_4->base_ext1.quick_drop_high;
  VAR_6 = FUNC_2(VAR_3, VAR_8, VAR_7, 3);
 }
 FUNC_1(VAR_2, VAR_0, VAR_1, VAR_6);
}
