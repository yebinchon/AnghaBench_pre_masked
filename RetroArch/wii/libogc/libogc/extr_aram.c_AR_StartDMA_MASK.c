
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int* VAR_0 ;

void FUNC_4(u32 VAR_1,u32 VAR_2,u32 VAR_3,u32 VAR_4)
{
 u32 VAR_5;

 FUNC_0(VAR_5);


 VAR_0[16] = (VAR_0[16]&~0x03ff)|FUNC_3(VAR_2,16,16);
 VAR_0[17] = (VAR_0[17]&~0xffe0)|FUNC_3(VAR_2, 0,16);


 VAR_0[18] = (VAR_0[18]&~0x03ff)|FUNC_3(VAR_3,16,16);
 VAR_0[19] = (VAR_0[19]&~0xffe0)|FUNC_3(VAR_3, 0,16);


 VAR_0[20] = (VAR_0[20]&~0x8000)|FUNC_2(VAR_1,15,1);
 VAR_0[20] = (VAR_0[20]&~0x03ff)|FUNC_3(VAR_4,16,16);
 VAR_0[21] = (VAR_0[21]&~0xffe0)|FUNC_3(VAR_4, 0,16);

 FUNC_1(VAR_5);
}
