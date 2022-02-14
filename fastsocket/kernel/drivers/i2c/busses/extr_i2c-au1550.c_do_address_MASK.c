
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_au1550_data {scalar_t__ psc_base; } ;
struct TYPE_2__ {int psc_smbstat; int psc_smbpcr; unsigned int psc_smbtxrx; int psc_smbevnt; } ;
typedef TYPE_1__ psc_smb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct i2c_au1550_data*) ;
 int FUNC_3 (struct i2c_au1550_data*) ;

__attribute__((used)) static int
FUNC_4(struct i2c_au1550_data *VAR_7, unsigned int VAR_8, int VAR_9, int VAR_10)
{
 volatile psc_smb_t *VAR_11;
 u32 VAR_12;

 VAR_11 = (volatile psc_smb_t *)(VAR_7->psc_base);



 VAR_12 = VAR_11->psc_smbstat;
 VAR_11->psc_smbevnt = VAR_1;
 FUNC_0();

 if (!(VAR_12 & VAR_5) || !(VAR_12 & VAR_4)) {
  VAR_11->psc_smbpcr = VAR_2;
  FUNC_0();
  do {
   VAR_12 = VAR_11->psc_smbpcr;
   FUNC_0();
  } while ((VAR_12 & VAR_2) != 0);
  FUNC_1(50);
 }



 VAR_8 <<= 1;
 if (VAR_9)
  VAR_8 |= 1;


 if (VAR_10)
  VAR_8 |= VAR_6;



 VAR_11->psc_smbtxrx = VAR_8;
 FUNC_0();
 VAR_11->psc_smbpcr = VAR_3;
 FUNC_0();
 if (FUNC_2(VAR_7))
  return -VAR_0;
 return (VAR_10) ? FUNC_3(VAR_7) : 0;
}
