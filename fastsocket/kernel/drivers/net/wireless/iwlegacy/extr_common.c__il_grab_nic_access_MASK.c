
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct il_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct il_priv*,int ,int ,int,int) ;
 int FUNC_2 (struct il_priv*,int ) ;
 int FUNC_3 (struct il_priv*,int ,int ) ;
 int FUNC_4 (struct il_priv*,int ,int ) ;
 scalar_t__ FUNC_5 (int) ;

bool
FUNC_6(struct il_priv *VAR_7)
{
 int VAR_8;
 u32 VAR_9;


 FUNC_3(VAR_7, VAR_0, VAR_2);
 VAR_8 =
     FUNC_1(VAR_7, VAR_0, VAR_4,
    (VAR_3 |
     VAR_1), 15000);
 if (FUNC_5(VAR_8 < 0)) {
  VAR_9 = FUNC_2(VAR_7, VAR_0);
  FUNC_0(1, "Timeout waiting for ucode processor access "
        "(CSR_GP_CNTRL 0x%08x)\n", VAR_9);
  FUNC_4(VAR_7, VAR_5, VAR_6);
  return 0;
 }

 return 1;
}
