
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct TYPE_2__ {size_t* CT; void*** MD; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(u8 VAR_1, u32 VAR_2, u8 VAR_3)
{
   switch(VAR_1) {
      case 0x0:
          VAR_0->MD[0][VAR_0->CT[0]] = VAR_2;
          VAR_0->CT[0]+=VAR_3;
          return;
      case 0x1:
          VAR_0->MD[1][VAR_0->CT[1]] = VAR_2;
          VAR_0->CT[1]+=VAR_3;
          return;
      case 0x2:
          VAR_0->MD[2][VAR_0->CT[2]] = VAR_2;
          VAR_0->CT[2]+=VAR_3;
          return;
      case 0x3:
          VAR_0->MD[3][VAR_0->CT[3]] = VAR_2;
          VAR_0->CT[3]+=VAR_3;
          return;
      case 0x4:



          return;
      default: break;
   }
}
