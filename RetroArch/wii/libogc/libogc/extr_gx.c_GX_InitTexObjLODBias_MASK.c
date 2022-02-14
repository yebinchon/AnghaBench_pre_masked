
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct __gx_texobj {int tex_filt; } ;
typedef float f32 ;
typedef int GXTexObj ;


 int FUNC_0 (int ,int,int) ;

void FUNC_1(GXTexObj *VAR_0,f32 VAR_1)
{
 struct __gx_texobj *VAR_2 = (struct __gx_texobj*)VAR_0;

 if(VAR_1<-4.0f) VAR_1 = -4.0f;
 else if(VAR_1==4.0f) VAR_1 = 3.99f;

 VAR_2->tex_filt = (VAR_2->tex_filt&~0x1fe00)|(FUNC_0(((u32)(32.0f*VAR_1)),9,8));
}
