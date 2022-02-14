
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct __gx_texobj {int tex_filt; int tex_flag; int tex_fmt; int tex_size; int tex_maddr; int tex_tile_type; int tex_tile_cnt; } ;
typedef int GXTexObj ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *,int ,int) ;

void FUNC_4(GXTexObj *VAR_0,void *VAR_1,u16 VAR_2,u16 VAR_3,u8 VAR_4,u8 VAR_5,u8 VAR_6,u8 VAR_7)
{
 u32 VAR_8,VAR_9;
 u32 VAR_10,VAR_11;
 struct __gx_texobj *VAR_12 = (struct __gx_texobj*)VAR_0;

 if(!VAR_0) return;

 FUNC_3(VAR_0,0,sizeof(GXTexObj));

 VAR_12->tex_filt = (VAR_12->tex_filt&~0x03)|(VAR_5&3);
 VAR_12->tex_filt = (VAR_12->tex_filt&~0x0c)|(FUNC_1(VAR_6,2,2));
 VAR_12->tex_filt = (VAR_12->tex_filt&~0x10)|0x10;

 if(VAR_7) {
  VAR_12->tex_flag |= 0x01;
  if(VAR_4==137 || VAR_4==136 || VAR_4==138)
   VAR_12->tex_filt = (VAR_12->tex_filt&~0xe0)|0x00a0;
  else
   VAR_12->tex_filt = (VAR_12->tex_filt&~0xe0)|0x00c0;
 } else
  VAR_12->tex_filt= (VAR_12->tex_filt&~0xE0)|0x0080;

 VAR_12->tex_fmt = VAR_4;
 VAR_12->tex_size = (VAR_12->tex_size&~0x3ff)|((VAR_2-1)&0x3ff);
 VAR_12->tex_size = (VAR_12->tex_size&~0xFFC00)|(FUNC_1((VAR_3-1),10,10));
 VAR_12->tex_size = (VAR_12->tex_size&~0xF00000)|(FUNC_1(VAR_4,20,4));
 VAR_12->tex_maddr = (VAR_12->tex_maddr&~0x00ffffff)|(FUNC_2(FUNC_0(VAR_1),5,24));

 switch(VAR_4) {
  case 134:
  case 137:
   VAR_10 = 3;
   VAR_11 = 3;
   VAR_12->tex_tile_type = 1;
   break;
  case 133:
  case 132:
  case 136:
   VAR_10 = 3;
   VAR_11 = 2;
   VAR_12->tex_tile_type = 2;
   break;
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_10 = 2;
   VAR_11 = 2;
   VAR_12->tex_tile_type = 2;
   break;
  case 138:
   VAR_10 = 2;
   VAR_11 = 2;
   VAR_12->tex_tile_type = 3;
   break;
  case 135:
   VAR_10 = 3;
   VAR_11 = 3;
   VAR_12->tex_tile_type = 0;
   break;
  default:
   VAR_10 = 2;
   VAR_11 = 2;
   VAR_12->tex_tile_type = 2;
   break;
 }

 VAR_8 = ((VAR_2+(1<<VAR_10))-1)>>VAR_10;
 VAR_9 = ((VAR_3+(1<<VAR_11))-1)>>VAR_11;
 VAR_12->tex_tile_cnt = (VAR_8*VAR_9)&0x7fff;

 VAR_12->tex_flag |= 0x0002;
}
