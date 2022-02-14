
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __gx_texobj {int tex_maddr; } ;
typedef int GXTexObj ;


 scalar_t__ FUNC_0 (int,int,int) ;

void* FUNC_1(GXTexObj *VAR_0)
{
 return (void*)(FUNC_0(((struct __gx_texobj*)VAR_0)->tex_maddr & 0x00ffffff,5,24));
}
