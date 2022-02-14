
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct str_AnalogInputHeader {unsigned short w_Nchannel; unsigned short b_HasDma; unsigned short b_Resolution; void* w_MinDelayTiming; void* w_MinConvertTiming; } ;


 void* FUNC_0 (unsigned short,char*,int) ;

int FUNC_1(unsigned short VAR_0,
 char *VAR_1, unsigned short VAR_2,
 struct str_AnalogInputHeader *VAR_3)
{
 unsigned short VAR_4, VAR_5;
 VAR_4 = FUNC_0(VAR_0,
  VAR_1, 0x100 + VAR_2 + 10);
 VAR_3->w_Nchannel = (VAR_4 >> 4) & 0x03FF;
 VAR_3->w_MinConvertTiming =
  FUNC_0(VAR_0, VAR_1,
  0x100 + VAR_2 + 16);
 VAR_3->w_MinDelayTiming =
  FUNC_0(VAR_0, VAR_1,
  0x100 + VAR_2 + 30);
 VAR_4 = FUNC_0(VAR_0,
  VAR_1, 0x100 + VAR_2 + 20);
 VAR_3->b_HasDma = (VAR_4 >> 13) & 0x01;

 VAR_4 = FUNC_0(VAR_0, VAR_1, 0x100 + VAR_2 + 72);
 VAR_4 = VAR_4 & 0x00FF;
 if (VAR_4)
 {
  VAR_5 = 74 + (2 * VAR_4) + (10 * (1 + (VAR_4 / 16)));
  VAR_5 = VAR_5 + 2;
 } else
 {
  VAR_5 = 74;
  VAR_5 = VAR_5 + 2;
 }


 VAR_4 = FUNC_0(VAR_0,
  VAR_1, 0x100 + VAR_2 + VAR_5);
 VAR_3->b_Resolution = VAR_4 & 0x001F;

 return 0;
}
