
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char FLAC__byte ;
typedef int FLAC__bool ;


 unsigned int FUNC_0 (char const*) ;

FLAC__bool FUNC_1(const FLAC__byte *VAR_0, unsigned VAR_1)
{
 const FLAC__byte *VAR_2, *VAR_3;

 for(VAR_2 = VAR_0, VAR_3 = VAR_2 + VAR_1; VAR_2 < VAR_3 && *VAR_2 != '='; VAR_2++) {
  if(*VAR_2 < 0x20 || *VAR_2 > 0x7D)
   return 0;
 }
 if(VAR_2 == VAR_3)
  return 0;

 VAR_2++;

 while(VAR_2 < VAR_3) {
  unsigned VAR_4 = FUNC_0(VAR_2);
  if(VAR_4 == 0)
   return 0;
  VAR_2 += VAR_4;
 }
 if(VAR_2 != VAR_3)
  return 0;

 return 1;
}
