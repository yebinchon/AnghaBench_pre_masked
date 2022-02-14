
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nic {TYPE_1__* csr; } ;
typedef int __le16 ;
struct TYPE_2__ {int eeprom_ctrl_lo; } ;


 int FUNC_0 (struct nic*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct nic *VAR_6, u16 VAR_7, u16 VAR_8, __le16 VAR_9)
{
 u32 VAR_10[3];
 u8 VAR_11;
 int VAR_12, VAR_13;


 VAR_10[0] = VAR_4 << (VAR_7 - 2);
 VAR_10[1] = (((VAR_5 << VAR_7) | VAR_8) << 16) |
  FUNC_2(VAR_9);
 VAR_10[2] = VAR_3 << (VAR_7 - 2);


 for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {


  FUNC_1(VAR_0 | VAR_2, &VAR_6->csr->eeprom_ctrl_lo);
  FUNC_0(VAR_6); FUNC_4(4);

  for (VAR_12 = 31; VAR_12 >= 0; VAR_12--) {
   VAR_11 = (VAR_10[VAR_13] & (1 << VAR_12)) ?
    VAR_0 | VAR_1 : VAR_0;
   FUNC_1(VAR_11, &VAR_6->csr->eeprom_ctrl_lo);
   FUNC_0(VAR_6); FUNC_4(4);

   FUNC_1(VAR_11 | VAR_2, &VAR_6->csr->eeprom_ctrl_lo);
   FUNC_0(VAR_6); FUNC_4(4);
  }

  FUNC_3(10);


  FUNC_1(0, &VAR_6->csr->eeprom_ctrl_lo);
  FUNC_0(VAR_6); FUNC_4(4);
 }
}
