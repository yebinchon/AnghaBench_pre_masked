
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 scalar_t__ FUNC_0 (int ,int*,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_2(UWORD *VAR_3, int VAR_4)
{
 if (!VAR_0 || VAR_2 != VAR_1)
  return;

 while (VAR_4 > 0) {
  UBYTE VAR_5, VAR_6;

  if (FUNC_0(VAR_0, &VAR_5, 1) == 0) {
   FUNC_1();
   break;
  }

  if (FUNC_0(VAR_0, &VAR_6, 1) == 0) {
   FUNC_1();
   break;
  }

  *VAR_3++ = (VAR_6 << 8) | VAR_5;
  VAR_4--;
 }
}
