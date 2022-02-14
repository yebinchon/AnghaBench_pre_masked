
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct __gx_texobj {int tex_lod; } ;
typedef float f32 ;
typedef int GXTexObj ;



void FUNC_0(GXTexObj *VAR_0,f32 VAR_1)
{
 struct __gx_texobj *VAR_2 = (struct __gx_texobj*)VAR_0;

 if(VAR_1<0.0f) VAR_1 = 0.0f;
 else if(VAR_1>10.0f) VAR_1 = 10.0f;

 VAR_2->tex_lod = (VAR_2->tex_lod&~0xff)|(((u32)(16.0f*VAR_1))&0xff);
}
