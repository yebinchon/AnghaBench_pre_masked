
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (float) ;
 int FUNC_3 (float) ;

void FUNC_4(u32* VAR_11, u32* VAR_12, u32 VAR_13, u32 VAR_14, u32 VAR_15, u32 VAR_16)
{
 u32 VAR_17[0x4];
 float VAR_18=(float)VAR_15;
 float VAR_19=(float)VAR_16;

 FUNC_1(VAR_5, 0x00000001);
 FUNC_1(VAR_6, 0x00000001);

 u32 VAR_20=0x01000000|(((VAR_16-1)&0xFFF)<<12)|(VAR_15&0xFFF);

 VAR_17[0x0]=((u32)VAR_11)>>3;
 VAR_17[0x1]=((u32)VAR_12)>>3;
 VAR_17[0x2]=VAR_20;
 FUNC_0(VAR_3, VAR_17, 0x00000003);

 FUNC_1(VAR_7, VAR_20);
 FUNC_1(VAR_2, 0x00000003);
 FUNC_1(VAR_0, 0x00000002);
 FUNC_1(VAR_4, 0x00000000);

 VAR_17[0x0]=FUNC_2(VAR_18/2);
 VAR_17[0x1]=FUNC_3(2.0f / VAR_18) << 1;
 VAR_17[0x2]=FUNC_2(VAR_19/2);
 VAR_17[0x3]=FUNC_3(2.0f / VAR_19) << 1;
 FUNC_0(VAR_9, VAR_17, 0x00000004);

 FUNC_1(VAR_10, (VAR_14<<16)|(VAR_13&0xFFFF));

 VAR_17[0x0]=0x00000000;
 VAR_17[0x1]=0x00000000;
 VAR_17[0x2]=((VAR_16-1)<<16)|((VAR_15-1)&0xFFFF);
 FUNC_0(VAR_8, VAR_17, 0x00000003);


 VAR_17[0x0]=0x0000000F;
 VAR_17[0x1]=0x0000000F;
 VAR_17[0x2]=0x00000002;
 VAR_17[0x3]=0x00000002;
 FUNC_0(VAR_1, VAR_17, 0x00000004);
}
