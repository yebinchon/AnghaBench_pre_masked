
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;


 void** VAR_0 ;
 int FUNC_0 (char*,int) ;

void FUNC_1(char *VAR_1,s32 VAR_2,s32 VAR_3,s32 VAR_4)
{
 *VAR_1++ = 'q';
 *VAR_1++ = 'M';
 *VAR_1++ = VAR_0[(VAR_2>>4)&0x0f];
 *VAR_1++ = VAR_0[VAR_2&0x0f];

 if(VAR_3) *VAR_1++ = '1';
 else *VAR_1++ = '0';

 FUNC_0(VAR_1,VAR_4);
}
