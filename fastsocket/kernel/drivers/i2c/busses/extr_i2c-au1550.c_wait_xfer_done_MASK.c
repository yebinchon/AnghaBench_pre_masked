
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_au1550_data {int xfer_timeout; scalar_t__ psc_base; } ;
struct TYPE_2__ {int psc_smbstat; } ;
typedef TYPE_1__ psc_smb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct i2c_au1550_data *VAR_2)
{
 u32 VAR_3;
 int VAR_4;
 volatile psc_smb_t *VAR_5;

 VAR_5 = (volatile psc_smb_t *)(VAR_2->psc_base);



 for (VAR_4 = 0; VAR_4 < VAR_2->xfer_timeout; VAR_4++) {
  VAR_3 = VAR_5->psc_smbstat;
  FUNC_0();
  if ((VAR_3 & VAR_1) != 0)
   return 0;

  FUNC_1(1);
 }

 return -VAR_0;
}
