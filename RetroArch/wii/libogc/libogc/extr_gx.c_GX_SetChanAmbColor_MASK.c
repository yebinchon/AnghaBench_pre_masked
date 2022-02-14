
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
struct TYPE_5__ {int* chnAmbColor; int dirtyState; } ;
struct TYPE_4__ {int a; int b; int g; int r; } ;
typedef TYPE_1__ GXColor ;
 int FUNC_0 (int ,int,int) ;
 TYPE_2__* VAR_0 ;

void FUNC_1(s32 VAR_1,GXColor VAR_2)
{
 u32 VAR_3,VAR_4 = (FUNC_0(VAR_2.r,24,8))|(FUNC_0(VAR_2.g,16,8))|(FUNC_0(VAR_2.b,8,8))|0x00;
 switch(VAR_1) {
  case 131:
   VAR_3 = 0;
   VAR_4 |= (VAR_0->chnAmbColor[0]&0xff);
   break;
  case 129:
   VAR_3 = 1;
   VAR_4 |= (VAR_0->chnAmbColor[1]&0xff);
   break;
  case 133:
   VAR_3 = 0;
   VAR_4 = ((VAR_0->chnAmbColor[0]&~0xff)|(VAR_2.a&0xff));
   break;
  case 132:
   VAR_3 = 1;
   VAR_4 = ((VAR_0->chnAmbColor[1]&~0xff)|(VAR_2.a&0xff));
   break;
  case 130:
   VAR_3 = 0;
   VAR_4 |= (VAR_2.a&0xFF);
   break;
  case 128:
   VAR_3 = 1;
   VAR_4 |= (VAR_2.a&0xFF);
   break;
  default:
   return;
 }

 VAR_0->chnAmbColor[VAR_3] = VAR_4;
 VAR_0->dirtyState |= (0x0100<<VAR_3);
}
