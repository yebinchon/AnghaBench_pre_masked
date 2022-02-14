
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct __gx_texobj {int tex_size; } ;
typedef int GXTexObj ;


 scalar_t__ FUNC_0 (int,int,int) ;

u16 FUNC_1(GXTexObj* VAR_0)
{
 return FUNC_0(((struct __gx_texobj*)VAR_0)->tex_size & 0xffc00, 10, 10) + 1;
}
