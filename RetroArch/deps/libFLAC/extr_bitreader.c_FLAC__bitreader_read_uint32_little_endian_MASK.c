
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__uint32 ;
typedef int FLAC__bool ;
typedef int FLAC__BitReader ;


 int FUNC_0 (int *,int*,int) ;

FLAC__bool FUNC_1(FLAC__BitReader *VAR_0, FLAC__uint32 *VAR_1)
{
 FLAC__uint32 VAR_2, VAR_3 = 0;



 if(!FUNC_0(VAR_0, &VAR_3, 8))
  return 0;

 if(!FUNC_0(VAR_0, &VAR_2, 8))
  return 0;
 VAR_3 |= (VAR_2 << 8);

 if(!FUNC_0(VAR_0, &VAR_2, 8))
  return 0;
 VAR_3 |= (VAR_2 << 16);

 if(!FUNC_0(VAR_0, &VAR_2, 8))
  return 0;
 VAR_3 |= (VAR_2 << 24);

 *VAR_1 = VAR_3;
 return 1;
}
