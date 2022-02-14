
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int U32 ;
typedef int HUFv05_DEltX4 ;
typedef int BYTE ;
typedef int BITv05_DStream_t ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,int const* const,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int * const,int *,int * const,int const* const,unsigned int const) ;
 scalar_t__ FUNC_4 (size_t) ;
 int VAR_0 ;

size_t FUNC_5(
          void* VAR_1, size_t VAR_2,
    const void* VAR_3, size_t VAR_4,
    const unsigned* VAR_5)
{
    const BYTE* const VAR_6 = (const BYTE*) VAR_3;
    BYTE* const VAR_7 = (BYTE*) VAR_1;
    BYTE* const VAR_8 = VAR_7 + VAR_2;

    const U32 VAR_9 = VAR_5[0];
    const void* const VAR_10 = VAR_5;
    const HUFv05_DEltX4* const VAR_11 = ((const HUFv05_DEltX4*)VAR_10) +1;
    size_t VAR_12;


    BITv05_DStream_t VAR_13;
    VAR_12 = FUNC_1(&VAR_13, VAR_6, VAR_4);
    if (FUNC_4(VAR_12)) return VAR_12;


    FUNC_3(VAR_7, &VAR_13, VAR_8, VAR_11, VAR_9);


    if (!FUNC_0(&VAR_13)) return FUNC_2(VAR_0);


    return VAR_2;
}
