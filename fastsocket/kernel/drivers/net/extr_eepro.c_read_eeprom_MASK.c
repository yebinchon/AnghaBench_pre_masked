
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct eepro_local {int eeprom_reg; } ;


 short VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 short VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (short) ;
 struct eepro_local* FUNC_5 (struct net_device*) ;
 int FUNC_6 (short,short) ;

__attribute__((used)) static int
FUNC_7(int VAR_6, int VAR_7, struct net_device *VAR_8)
{
 int VAR_9;
 unsigned short VAR_10 = 0;
 struct eepro_local *VAR_11 = FUNC_5(VAR_8);
 short VAR_12 = VAR_6 + VAR_11->eeprom_reg;
 int VAR_13 = VAR_7 | VAR_4;
 short VAR_14 = VAR_0 ;


  FUNC_1(VAR_6);
  FUNC_6(0x00, VAR_6 + VAR_5);


 FUNC_2(VAR_6);
 FUNC_6(VAR_14, VAR_12);


 for (VAR_9 = 8; VAR_9 >= 0; VAR_9--) {
  short VAR_15 = (VAR_13 & (1 << VAR_9)) ? VAR_14 | VAR_1
   : VAR_14;
  FUNC_6(VAR_15, VAR_12);
  FUNC_6(VAR_15 | VAR_3, VAR_12);
  FUNC_3();
  FUNC_6(VAR_15, VAR_12);
  FUNC_3();
 }
 FUNC_6(VAR_14, VAR_12);

 for (VAR_9 = 16; VAR_9 > 0; VAR_9--) {
  FUNC_6(VAR_14 | VAR_3, VAR_12); FUNC_3();
  VAR_10 = (VAR_10 << 1) | ((FUNC_4(VAR_12) & VAR_2) ? 1 : 0);
  FUNC_6(VAR_14, VAR_12); FUNC_3();
 }


 VAR_14 &= ~VAR_0;
 FUNC_6(VAR_14 | VAR_3, VAR_12);
 FUNC_3();
 FUNC_6(VAR_14, VAR_12);
 FUNC_3();
 FUNC_0(VAR_6);
 return VAR_10;
}
