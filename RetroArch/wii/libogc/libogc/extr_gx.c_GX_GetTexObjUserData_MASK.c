
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __gx_texobj {scalar_t__ usr_data; } ;
typedef int GXTexObj ;



void* FUNC_0(GXTexObj *VAR_0)
{
 struct __gx_texobj *VAR_1 = (struct __gx_texobj*)VAR_0;
 return (void*)VAR_1->usr_data;
}
