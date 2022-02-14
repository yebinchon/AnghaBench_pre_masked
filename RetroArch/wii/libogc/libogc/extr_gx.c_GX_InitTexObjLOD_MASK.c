
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct __gx_texobj {int tex_filt; int tex_lod; } ;
typedef float f32 ;
typedef int GXTexObj ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;

void FUNC_1(GXTexObj *VAR_1,u8 VAR_2,u8 VAR_3,f32 VAR_4,f32 VAR_5,f32 VAR_6,u8 VAR_7,u8 VAR_8,u8 VAR_9)
{
 struct __gx_texobj *VAR_10 = (struct __gx_texobj*)VAR_1;
 static u8 VAR_11[] = {0x00,0x04,0x01,0x05,0x02,0x06,0x00,0x00};


 if(VAR_6<-4.0f) VAR_6 = -4.0f;
 else if(VAR_6==4.0f) VAR_6 = 3.99f;

 VAR_10->tex_filt = (VAR_10->tex_filt&~0x1fe00)|(FUNC_0(((u32)(32.0f*VAR_6)),9,8));
 VAR_10->tex_filt = (VAR_10->tex_filt&~0x10)|(FUNC_0((VAR_3==VAR_0?1:0),4,1));
 VAR_10->tex_filt = (VAR_10->tex_filt&~0xe0)|(FUNC_0(VAR_11[VAR_2],5,3));
 VAR_10->tex_filt = (VAR_10->tex_filt&~0x100)|(FUNC_0(!(VAR_8&0xff),8,1));
 VAR_10->tex_filt = (VAR_10->tex_filt&~0x180000)|(FUNC_0(VAR_9,19,2));
 VAR_10->tex_filt = (VAR_10->tex_filt&~0x200000)|(FUNC_0(VAR_7,21,1));

 if(VAR_4<0.0f) VAR_4 = 0.0f;
 else if(VAR_4>10.0f) VAR_4 = 10.0f;

 if(VAR_5<0.0f) VAR_5 = 0.0f;
 else if(VAR_5>10.0f) VAR_5 = 10.0f;

 VAR_10->tex_lod = (VAR_10->tex_lod&~0xff)|(((u32)(16.0f*VAR_4))&0xff);
 VAR_10->tex_lod = (VAR_10->tex_lod&~0xff00)|(FUNC_0(((u32)(16.0f*VAR_5)),8,8));
}
