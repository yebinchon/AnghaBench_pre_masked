
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {int priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct mii_bus *VAR_1, int VAR_2, int VAR_3)
{
 u32 VAR_4;

 while (FUNC_4(VAR_1->priv, FUNC_0(0)) & VAR_0)
  FUNC_6();
 FUNC_5(VAR_1->priv, FUNC_0(0), VAR_0 | FUNC_3(VAR_3) |
      FUNC_2(VAR_2));
 while ((VAR_4 = FUNC_4(VAR_1->priv, FUNC_0(0))) & VAR_0)
  FUNC_6();
 return FUNC_1(VAR_4);
}
