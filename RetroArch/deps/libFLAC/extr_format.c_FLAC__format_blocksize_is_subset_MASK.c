
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__bool ;



FLAC__bool FUNC_0(unsigned VAR_0, unsigned VAR_1)
{
 if(VAR_0 > 16384)
  return 0;
 else if(VAR_1 <= 48000 && VAR_0 > 4608)
  return 0;
 else
  return 1;
}
