
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
typedef int u16 ;
struct TYPE_3__ {int all; } ;
struct TYPE_4__ {size_t* CT; int TOP; int LOP; void* WA0; void* RA0; TYPE_1__ P; void* RX; void*** MD; } ;


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
          VAR_0->P.all = (signed)VAR_2;
          return;
      case 0x6:
          VAR_0->RA0 = VAR_2;
          return;
      case 0x7:
          VAR_0->WA0 = VAR_2;
          return;
      case 0xA:
          VAR_0->LOP = (u16)VAR_2;
          return;
      case 0xB:
          VAR_0->TOP = (u8)VAR_2;
          return;
      case 0xC:
          VAR_0->CT[0] = (u8)VAR_2;
          return;
      case 0xD:
          VAR_0->CT[1] = (u8)VAR_2;
          return;
      case 0xE:
          VAR_0->CT[2] = (u8)VAR_2;
          return;
      case 0xF:
          VAR_0->CT[3] = (u8)VAR_2;
          return;
      default: break;
   }
}
