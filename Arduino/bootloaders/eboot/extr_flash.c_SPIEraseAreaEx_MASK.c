
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(const uint32_t VAR_2, const uint32_t VAR_3)
{
    if (VAR_2 & ((VAR_1 - 1) != 0)) {
        return 1;
    }

    const uint32_t VAR_4 = VAR_0 / VAR_1;
    uint32_t VAR_5 = VAR_2 / VAR_1;
    uint32_t VAR_6 = (VAR_3 + VAR_1 - 1) / VAR_1;
    const uint32_t VAR_7 = VAR_5 + VAR_6;

    for (; VAR_5 < VAR_7 && (VAR_5 & (VAR_4-1));
        ++VAR_5, --VAR_6) {
        if (FUNC_1(VAR_5)) {
            return 2;
        }
    }

    for (;VAR_5 + VAR_4 <= VAR_7;
        VAR_5 += VAR_4,
        VAR_6 -= VAR_4) {
        if (FUNC_0(VAR_5 / VAR_4)) {
            return 3;
        }
    }

    for (; VAR_5 < VAR_7;
        ++VAR_5, --VAR_6) {
        if (FUNC_1(VAR_5)) {
            return 4;
        }
    }

    return 0;
}
