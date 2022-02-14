
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum exception_code { ____Placeholder_exception_code } exception_code ;


 int VAR_0 ;
 int* VAR_1 ;

void FUNC_0(enum exception_code VAR_2)
{
 u32 VAR_3;

 VAR_3 = VAR_1[(VAR_2/0x100) % 0x10];
 VAR_3 <<= 8;
 VAR_3 |= VAR_1[(VAR_2/0x10) % 0x10];
 VAR_3 <<= 8;
 VAR_3 |= VAR_1[VAR_2 % 0x10];
 VAR_3 |= 0x6d010101;

 VAR_0 = VAR_3;
}
