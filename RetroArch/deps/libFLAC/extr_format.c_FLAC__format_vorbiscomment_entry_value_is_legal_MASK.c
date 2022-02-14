
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ FLAC__byte ;
typedef int FLAC__bool ;


 unsigned int FUNC_0 (scalar_t__ const*) ;

FLAC__bool FUNC_1(const FLAC__byte *VAR_0, unsigned VAR_1)
{
 if(VAR_1 == (unsigned)(-1)) {
  while(*VAR_0) {
   unsigned VAR_2 = FUNC_0(VAR_0);
   if(VAR_2 == 0)
    return 0;
   VAR_0 += VAR_2;
  }
 }
 else {
  const FLAC__byte *VAR_3 = VAR_0 + VAR_1;
  while(VAR_0 < VAR_3) {
   unsigned VAR_4 = FUNC_0(VAR_0);
   if(VAR_4 == 0)
    return 0;
   VAR_0 += VAR_4;
  }
  if(VAR_0 != VAR_3)
   return 0;
 }
 return 1;
}
