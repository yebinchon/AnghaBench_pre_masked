
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int s64 ;
struct TYPE_3__ {int all; } ;
struct TYPE_4__ {int** MD; size_t* CT; int RX; int RA0; int WA0; int jmpaddr; int delayed; int PC; int TOP; int LOP; TYPE_1__ P; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_0(u8 VAR_1, u32 VAR_2)
{
   switch(VAR_1) {
      case 0x0:
          VAR_0->MD[0][VAR_0->CT[0]] = VAR_2;
          VAR_0->CT[0]++;
          VAR_0->CT[0] &= 0x3f;
          return;
      case 0x1:
          VAR_0->MD[1][VAR_0->CT[1]] = VAR_2;
          VAR_0->CT[1]++;
          VAR_0->CT[1] &= 0x3f;
          return;
      case 0x2:
          VAR_0->MD[2][VAR_0->CT[2]] = VAR_2;
          VAR_0->CT[2]++;
          VAR_0->CT[2] &= 0x3f;
          return;
      case 0x3:
          VAR_0->MD[3][VAR_0->CT[3]] = VAR_2;
          VAR_0->CT[3]++;
          VAR_0->CT[3] &= 0x3f;
          return;
      case 0x4:
          VAR_0->RX = VAR_2;
          return;
      case 0x5:
          VAR_0->P.all = (s64)VAR_2;
          return;
      case 0x6:
          VAR_2 = (VAR_2 & 0x1FFFFFF);
          VAR_0->RA0 = VAR_2;
          return;
      case 0x7:
          VAR_2 = (VAR_2 & 0x1FFFFFF);
          VAR_0->WA0 = VAR_2;
          return;
      case 0xA:
          VAR_0->LOP = (u16)VAR_2;
          return;
      case 0xC:
          VAR_0->TOP = VAR_0->PC+1;
          VAR_0->jmpaddr = VAR_2;
          VAR_0->delayed = 0;
          return;
      default: break;
   }
}
