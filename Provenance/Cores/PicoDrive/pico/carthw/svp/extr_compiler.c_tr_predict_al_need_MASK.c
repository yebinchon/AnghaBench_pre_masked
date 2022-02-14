
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* gr; } ;
struct TYPE_3__ {int h; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_5, VAR_6, VAR_7, VAR_8 = VAR_4.gr[VAR_3].h;

 while (1)
 {
  VAR_7 = FUNC_0(VAR_8);
  switch (VAR_7 >> 9)
  {

   case 0x00:
    VAR_6 = (VAR_7 >> 4) & 0xf;
    VAR_5 = VAR_7 & 0xf;
    if ((VAR_6 == VAR_0 && VAR_5 == VAR_2) || VAR_6 == VAR_1)
     return 0;
    break;


   case 0x02:

   case 0x0a:

   case 0x10: case 0x30: case 0x40: case 0x60: case 0x70:
    VAR_5 = VAR_7 & 0xf;
    if (VAR_5 == VAR_1)
     return 1;
    break;

   case 0x04:
   case 0x06:
   case 0x14:
   case 0x34:
   case 0x44:
   case 0x64:
   case 0x74: VAR_8++; break;


   case 0x24:

   case 0x26:

   case 0x48:

   case 0x1b:

   case 0x4b: return 1;


   case 0x5b: return 0;


   case 0x50:
    VAR_5 = VAR_7 & 0xf;
    if (VAR_5 == VAR_1) return 1;
   case 0x51: case 0x53: case 0x54: case 0x55: case 0x59: case 0x5c:
    return 0;
  }
  VAR_8++;
 }
}
