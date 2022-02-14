
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;






 int VAR_0 ;


 int FUNC_0 (int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 switch (VAR_3) {
 case 130:
  VAR_5 = 0;
  if (~VAR_6 < 0x10000) {
   VAR_6 = ~VAR_6;
   VAR_3 = VAR_0;
  }
  break;

 case 131:
 case 128:
 case 133:
 case 129:
 case 132:
  if (VAR_2 == 0 && VAR_6 == 0)
   return;
  break;
 }

 for (VAR_8 = VAR_6, VAR_7 = 0; ; VAR_7 -= 8/2) {

  for (; VAR_8 && !(VAR_8 & 3); VAR_8 >>= 2)
   VAR_7--;

  FUNC_0(VAR_1, VAR_3, VAR_2, VAR_5, VAR_4, VAR_7 & 0x0f, VAR_8 & 0xff);

  VAR_8 >>= 8;
  if (VAR_8 == 0)
   break;
  if (VAR_3 == 130)
   VAR_3 = 129;
  if (VAR_3 == VAR_0)
   VAR_3 = 132;
  VAR_5 = VAR_4;
 }
}
