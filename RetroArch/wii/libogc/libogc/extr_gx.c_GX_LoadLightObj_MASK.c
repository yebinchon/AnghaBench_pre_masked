
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct __gx_litobj {int nz; int ny; int nx; int pz; int py; int px; int k2; int k1; int k0; int a2; int a1; int a0; scalar_t__ col; } ;
struct TYPE_2__ {int F32; scalar_t__ U32; } ;
typedef int GXLightObj ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(GXLightObj *VAR_1,u8 VAR_2)
{
 u32 VAR_3;
 u16 VAR_4;
 struct __gx_litobj *VAR_5 = (struct __gx_litobj*)VAR_1;

 switch(VAR_2) {
  case 135:
   VAR_3 = 0;
   break;
  case 134:
   VAR_3 = 1;
   break;
  case 133:
   VAR_3 = 2;
   break;
  case 132:
   VAR_3 = 3;
   break;
  case 131:
   VAR_3 = 4;
   break;
  case 130:
   VAR_3 = 5;
   break;
  case 129:
   VAR_3 = 6;
   break;
  case 128:
   VAR_3 = 7;
   break;
  default:
   VAR_3 = 0;
   break;
 }

 VAR_4 = 0x600|(FUNC_1(VAR_3,4,8));
 FUNC_0(VAR_4,16);
 VAR_0->U32 = 0;
 VAR_0->U32 = 0;
 VAR_0->U32 = 0;
 VAR_0->U32 = VAR_5->col;
 VAR_0->F32 = VAR_5->a0;
 VAR_0->F32 = VAR_5->a1;
 VAR_0->F32 = VAR_5->a2;
 VAR_0->F32 = VAR_5->k0;
 VAR_0->F32 = VAR_5->k1;
 VAR_0->F32 = VAR_5->k2;
 VAR_0->F32 = VAR_5->px;
 VAR_0->F32 = VAR_5->py;
 VAR_0->F32 = VAR_5->pz;
 VAR_0->F32 = VAR_5->nx;
 VAR_0->F32 = VAR_5->ny;
 VAR_0->F32 = VAR_5->nz;
}
