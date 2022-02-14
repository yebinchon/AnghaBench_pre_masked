
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UBYTE ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void)
{
 if (VAR_0 != ((void*)0)) {
  int VAR_7 = FUNC_0(VAR_0);
  if (VAR_7 == VAR_6) {
   VAR_5 = 136;
   VAR_3;
   return;
  }
  switch (VAR_1) {
  case 134:
   switch (VAR_7) {
   case 0x9b:
    VAR_1 = 133;
    break;
   case 0x0a:
    VAR_1 = 129;
    VAR_7 = 0x9b;
    break;
   case 0x0d:
    VAR_1 = 130;
    VAR_7 = 0x9b;
    break;
   default:
    break;
   }
   break;
  case 132:
   if (VAR_7 == 0x0d)
    VAR_7 = 0x9b;
   break;
  case 129:
   if (VAR_7 == 0x0a)
    VAR_7 = 0x9b;
   break;
  case 131:
   if (VAR_7 == 0x0a) {
    VAR_7 = FUNC_0(VAR_0);
    if (VAR_7 == VAR_6) {
     VAR_5 = 136;
     VAR_3;
     return;
    }
   }
   if (VAR_7 == 0x0d)
    VAR_7 = 0x9b;
   break;
  case 130:
   if (VAR_7 == 0x0a) {
    VAR_1 = 131;
    VAR_7 = FUNC_0(VAR_0);
    if (VAR_7 == VAR_6) {
     VAR_5 = 136;
     VAR_3;
     return;
    }
   }
   else
    VAR_1 = 132;
   if (VAR_7 == 0x0d)
    VAR_7 = 0x9b;
   break;
  case 128:
  case 133:
  default:
   break;
  }
  VAR_4 = (UBYTE) VAR_7;
  VAR_5 = 1;
  VAR_2;
 }
}
