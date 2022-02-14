
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct __gx_texobj {int tex_filt; } ;
typedef int GXTexObj ;


 int FUNC_0 (int,int,int) ;

void FUNC_1(GXTexObj *VAR_0,u8 VAR_1,u8 VAR_2)
{
 struct __gx_texobj *VAR_3 = (struct __gx_texobj*)VAR_0;

 VAR_3->tex_filt = (VAR_3->tex_filt&~0x03)|(VAR_1&3);
 VAR_3->tex_filt = (VAR_3->tex_filt&~0x0c)|(FUNC_0(VAR_2,2,2));
}
