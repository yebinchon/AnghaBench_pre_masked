
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__uint32 ;
typedef int FLAC__int32 ;
typedef int FLAC__bool ;
typedef int FLAC__BitReader ;


 int FUNC_0 (int *,int*,unsigned int) ;

FLAC__bool FUNC_1(FLAC__BitReader *VAR_0, FLAC__int32 *VAR_1, unsigned VAR_2)
{
 FLAC__uint32 VAR_3, VAR_4;

 if(!FUNC_0(VAR_0, &VAR_3, VAR_2))
  return 0;


 VAR_4 = 1u << (VAR_2 - 1);
 *VAR_1 = (VAR_3 ^ VAR_4) - VAR_4;
 return 1;
}
