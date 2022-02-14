
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_au1550_data {scalar_t__ psc_base; } ;
struct TYPE_2__ {int psc_smbcfg; int psc_smbstat; int psc_smbtmr; int psc_ctrl; int psc_smbmsk; int psc_sel; } ;
typedef TYPE_1__ psc_smb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct i2c_au1550_data *VAR_11)
{
 volatile psc_smb_t *VAR_12 = (volatile psc_smb_t *)VAR_11->psc_base;
 u32 VAR_13;

 VAR_12->psc_ctrl = VAR_0;
 FUNC_8();
 VAR_12->psc_sel = VAR_3;
 VAR_12->psc_smbcfg = 0;
 FUNC_8();
 VAR_12->psc_ctrl = VAR_1;
 FUNC_8();
 do {
  VAR_13 = VAR_12->psc_smbstat;
  FUNC_8();
 } while ((VAR_13 & VAR_10) == 0);

 VAR_12->psc_smbcfg = (VAR_7 | VAR_8 |
    VAR_4);




 VAR_12->psc_smbcfg |= FUNC_0(VAR_6);
 VAR_12->psc_smbmsk = VAR_9;
 FUNC_8();




 VAR_12->psc_smbtmr = FUNC_7(0) | FUNC_3(15) | FUNC_4(15) | FUNC_5(15) | FUNC_6(15) | FUNC_2(15) | FUNC_1(15);



 FUNC_8();

 VAR_12->psc_smbcfg |= VAR_5;
 do {
  VAR_13 = VAR_12->psc_smbstat;
  FUNC_8();
 } while ((VAR_13 & VAR_10) == 0);

 VAR_12->psc_ctrl = VAR_2;
 FUNC_8();
}
