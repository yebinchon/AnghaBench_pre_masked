
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__uint64 ;
typedef int FLAC__uint32 ;
typedef int FLAC__bool ;
typedef int FLAC__BitReader ;


 int FUNC_0 (int *,int*,unsigned int) ;

FLAC__bool FUNC_1(FLAC__BitReader *VAR_0, FLAC__uint64 *VAR_1, unsigned VAR_2)
{
 FLAC__uint32 VAR_3, VAR_4;

 if(VAR_2 > 32) {
  if(!FUNC_0(VAR_0, &VAR_3, VAR_2-32))
   return 0;
  if(!FUNC_0(VAR_0, &VAR_4, 32))
   return 0;
  *VAR_1 = VAR_3;
  *VAR_1 <<= 32;
  *VAR_1 |= VAR_4;
 }
 else {
  if(!FUNC_0(VAR_0, &VAR_4, VAR_2))
   return 0;
  *VAR_1 = VAR_4;
 }
 return 1;
}
