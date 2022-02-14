
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipw_priv*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ipw_priv *VAR_1, u32 VAR_2, u32 VAR_3,
          int VAR_4)
{
 int VAR_5 = 0;

 do {
  if ((FUNC_0(VAR_1, VAR_2) & VAR_3) == VAR_3)
   return VAR_5;
  FUNC_1(10);
  VAR_5 += 10;
 } while (VAR_5 < VAR_4);

 return -VAR_0;
}
