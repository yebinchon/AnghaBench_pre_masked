
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct p54s_priv {int dummy; } ;


 int FUNC_0 (struct p54s_priv*,int ) ;

__attribute__((used)) static int FUNC_1(struct p54s_priv *VAR_0, u16 VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 2000; VAR_3++) {
  u32 VAR_4 = FUNC_0(VAR_0, VAR_1);
  if ((VAR_4 & VAR_2) == VAR_2)
   return 1;
 }
 return 0;
}
