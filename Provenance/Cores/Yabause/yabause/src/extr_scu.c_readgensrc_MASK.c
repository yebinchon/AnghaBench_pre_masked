
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int L; } ;
struct TYPE_5__ {int all; TYPE_1__ part; } ;
struct TYPE_6__ {size_t* CT; TYPE_2__ ALU; int ** MD; } ;


 TYPE_3__* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u8 VAR_2)
{
   u32 VAR_3;
   switch(VAR_2) {
      case 0x0:
         return VAR_0->MD[0][VAR_0->CT[0]];
      case 0x1:
         return VAR_0->MD[1][VAR_0->CT[1]];
      case 0x2:
         return VAR_0->MD[2][VAR_0->CT[2]];
      case 0x3:
         return VAR_0->MD[3][VAR_0->CT[3]];
      case 0x4:
         VAR_3 = VAR_0->MD[0][VAR_0->CT[0]];
         VAR_1[0] = 1;
         return VAR_3;
      case 0x5:
         VAR_3 = VAR_0->MD[1][VAR_0->CT[1]];
         VAR_1[1] = 1;
         return VAR_3;
      case 0x6:
         VAR_3 = VAR_0->MD[2][VAR_0->CT[2]];
         VAR_1[2] = 1;
         return VAR_3;
      case 0x7:
         VAR_3 = VAR_0->MD[3][VAR_0->CT[3]];
         VAR_1[3] = 1;
         return VAR_3;
      case 0x9:
         return (u32)VAR_0->ALU.part.L;
      case 0xA:
         return (u32)((VAR_0->ALU.all & (u64)(0x0000ffffffff0000)) >> 16);
      default: break;
   }

   return 0;
}
