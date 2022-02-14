
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int U16 ;
typedef int HUFv06_DEltX2 ;
typedef int BYTE ;
typedef int BITv06_DStream_t ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,void const*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int * const,int const* const,int const) ;
 scalar_t__ FUNC_4 (size_t const) ;
 int VAR_0 ;

size_t FUNC_5(
          void* VAR_1, size_t VAR_2,
    const void* VAR_3, size_t VAR_4,
    const U16* VAR_5)
{
    BYTE* VAR_6 = (BYTE*)VAR_1;
    BYTE* const VAR_7 = VAR_6 + VAR_2;
    const U32 VAR_8 = VAR_5[0];
    const void* VAR_9 = VAR_5;
    const HUFv06_DEltX2* const VAR_10 = ((const HUFv06_DEltX2*)VAR_9)+1;
    BITv06_DStream_t VAR_11;

    { size_t const VAR_12 = FUNC_1(&VAR_11, VAR_3, VAR_4);
      if (FUNC_4(VAR_12)) return VAR_12; }

    FUNC_3(VAR_6, &VAR_11, VAR_7, VAR_10, VAR_8);


    if (!FUNC_0(&VAR_11)) return FUNC_2(VAR_0);

    return VAR_2;
}
