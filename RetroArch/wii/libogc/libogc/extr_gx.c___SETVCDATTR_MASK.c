
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int vcdLo; int vcdNrms; int vcdHi; } ;
 int FUNC_0 (int,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static __inline__ void FUNC_1(u8 VAR_1,u8 VAR_2)
{
 switch(VAR_1) {
  case 144:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x1)|(VAR_2&0x1);
   break;
  case 142:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x2)|(FUNC_0(VAR_2,1,1));
   break;
  case 140:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x4)|(FUNC_0(VAR_2,2,1));
   break;
  case 138:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x8)|(FUNC_0(VAR_2,3,1));
   break;
  case 136:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x10)|(FUNC_0(VAR_2,4,1));
   break;
  case 134:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x20)|(FUNC_0(VAR_2,5,1));
   break;
  case 132:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x40)|(FUNC_0(VAR_2,6,1));
   break;
  case 130:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x80)|(FUNC_0(VAR_2,7,1));
   break;
  case 128:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x100)|(FUNC_0(VAR_2,8,1));
   break;
  case 145:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x600)|(FUNC_0(VAR_2,9,2));
   break;
  case 146:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x1800)|(FUNC_0(VAR_2,11,2));
   VAR_0->vcdNrms = 1;
   break;
  case 147:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x1800)|(FUNC_0(VAR_2,11,2));
   VAR_0->vcdNrms = 2;
   break;
  case 149:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x6000)|(FUNC_0(VAR_2,13,2));
   break;
  case 148:
   VAR_0->vcdLo = (VAR_0->vcdLo&~0x18000)|(FUNC_0(VAR_2,15,2));
   break;
  case 143:
   VAR_0->vcdHi = (VAR_0->vcdHi&~0x3)|(VAR_2&0x3);
   break;
  case 141:
   VAR_0->vcdHi = (VAR_0->vcdHi&~0xc)|(FUNC_0(VAR_2,2,2));
   break;
  case 139:
   VAR_0->vcdHi = (VAR_0->vcdHi&~0x30)|(FUNC_0(VAR_2,4,2));
   break;
  case 137:
   VAR_0->vcdHi = (VAR_0->vcdHi&~0xc0)|(FUNC_0(VAR_2,6,2));
   break;
  case 135:
   VAR_0->vcdHi = (VAR_0->vcdHi&~0x300)|(FUNC_0(VAR_2,8,2));
   break;
  case 133:
   VAR_0->vcdHi = (VAR_0->vcdHi&~0xc00)|(FUNC_0(VAR_2,10,2));
   break;
  case 131:
   VAR_0->vcdHi = (VAR_0->vcdHi&~0x3000)|(FUNC_0(VAR_2,12,2));
   break;
  case 129:
   VAR_0->vcdHi = (VAR_0->vcdHi&~0xc000)|(FUNC_0(VAR_2,14,2));
   break;
 }
}
