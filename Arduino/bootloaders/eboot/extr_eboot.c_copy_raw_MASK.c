
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int *,int const) ;
 scalar_t__ FUNC_2 (int,int *,int const) ;

int FUNC_3(const uint32_t VAR_1,
             const uint32_t VAR_2,
             const uint32_t VAR_3)
{

    if (VAR_1 & (0xfff != 0) ||
        VAR_2 & (0xfff != 0)) {
        return 1;
    }

    const uint32_t VAR_4 = VAR_0;
    uint8_t VAR_5[VAR_4];
    uint32_t VAR_6 = ((VAR_3+VAR_4-1) & ~(VAR_4-1));
    uint32_t VAR_7 = VAR_1;
    uint32_t VAR_8 = VAR_2;

    while (VAR_6) {
        if (FUNC_0(VAR_8/VAR_4)) {
            return 2;
        }
        if (FUNC_1(VAR_7, VAR_5, VAR_4)) {
            return 3;
        }
        if (FUNC_2(VAR_8, VAR_5, VAR_4)) {
            return 4;
        }
        VAR_7 += VAR_4;
        VAR_8 += VAR_4;
        VAR_6 -= VAR_4;
    }

    return 0;
}
