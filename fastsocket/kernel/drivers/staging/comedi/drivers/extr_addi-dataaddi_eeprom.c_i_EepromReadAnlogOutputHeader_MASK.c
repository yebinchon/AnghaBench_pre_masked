
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short w_Nchannel; unsigned char b_Resolution; } ;
typedef TYPE_1__ str_AnalogOutputHeader ;


 unsigned short FUNC_0 (unsigned short,char*,int) ;

int FUNC_1(unsigned short VAR_0,
 char *VAR_1, unsigned short VAR_2,
 str_AnalogOutputHeader *VAR_3)
{
 unsigned short VAR_4;

 VAR_4 = FUNC_0(VAR_0,
  VAR_1, 0x100 + VAR_2 + 10);
 VAR_3->w_Nchannel = (VAR_4 >> 4) & 0x03FF;

 VAR_4 = FUNC_0(VAR_0,
  VAR_1, 0x100 + VAR_2 + 16);
 VAR_3->b_Resolution = (unsigned char) (VAR_4 >> 8) & 0xFF;
 return 0;
}
