
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__bool ;



FLAC__bool FUNC_0(const char *VAR_0)
{
 char VAR_1;
 for(VAR_1 = *VAR_0; VAR_1; VAR_1 = *(++VAR_0))
  if(VAR_1 < 0x20 || VAR_1 == 0x3d || VAR_1 > 0x7d)
   return 0;
 return 1;
}
