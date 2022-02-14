
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct __gx_texregion {int tmem_even; int tmem_odd; } ;
struct __gx_texobj {int tex_maddr; int tex_tile_cnt; int tex_tile_type; int tex_size; int tex_flag; int tex_fmt; } ;
typedef int s32 ;
typedef int GXTexRegion ;
typedef int GXTexObj ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(GXTexObj *VAR_1,GXTexRegion *VAR_2)
{
 u32 VAR_3,VAR_4;
 s32 VAR_5,VAR_6;
 u16 VAR_7 = 0;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 struct __gx_texobj *VAR_12 = (struct __gx_texobj*)VAR_1;
 struct __gx_texregion *VAR_13 = (struct __gx_texregion*)VAR_2;

 VAR_8 = (VAR_8&~0xff000000)|(FUNC_1(0x60,24,8));
 VAR_8 = (VAR_8&~0x00ffffff)|(VAR_12->tex_maddr&~0xff000000);

 VAR_9 = (VAR_9&~0xff000000)|(FUNC_1(0x61,24,8));
 VAR_9 = (VAR_9&~0x00007fff)|(VAR_13->tmem_even&0x00007fff);

 VAR_10 = (VAR_10&~0xff000000)|(FUNC_1(0x62,24,8));
 VAR_10 = (VAR_10&~0x00007fff)|(VAR_13->tmem_odd&0x00007fff);

 VAR_11 = (VAR_11&~0xff000000)|(FUNC_1(0x63,24,8));
 VAR_11 = (VAR_11&~0x00007fff)|(VAR_12->tex_tile_cnt&0x00007fff);
 VAR_11 = (VAR_11&~0x00018000)|(FUNC_1(VAR_12->tex_tile_type,15,2));

 VAR_4 = FUNC_2(VAR_12->tex_size,20,4);

 FUNC_3();
 FUNC_0(VAR_8);
 FUNC_0(VAR_9);
 FUNC_0(VAR_10);
 FUNC_0(VAR_11);

 if(VAR_12->tex_flag&0x01) {
  VAR_5 = (VAR_12->tex_size&0x3ff)+1;
  VAR_6 = FUNC_2(VAR_12->tex_size,10,10)+1;
  if(VAR_5>VAR_6)
   VAR_7 = (31 - (FUNC_4(VAR_5)));
  else
   VAR_7 = (31 - (FUNC_4(VAR_6)));
 }

 if(VAR_7>0) {
  u32 VAR_14,VAR_15,VAR_16;
  u32 VAR_17 = VAR_12->tex_tile_cnt;

  VAR_14 = (VAR_13->tmem_even&0xffff);
  VAR_15 = (VAR_13->tmem_odd&0xffff);
  VAR_16 = (VAR_12->tex_maddr&~0xff000000);

  VAR_3 = 0;
  while(VAR_7) {
   u32 VAR_18,VAR_19;
   u32 VAR_20,VAR_21;
   u32 VAR_22,VAR_23;

   if(VAR_4==VAR_0) {
    VAR_14 += VAR_17;
    VAR_15 += VAR_17;
    VAR_16 += (VAR_17<<1);
   } else {
    VAR_16 += VAR_17;
    if(VAR_3&1) VAR_15 += VAR_17;
    else VAR_14 += VAR_17;
   }

   VAR_20 = VAR_14;
   VAR_21 = VAR_15;
   if(VAR_3&1) {
    VAR_20 = VAR_15;
    VAR_21 = VAR_14;
   }

   VAR_18 = VAR_5>>(VAR_3+1);
   VAR_19 = VAR_5>>(VAR_3+1);
   switch(VAR_12->tex_fmt) {
    case 133:
    case 131:
    case 136:
    case 134:
     VAR_22 = 3;
     VAR_23 = 3;
     break;
    case 132:
    case 135:
     VAR_22 = 3;
     VAR_23 = 2;
     break;
    case 130:
    case 128:
    case 129:
    case 137:
     VAR_22 = 2;
     VAR_23 = 2;
     break;
    default:
     VAR_22 = 0;
     VAR_23 = 0;
     break;
   }

   if(!VAR_18) VAR_18 = 1;
   if(!VAR_19) VAR_19 = 1;

   VAR_8 = ((VAR_8&~0x00ffffff)|(VAR_16&0x00ffffff));
   FUNC_0(VAR_8);

   VAR_9 = ((VAR_9&~0x00007fff)|(VAR_20&0x00007fff));
   FUNC_0(VAR_9);

   VAR_10 = ((VAR_10&~0x00007fff)|(VAR_21&0x00007fff));
   FUNC_0(VAR_10);

   VAR_17 = (((VAR_18+(1<<VAR_22))-1)>>VAR_22)*(((VAR_19+(1<<VAR_23))-1)>>VAR_23);
   VAR_11 = ((VAR_11&~0x00007fff)|(VAR_17&0x00007fff));
   FUNC_0(VAR_11);

   ++VAR_3;
   --VAR_7;
  }
 }
 FUNC_3();
}
