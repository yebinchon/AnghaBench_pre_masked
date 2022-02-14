
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int blockProperties_t ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_2 (int const*,size_t,int *) ;
 scalar_t__ FUNC_3 (size_t) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static size_t FUNC_4(const void *VAR_5, size_t VAR_6)
{

    const BYTE* VAR_7 = (const BYTE*)VAR_5;
    size_t VAR_8 = VAR_6;
    U32 VAR_9;
    blockProperties_t VAR_10;


    if (VAR_6 < VAR_1+VAR_0) return FUNC_0(VAR_4);
    VAR_9 = FUNC_1(VAR_5);
    if (VAR_9 != VAR_2) return FUNC_0(VAR_3);
    VAR_7 += VAR_1; VAR_8 -= VAR_1;


    while (1)
    {
        size_t VAR_11 = FUNC_2(VAR_7, VAR_8, &VAR_10);
        if (FUNC_3(VAR_11)) return VAR_11;

        VAR_7 += VAR_0;
        VAR_8 -= VAR_0;
        if (VAR_11 > VAR_8) return FUNC_0(VAR_4);

        if (VAR_11 == 0) break;

        VAR_7 += VAR_11;
        VAR_8 -= VAR_11;
    }

    return VAR_7 - (const BYTE*)VAR_5;
}
