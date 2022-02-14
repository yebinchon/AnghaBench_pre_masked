
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* tevRasOrder; int dirtyState; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u8 VAR_1,u8 VAR_2,u8 VAR_3)
{
 switch(VAR_1) {
  case 131:
   VAR_0->tevRasOrder[2] = (VAR_0->tevRasOrder[2]&~0x7)|(VAR_3&0x7);
   VAR_0->tevRasOrder[2] = (VAR_0->tevRasOrder[2]&~0x38)|(FUNC_1(VAR_2,3,3));
   break;
  case 130:
   VAR_0->tevRasOrder[2] = (VAR_0->tevRasOrder[2]&~0x1C0)|(FUNC_1(VAR_3,6,3));
   VAR_0->tevRasOrder[2] = (VAR_0->tevRasOrder[2]&~0xE00)|(FUNC_1(VAR_2,9,3));
   break;
  case 129:
   VAR_0->tevRasOrder[2] = (VAR_0->tevRasOrder[2]&~0x7000)|(FUNC_1(VAR_3,12,3));
   VAR_0->tevRasOrder[2] = (VAR_0->tevRasOrder[2]&~0x38000)|(FUNC_1(VAR_2,15,3));
   break;
  case 128:
   VAR_0->tevRasOrder[2] = (VAR_0->tevRasOrder[2]&~0x1C0000)|(FUNC_1(VAR_3,18,3));
   VAR_0->tevRasOrder[2] = (VAR_0->tevRasOrder[2]&~0xE00000)|(FUNC_1(VAR_2,21,3));
   break;
 }
 FUNC_0(VAR_0->tevRasOrder[2]);
 VAR_0->dirtyState |= 0x0003;
}
