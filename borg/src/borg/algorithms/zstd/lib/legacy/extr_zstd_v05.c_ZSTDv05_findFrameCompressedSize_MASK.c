
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int blockProperties_t ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_2 (int const*,size_t,int *) ;
 scalar_t__ FUNC_3 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;

size_t FUNC_4(const void *VAR_5, size_t VAR_6)
{
    const BYTE* VAR_7 = (const BYTE*)VAR_5;
    size_t VAR_8 = VAR_6;
    blockProperties_t VAR_9;


    if (VAR_6 < VAR_2) return FUNC_0(VAR_4);
    if (FUNC_1(VAR_5) != VAR_0) return FUNC_0(VAR_3);
    VAR_7 += VAR_2; VAR_8 -= VAR_2;


    while (1)
    {
        size_t VAR_10 = FUNC_2(VAR_7, VAR_8, &VAR_9);
        if (FUNC_3(VAR_10)) return VAR_10;

        VAR_7 += VAR_1;
        VAR_8 -= VAR_1;
        if (VAR_10 > VAR_8) return FUNC_0(VAR_4);

        if (VAR_10 == 0) break;

        VAR_7 += VAR_10;
        VAR_8 -= VAR_10;
    }

    return VAR_7 - (const BYTE*)VAR_5;
}
