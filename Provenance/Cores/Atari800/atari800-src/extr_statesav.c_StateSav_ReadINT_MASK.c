
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 scalar_t__ FUNC_0 (int ,int*,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_2(int *VAR_3, int VAR_4)
{
 if (!VAR_0 || VAR_2 != VAR_1)
  return;

 while (VAR_4 > 0) {
  UBYTE VAR_5 = 0;
  int VAR_6;
  UBYTE VAR_7, VAR_8, VAR_9, VAR_10;

  if (FUNC_0(VAR_0, &VAR_7, 1) == 0) {
   FUNC_1();
   break;
  }

  if (FUNC_0(VAR_0, &VAR_8, 1) == 0) {
   FUNC_1();
   break;
  }

  if (FUNC_0(VAR_0, &VAR_9, 1) == 0) {
   FUNC_1();
   break;
  }

  if (FUNC_0(VAR_0, &VAR_10, 1) == 0) {
   FUNC_1();
   break;
  }

  VAR_5 = VAR_10 & 0x80;
  VAR_10 &= 0x7f;

  VAR_6 = (VAR_10 << 24) | (VAR_9 << 16) | (VAR_8 << 8) | VAR_7;
  if (VAR_5)
   VAR_6 = -VAR_6;
  *VAR_3++ = VAR_6;

  VAR_4--;
 }
}
