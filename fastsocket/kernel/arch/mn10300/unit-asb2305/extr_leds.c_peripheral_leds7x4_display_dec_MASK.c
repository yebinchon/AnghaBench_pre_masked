
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int* VAR_1 ;

void FUNC_0(unsigned int VAR_2, unsigned int VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_1[(VAR_2/1000) % 10];
 VAR_4 <<= 8;
 VAR_4 |= VAR_1[(VAR_2/100) % 10];
 VAR_4 <<= 8;
 VAR_4 |= VAR_1[(VAR_2/10) % 10];
 VAR_4 <<= 8;
 VAR_4 |= VAR_1[VAR_2 % 10];
 VAR_4 |= VAR_3^0x01010101;

 VAR_0 = VAR_4;
}
