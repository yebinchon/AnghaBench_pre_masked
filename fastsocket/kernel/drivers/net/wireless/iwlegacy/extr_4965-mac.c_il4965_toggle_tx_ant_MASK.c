
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct il_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct il_priv *VAR_1, u8 *VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5 = *VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_0 - 1; VAR_4++) {
  VAR_5 = (VAR_5 + 1) < VAR_0 ? VAR_5 + 1 : 0;
  if (VAR_3 & FUNC_0(VAR_5)) {
   *VAR_2 = VAR_5;
   return;
  }
 }
}
