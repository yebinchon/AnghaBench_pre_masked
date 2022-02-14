
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (void const*) ;
 unsigned long long VAR_0 ;
 size_t VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 size_t FUNC_1 (void const*,size_t) ;
 unsigned long long FUNC_2 (void const*,size_t) ;
 scalar_t__ FUNC_3 (size_t const) ;
 size_t FUNC_4 (void const*,size_t) ;

unsigned long long FUNC_5(const void* VAR_4, size_t VAR_5)
{
    unsigned long long VAR_6 = 0;

    while (VAR_5 >= VAR_1) {
        U32 const VAR_7 = FUNC_0(VAR_4);

        if ((VAR_7 & VAR_2) == VAR_3) {
            size_t const VAR_8 = FUNC_4(VAR_4, VAR_5);
            if (FUNC_3(VAR_8))
                return VAR_8;
            if (VAR_5 < VAR_8) {
                return VAR_0;
            }

            VAR_4 = (const BYTE *)VAR_4 + VAR_8;
            VAR_5 -= VAR_8;
            continue;
        }

        { unsigned long long const VAR_9 = FUNC_2(VAR_4, VAR_5);
            if (VAR_9 >= VAR_0) return VAR_9;


            if (VAR_6 + VAR_9 < VAR_6) return VAR_0;
            VAR_6 += VAR_9;
        }
        { size_t const VAR_10 = FUNC_1(VAR_4, VAR_5);
            if (FUNC_3(VAR_10)) {
                return VAR_0;
            }

            VAR_4 = (const BYTE *)VAR_4 + VAR_10;
            VAR_5 -= VAR_10;
        }
    }

    if (VAR_5) return VAR_0;

    return VAR_6;
}
