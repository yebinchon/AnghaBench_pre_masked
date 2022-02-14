
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int UBYTE ;


 scalar_t__ FUNC_0 (int ,unsigned int*,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_2(const int *VAR_3, int VAR_4)
{
 if (!VAR_0 || VAR_2 != VAR_1)
  return;





 while (VAR_4 > 0) {
  UBYTE VAR_5 = 0;
  unsigned int VAR_6;
  UBYTE VAR_7;
  int VAR_8;

  VAR_8 = *VAR_3++;
  if (VAR_8 < 0) {
   VAR_8 = -VAR_8;
   VAR_5 = 0x80;
  }
  VAR_6 = (unsigned int) VAR_8;

  VAR_7 = VAR_6 & 0xff;
  if (FUNC_0(VAR_0, &VAR_7, 1) == 0) {
   FUNC_1();
   break;
  }

  VAR_6 >>= 8;
  VAR_7 = VAR_6 & 0xff;
  if (FUNC_0(VAR_0, &VAR_7, 1) == 0) {
   FUNC_1();
   break;
  }

  VAR_6 >>= 8;
  VAR_7 = VAR_6 & 0xff;
  if (FUNC_0(VAR_0, &VAR_7, 1) == 0) {
   FUNC_1();
   break;
  }

  VAR_6 >>= 8;
  VAR_7 = (VAR_6 & 0x7f) | VAR_5;
  if (FUNC_0(VAR_0, &VAR_7, 1) == 0) {
   FUNC_1();
   break;
  }

  VAR_4--;
 }
}
