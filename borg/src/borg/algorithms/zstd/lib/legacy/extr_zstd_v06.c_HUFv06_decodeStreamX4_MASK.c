
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int HUFv06_DEltX4 ;
typedef int BYTE ;
typedef int BITv06_DStream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int const* const,int const) ;

__attribute__((used)) static inline size_t FUNC_5(BYTE* VAR_1, BITv06_DStream_t* VAR_2, BYTE* const VAR_3, const HUFv06_DEltX4* const VAR_4, const U32 VAR_5)
{
    BYTE* const VAR_6 = VAR_1;


    while ((FUNC_0(VAR_2) == VAR_0) && (VAR_1 < VAR_3-7)) {
        FUNC_3(VAR_1, VAR_2);
        FUNC_2(VAR_1, VAR_2);
        FUNC_3(VAR_1, VAR_2);
        FUNC_1(VAR_1, VAR_2);
    }


    while ((FUNC_0(VAR_2) == VAR_0) && (VAR_1 <= VAR_3-2))
        FUNC_1(VAR_1, VAR_2);

    while (VAR_1 <= VAR_3-2)
        FUNC_1(VAR_1, VAR_2);

    if (VAR_1 < VAR_3)
        VAR_1 += FUNC_4(VAR_1, VAR_2, VAR_4, VAR_5);

    return VAR_1-VAR_6;
}
