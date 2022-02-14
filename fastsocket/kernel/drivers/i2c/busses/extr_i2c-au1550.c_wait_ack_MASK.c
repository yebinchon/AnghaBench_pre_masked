
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_au1550_data {scalar_t__ psc_base; } ;
struct TYPE_2__ {int psc_smbevnt; } ;
typedef TYPE_1__ psc_smb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct i2c_au1550_data*) ;

__attribute__((used)) static int
FUNC_2(struct i2c_au1550_data *VAR_4)
{
 u32 VAR_5;
 volatile psc_smb_t *VAR_6;

 if (FUNC_1(VAR_4))
  return -VAR_0;

 VAR_6 = (volatile psc_smb_t *)(VAR_4->psc_base);

 VAR_5 = VAR_6->psc_smbevnt;
 FUNC_0();

 if ((VAR_5 & (VAR_3 | VAR_2 | VAR_1)) != 0)
  return -VAR_0;

 return 0;
}
