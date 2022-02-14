
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ath_hw {TYPE_1__* eep_ops; } ;
struct ath_common {int* macaddr; } ;
struct TYPE_2__ {int (* get_eeprom ) (struct ath_hw*,int const) ;} ;


 int VAR_0 ;



 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int const) ;

__attribute__((used)) static int FUNC_2(struct ath_hw *VAR_1)
{
 struct ath_common *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;
 int VAR_4;
 u16 VAR_5;
 static const u32 VAR_6[] = { 130, 129, 128 };

 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  VAR_5 = VAR_1->eep_ops->get_eeprom(VAR_1, VAR_6[VAR_4]);
  VAR_3 += VAR_5;
  VAR_2->macaddr[2 * VAR_4] = VAR_5 >> 8;
  VAR_2->macaddr[2 * VAR_4 + 1] = VAR_5 & 0xff;
 }
 if (VAR_3 == 0 || VAR_3 == 0xffff * 3)
  return -VAR_0;

 return 0;
}
