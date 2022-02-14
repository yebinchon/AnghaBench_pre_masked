
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct __gx_texobj {int tex_flag; int tex_tlut; } ;
typedef int GXTexObj ;


 int FUNC_0 (int *,void*,int ,int ,int ,int ,int ,int ) ;

void FUNC_1(GXTexObj *VAR_0,void *VAR_1,u16 VAR_2,u16 VAR_3,u8 VAR_4,u8 VAR_5,u8 VAR_6,u8 VAR_7,u32 VAR_8)
{
 struct __gx_texobj *VAR_9 = (struct __gx_texobj*)VAR_0;

 FUNC_0(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,VAR_5,VAR_6,VAR_7);
 VAR_9->tex_flag &= ~0x02;
 VAR_9->tex_tlut = VAR_8;
}
