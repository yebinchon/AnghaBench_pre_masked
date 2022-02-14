
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct __gx_texobj {int tex_maddr; int tex_size; int tex_fmt; int tex_filt; int tex_flag; } ;
typedef int GXTexObj ;


 scalar_t__ FUNC_0 (int,int,int) ;
 void* FUNC_1 (int,int,int) ;

void FUNC_2(GXTexObj* VAR_0, void** VAR_1, u16* VAR_2, u16* VAR_3,
                     u8* VAR_4, u8* VAR_5, u8* VAR_6, u8* VAR_7)
{
 struct __gx_texobj *VAR_8 = (struct __gx_texobj*)VAR_0;
 *VAR_1 = (void*)(FUNC_0(VAR_8->tex_maddr & 0x00ffffff,5,24));
 *VAR_2 = (VAR_8->tex_size & 0x3ff) + 1;
 *VAR_3 = FUNC_1(VAR_8->tex_size & 0xffc00, 10, 10) + 1;
 *VAR_4 = VAR_8->tex_fmt;
 *VAR_5 = VAR_8->tex_filt & 0x03;
 *VAR_6 = FUNC_1(VAR_8->tex_filt & 0x0c, 2, 2);
 *VAR_7 = VAR_8->tex_flag & 0x01;
}
