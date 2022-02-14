
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_au1550_data {scalar_t__ psc_base; } ;
struct TYPE_2__ {int psc_ctrl; scalar_t__ psc_smbcfg; } ;
typedef TYPE_1__ psc_smb_t ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct i2c_au1550_data *VAR_1)
{
 volatile psc_smb_t *VAR_2 = (volatile psc_smb_t *)VAR_1->psc_base;

 VAR_2->psc_smbcfg = 0;
 VAR_2->psc_ctrl = VAR_0;
 FUNC_0();
}
