
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phadadj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_1(int VAR_4)
{
 int VAR_5;
 switch(VAR_4) {
  case 480:
  case 640:

   VAR_5 = VAR_3.phadadj;
   if (VAR_5 < 0) {
    VAR_5 = VAR_2;
   } else {
    VAR_5 = ((VAR_5 & 0x0f) << 1) | VAR_2;
   }
   break;
  case 240:
  case 320:
  default:

   VAR_5 = (VAR_0 << 1) | VAR_2;
   break;
 }

 FUNC_0(VAR_1, VAR_5);
}
