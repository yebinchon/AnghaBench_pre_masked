
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl8187_priv {TYPE_1__* map; scalar_t__ is_rtl8187b; } ;
struct TYPE_2__ {int EEPROM_CMD; int CONFIG3; int ANAPARAM3; int ANAPARAM2; int ANAPARAM; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct rtl8187_priv*,int *) ;
 int FUNC_1 (struct rtl8187_priv*,int *,int ) ;
 int FUNC_2 (struct rtl8187_priv*,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct rtl8187_priv *VAR_13, bool VAR_14)
{
 u32 VAR_15, VAR_16;
 u8 VAR_17, VAR_18;

 if (!VAR_13->is_rtl8187b) {
  if (VAR_14) {
   VAR_15 = VAR_9;
   VAR_16 = VAR_7;
  } else {
   VAR_15 = VAR_8;
   VAR_16 = VAR_6;
  }
 } else {
  if (VAR_14) {
   VAR_15 = VAR_5;
   VAR_16 = VAR_1;
   VAR_17 = VAR_3;
  } else {
   VAR_15 = VAR_4;
   VAR_16 = VAR_0;
   VAR_17 = VAR_2;
  }
 }

 FUNC_2(VAR_13, &VAR_13->map->EEPROM_CMD,
    VAR_11);
 VAR_18 = FUNC_0(VAR_13, &VAR_13->map->CONFIG3);
 VAR_18 |= VAR_10;
 FUNC_2(VAR_13, &VAR_13->map->CONFIG3, VAR_18);
 FUNC_1(VAR_13, &VAR_13->map->ANAPARAM, VAR_15);
 FUNC_1(VAR_13, &VAR_13->map->ANAPARAM2, VAR_16);
 if (VAR_13->is_rtl8187b)
  FUNC_2(VAR_13, &VAR_13->map->ANAPARAM3, VAR_17);
 VAR_18 &= ~VAR_10;
 FUNC_2(VAR_13, &VAR_13->map->CONFIG3, VAR_18);
 FUNC_2(VAR_13, &VAR_13->map->EEPROM_CMD,
    VAR_12);
}
