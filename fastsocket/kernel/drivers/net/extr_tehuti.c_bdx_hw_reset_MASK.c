
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bdx_priv {scalar_t__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct bdx_priv*,int ) ;
 int FUNC_2 (struct bdx_priv*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct bdx_priv *VAR_5)
{
 u32 VAR_6, VAR_7;
 VAR_2;

 if (VAR_5->port == 0) {

  VAR_6 = FUNC_1(VAR_5, VAR_3);
  FUNC_2(VAR_5, VAR_3, (VAR_6 | VAR_1) + 0x8);
  FUNC_4(50);
  VAR_6 = FUNC_1(VAR_5, VAR_3);
  FUNC_2(VAR_5, VAR_3, VAR_6 & ~VAR_1);
 }

 for (VAR_7 = 0; VAR_7 < 70; VAR_7++, FUNC_3(10))
  if ((FUNC_1(VAR_5, VAR_3) & VAR_0) == VAR_0) {

   FUNC_1(VAR_5, VAR_4);
   return 0;
  }
 FUNC_0("tehuti: HW reset failed\n");
 return 1;
}
