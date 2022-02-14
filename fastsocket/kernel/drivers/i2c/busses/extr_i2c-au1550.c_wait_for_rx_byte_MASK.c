
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_au1550_data {int xfer_timeout; scalar_t__ psc_base; } ;
struct TYPE_2__ {int psc_smbstat; int psc_smbtxrx; } ;
typedef TYPE_1__ psc_smb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct i2c_au1550_data*) ;

__attribute__((used)) static u32
FUNC_3(struct i2c_au1550_data *VAR_2, u32 *VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6;
 volatile psc_smb_t *VAR_7;

 if (FUNC_2(VAR_2))
  return -VAR_0;

 VAR_7 = (volatile psc_smb_t *)(VAR_2->psc_base);

 VAR_4 = VAR_2->xfer_timeout * 100;
 do {
  VAR_4--;
  if (VAR_4 <= 0)
   return -VAR_0;

  VAR_6 = VAR_7->psc_smbstat;
  FUNC_0();
  if ((VAR_6 & VAR_1) == 0)
   VAR_4 = 0;
  else
   FUNC_1(1);
 } while (VAR_4 > 0);
 VAR_5 = VAR_7->psc_smbtxrx;
 FUNC_0();
 *VAR_3 = VAR_5;

 return 0;
}
