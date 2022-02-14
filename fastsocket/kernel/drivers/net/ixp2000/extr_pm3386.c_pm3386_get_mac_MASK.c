
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int,int,int) ;

void FUNC_1(int VAR_0, u8 *VAR_1)
{
 u16 VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x308, 0x100);
 VAR_1[0] = VAR_2 & 0xff;
 VAR_1[1] = (VAR_2 >> 8) & 0xff;

 VAR_2 = FUNC_0(VAR_0, 0x309, 0x100);
 VAR_1[2] = VAR_2 & 0xff;
 VAR_1[3] = (VAR_2 >> 8) & 0xff;

 VAR_2 = FUNC_0(VAR_0, 0x30a, 0x100);
 VAR_1[4] = VAR_2 & 0xff;
 VAR_1[5] = (VAR_2 >> 8) & 0xff;
}
