
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_eeprom_channel {int dummy; } ;
struct iwl_cfg {TYPE_1__* eeprom_params; } ;
struct TYPE_2__ {int* regulatory_bands; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_2 (int const*,size_t,int) ;

__attribute__((used)) static void FUNC_3(const struct iwl_cfg *VAR_9,
        const u8 *VAR_10, size_t VAR_11,
        int VAR_12, int *VAR_13,
        const struct iwl_eeprom_channel **VAR_14,
        const u8 **VAR_15)
{
 u32 VAR_16 = VAR_9->eeprom_params->regulatory_bands[VAR_12 - 1];

 VAR_16 |= VAR_0 | VAR_1;

 *VAR_14 = (void *)FUNC_2(VAR_10, VAR_11, VAR_16);

 switch (VAR_12) {
 case 1:
  *VAR_13 = FUNC_0(VAR_2);
  *VAR_15 = VAR_2;
  break;
 case 2:
  *VAR_13 = FUNC_0(VAR_3);
  *VAR_15 = VAR_3;
  break;
 case 3:
  *VAR_13 = FUNC_0(VAR_4);
  *VAR_15 = VAR_4;
  break;
 case 4:
  *VAR_13 = FUNC_0(VAR_5);
  *VAR_15 = VAR_5;
  break;
 case 5:
  *VAR_13 = FUNC_0(VAR_6);
  *VAR_15 = VAR_6;
  break;
 case 6:
  *VAR_13 = FUNC_0(VAR_7);
  *VAR_15 = VAR_7;
  break;
 case 7:
  *VAR_13 = FUNC_0(VAR_8);
  *VAR_15 = VAR_8;
  break;
 default:
  *VAR_13 = 0;
  *VAR_15 = ((void*)0);
  FUNC_1(1);
 }
}
