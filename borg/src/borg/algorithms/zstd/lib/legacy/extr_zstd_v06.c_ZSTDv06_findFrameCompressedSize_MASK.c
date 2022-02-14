
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_1; int member_0; } ;
typedef TYPE_1__ blockProperties_t ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 scalar_t__ VAR_0 ;
 size_t const VAR_1 ;
 size_t FUNC_2 (void const*,int ) ;
 int VAR_2 ;
 size_t FUNC_3 (int const*,size_t,TYPE_1__*) ;
 scalar_t__ FUNC_4 (size_t const) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

size_t FUNC_5(const void* VAR_6, size_t VAR_7)
{
    const BYTE* VAR_8 = (const BYTE*)VAR_6;
    size_t VAR_9 = VAR_7;
    blockProperties_t VAR_10 = { VAR_3, 0 };


    { size_t const VAR_11 = FUNC_2(VAR_6, VAR_2);
        if (FUNC_4(VAR_11)) return VAR_11;
        if (FUNC_1(VAR_6) != VAR_0) return FUNC_0(VAR_4);
        if (VAR_7 < VAR_11+VAR_1) return FUNC_0(VAR_5);
        VAR_8 += VAR_11; VAR_9 -= VAR_11;
    }


    while (1) {
        size_t const VAR_12 = FUNC_3(VAR_8, VAR_9, &VAR_10);
        if (FUNC_4(VAR_12)) return VAR_12;

        VAR_8 += VAR_1;
        VAR_9 -= VAR_1;
        if (VAR_12 > VAR_9) return FUNC_0(VAR_5);

        if (VAR_12 == 0) break;

        VAR_8 += VAR_12;
        VAR_9 -= VAR_12;
    }

    return VAR_8 - (const BYTE*)VAR_6;
}
