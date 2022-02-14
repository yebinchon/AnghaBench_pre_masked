
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__byte ;


 unsigned int* VAR_0 ;

unsigned FUNC_0(const FLAC__byte *VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = 0;

 while(VAR_2--)
  VAR_3 = ((VAR_3<<8) ^ VAR_0[(VAR_3>>8) ^ *VAR_1++]) & 0xffff;

 return VAR_3;
}
