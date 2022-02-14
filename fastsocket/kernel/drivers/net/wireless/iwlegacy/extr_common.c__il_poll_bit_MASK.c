
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct il_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct il_priv*,int) ;
 int FUNC_1 (int const) ;

int
FUNC_2(struct il_priv *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4, int VAR_5)
{
 const int VAR_6 = 10;
 int VAR_7 = 0;

 do {
  if ((FUNC_0(VAR_1, VAR_2) & VAR_4) == (VAR_3 & VAR_4))
   return VAR_7;
  FUNC_1(VAR_6);
  VAR_7 += VAR_6;
 } while (VAR_7 < VAR_5);

 return -VAR_0;
}
