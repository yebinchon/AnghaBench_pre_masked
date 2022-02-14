
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


 int FUNC_0 (int) ;
 int FUNC_1 (struct nic*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int VAR_4 ;
 int FUNC_4 (int) ;

__attribute__((used)) static __le16 FUNC_5(struct nic *VAR_5, u16 *VAR_6, u16 VAR_7)
{
 u32 VAR_8;
 u16 VAR_9 = 0;
 u8 VAR_10;
 int VAR_11;

 VAR_8 = ((VAR_4 << *VAR_6) | VAR_7) << 16;


 FUNC_3(VAR_0 | VAR_3, &VAR_5->csr->eeprom_ctrl_lo);
 FUNC_1(VAR_5); FUNC_4(4);


 for (VAR_11 = 31; VAR_11 >= 0; VAR_11--) {
  VAR_10 = (VAR_8 & (1 << VAR_11)) ? VAR_0 | VAR_1 : VAR_0;
  FUNC_3(VAR_10, &VAR_5->csr->eeprom_ctrl_lo);
  FUNC_1(VAR_5); FUNC_4(4);

  FUNC_3(VAR_10 | VAR_3, &VAR_5->csr->eeprom_ctrl_lo);
  FUNC_1(VAR_5); FUNC_4(4);



  VAR_10 = FUNC_2(&VAR_5->csr->eeprom_ctrl_lo);
  if (!(VAR_10 & VAR_2) && VAR_11 > 16) {
   *VAR_6 -= (VAR_11 - 16);
   VAR_11 = 17;
  }

  VAR_9 = (VAR_9 << 1) | (VAR_10 & VAR_2 ? 1 : 0);
 }


 FUNC_3(0, &VAR_5->csr->eeprom_ctrl_lo);
 FUNC_1(VAR_5); FUNC_4(4);

 return FUNC_0(VAR_9);
}
