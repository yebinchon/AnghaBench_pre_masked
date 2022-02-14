
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct __gx_tlutregion {int tmem_addr_base; } ;
struct __gx_texregion {int tmem_even; int tmem_odd; } ;
struct __gx_texobj {int tex_filt; int tex_lod; int tex_size; int tex_maddr; size_t tex_flag; int tex_tlut; } ;
struct TYPE_2__ {int* texMapSize; int* texMapWrap; int dirtyState; } ;
typedef int GXTexRegion ;
typedef int GXTexObj ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(GXTexObj *VAR_8,GXTexRegion *VAR_9,u8 VAR_10)
{
 u8 VAR_11;
 struct __gx_tlutregion *VAR_12 = ((void*)0);
 struct __gx_texobj *VAR_13 = (struct __gx_texobj*)VAR_8;
 struct __gx_texregion *VAR_14 = (struct __gx_texregion*)VAR_9;

 VAR_13->tex_filt = (VAR_13->tex_filt&~0xff000000)|(FUNC_1(VAR_5[VAR_10],24,8));
 VAR_13->tex_lod = (VAR_13->tex_lod&~0xff000000)|(FUNC_1(VAR_6[VAR_10],24,8));
 VAR_13->tex_size = (VAR_13->tex_size&~0xff000000)|(FUNC_1(VAR_1[VAR_10],24,8));
 VAR_13->tex_maddr = (VAR_13->tex_maddr&~0xff000000)|(FUNC_1(VAR_4[VAR_10],24,8));

 VAR_14->tmem_even = (VAR_14->tmem_even&~0xff000000)|(FUNC_1(VAR_2[VAR_10],24,8));
 VAR_14->tmem_odd = (VAR_14->tmem_odd&~0xff000000)|(FUNC_1(VAR_3[VAR_10],24,8));

 FUNC_0(VAR_13->tex_filt);
 FUNC_0(VAR_13->tex_lod);
 FUNC_0(VAR_13->tex_size);

 FUNC_0(VAR_14->tmem_even);
 FUNC_0(VAR_14->tmem_odd);

 FUNC_0(VAR_13->tex_maddr);

 VAR_11 = VAR_13->tex_flag;
 if(!(VAR_11&0x02)) {
  if(&FUNC_2)
   VAR_12 = (struct __gx_tlutregion*)FUNC_2(VAR_13->tex_tlut);
  VAR_12->tmem_addr_base = (VAR_12->tmem_addr_base&~0xff000000)|(FUNC_1(VAR_7[VAR_10],24,8));
  FUNC_0(VAR_12->tmem_addr_base);
 }

 VAR_0->texMapSize[VAR_10] = VAR_13->tex_size;
 VAR_0->texMapWrap[VAR_10] = VAR_13->tex_filt;

 VAR_0->dirtyState |= 0x0001;
}
