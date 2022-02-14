
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct __gx_texregion {int tmem_even; int tmem_odd; int size_even; int size_odd; scalar_t__ iscached; scalar_t__ ismipmap; } ;
typedef int GXTexRegion ;


 int FUNC_0 (int ,int,int) ;

void FUNC_1(GXTexRegion *VAR_0,u32 VAR_1,u32 VAR_2,u32 VAR_3,u32 VAR_4)
{
 struct __gx_texregion *VAR_5 = (struct __gx_texregion*)VAR_0;

 VAR_5->tmem_even = 0;
 VAR_5->tmem_even = (VAR_5->tmem_even&~0x7FFF)|(FUNC_0(VAR_1,5,15));
 VAR_5->tmem_even = (VAR_5->tmem_even&~0x200000)|0x200000;

 VAR_5->tmem_odd = 0;
 VAR_5->tmem_odd = (VAR_5->tmem_odd&~0x7FFF)|(FUNC_0(VAR_3,5,15));

 VAR_5->size_even = FUNC_0(VAR_2,5,16);
 VAR_5->size_odd = FUNC_0(VAR_4,5,16);

 VAR_5->ismipmap = 0;
 VAR_5->iscached = 0;
}
