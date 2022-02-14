
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct __gx_texobj {int tex_filt; } ;
typedef int GXTexObj ;


 int FUNC_0 (int,int,int) ;

u8 FUNC_1(GXTexObj* VAR_0)
{
 return FUNC_0(((struct __gx_texobj*)VAR_0)->tex_filt & 0x0c, 2, 2);
}
