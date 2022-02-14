
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u32 ;
struct i2c_au1550_data {scalar_t__ psc_base; } ;
struct TYPE_2__ {unsigned char psc_smbtxrx; } ;
typedef TYPE_1__ psc_smb_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct i2c_au1550_data*,unsigned char*) ;
 scalar_t__ FUNC_2 (struct i2c_au1550_data*) ;

__attribute__((used)) static int
FUNC_3(struct i2c_au1550_data *VAR_2, unsigned char *VAR_3,
      unsigned int VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 volatile psc_smb_t *VAR_7;

 if (VAR_4 == 0)
  return 0;






 VAR_7 = (volatile psc_smb_t *)(VAR_2->psc_base);

 VAR_5 = 0;
 while (VAR_5 < (VAR_4-1)) {
  VAR_7->psc_smbtxrx = 0;
  FUNC_0();
  if (FUNC_1(VAR_2, &VAR_6))
   return -VAR_0;

  VAR_3[VAR_5] = VAR_6;
  VAR_5++;
 }



 VAR_7->psc_smbtxrx = VAR_1;
 FUNC_0();
 if (FUNC_2(VAR_2))
  return -VAR_0;

 VAR_6 = VAR_7->psc_smbtxrx;
 FUNC_0();
 VAR_3[VAR_5] = VAR_6;
 return 0;
}
