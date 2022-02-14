
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct __gx_texobj {int tex_filt; } ;
typedef int GXTexObj ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;

void FUNC_1(GXTexObj *VAR_1,u8 VAR_2,u8 VAR_3)
{
 struct __gx_texobj *VAR_4 = (struct __gx_texobj*)VAR_1;
 static u8 VAR_5[] = {0x00,0x04,0x01,0x05,0x02,0x06,0x00,0x00};

 VAR_4->tex_filt = (VAR_4->tex_filt&~0x10)|(FUNC_0((VAR_3==VAR_0?1:0),4,1));
 VAR_4->tex_filt = (VAR_4->tex_filt&~0xe0)|(FUNC_0(VAR_5[VAR_2],5,3));
}
