
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __gx_texobj {int tex_maddr; } ;
typedef int GXTexObj ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int,int) ;

void FUNC_2(GXTexObj *VAR_0,void *VAR_1)
{
 struct __gx_texobj *VAR_2 = (struct __gx_texobj*)VAR_0;
 VAR_2->tex_maddr = (VAR_2->tex_maddr&~0x00ffffff)|(FUNC_1(FUNC_0(VAR_1),5,24));
}
