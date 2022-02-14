
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SRes ;
typedef int ISzAlloc ;
typedef int ICompressProgress ;
typedef int CLzmaEncProps ;
typedef int CLzmaEnc ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,size_t*,unsigned char const*,size_t,int,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int const*) ;
 scalar_t__ FUNC_4 (int *,unsigned char*,size_t*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

SRes FUNC_5(unsigned char *VAR_2, size_t *VAR_3, const unsigned char *VAR_4, size_t VAR_5,
    const CLzmaEncProps *VAR_6, unsigned char *VAR_7, size_t *VAR_8, int VAR_9,
    ICompressProgress *VAR_10, ISzAlloc *VAR_11, ISzAlloc *VAR_12)
{
  CLzmaEnc *VAR_13 = (CLzmaEnc *)FUNC_0(VAR_11);
  SRes VAR_14;
  if (!VAR_13)
    return VAR_0;

  VAR_14 = FUNC_3(VAR_13, VAR_6);
  if (VAR_14 == VAR_1)
  {
    VAR_14 = FUNC_4(VAR_13, VAR_7, VAR_8);
    if (VAR_14 == VAR_1)
      VAR_14 = FUNC_2(VAR_13, VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_9, VAR_10, VAR_11, VAR_12);
  }

  FUNC_1(VAR_13, VAR_11, VAR_12);
  return VAR_14;
}
