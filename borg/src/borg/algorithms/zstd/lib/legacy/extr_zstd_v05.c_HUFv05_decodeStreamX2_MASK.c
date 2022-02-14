
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int HUFv05_DEltX2 ;
typedef int BYTE ;
typedef int BITv05_DStream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int * const) ;
 int FUNC_1 (int *,int * const) ;
 int FUNC_2 (int *,int * const) ;
 int FUNC_3 (int *,int * const) ;

__attribute__((used)) static inline size_t FUNC_4(BYTE* VAR_1, BITv05_DStream_t* const VAR_2, BYTE* const VAR_3, const HUFv05_DEltX2* const VAR_4, const U32 VAR_5)
{
    BYTE* const VAR_6 = VAR_1;


    while ((FUNC_0(VAR_2) == VAR_0) && (VAR_1 <= VAR_3-4)) {
        FUNC_3(VAR_1, VAR_2);
        FUNC_2(VAR_1, VAR_2);
        FUNC_3(VAR_1, VAR_2);
        FUNC_1(VAR_1, VAR_2);
    }


    while ((FUNC_0(VAR_2) == VAR_0) && (VAR_1 < VAR_3))
        FUNC_1(VAR_1, VAR_2);


    while (VAR_1 < VAR_3)
        FUNC_1(VAR_1, VAR_2);

    return VAR_3-VAR_6;
}
