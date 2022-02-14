
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 scalar_t__ VAR_0 ;
 long long VAR_1 ;
 size_t FUNC_0 (unsigned long long) ;

int FUNC_1(char* VAR_2, size_t VAR_3, long long VAR_4) {
    static const char VAR_5[201] =
        "0001020304050607080910111213141516171819"
        "2021222324252627282930313233343536373839"
        "4041424344454647484950515253545556575859"
        "6061626364656667686970717273747576777879"
        "8081828384858687888990919293949596979899";
    int VAR_6;
    unsigned long long VAR_7;



    if (VAR_4 < 0) {
        if (VAR_4 != VAR_1) {
            VAR_7 = -VAR_4;
        } else {
            VAR_7 = ((unsigned long long) VAR_0)+1;
        }
        VAR_6 = 1;
    } else {
        VAR_7 = VAR_4;
        VAR_6 = 0;
    }


    uint32_t const VAR_8 = FUNC_0(VAR_7)+VAR_6;
    if (VAR_8 >= VAR_3) return 0;


    uint32_t VAR_9 = VAR_8;
    VAR_2[VAR_9] = '\0';
    VAR_9--;
    while (VAR_7 >= 100) {
        int const VAR_10 = (VAR_7 % 100) * 2;
        VAR_7 /= 100;
        VAR_2[VAR_9] = VAR_5[VAR_10 + 1];
        VAR_2[VAR_9 - 1] = VAR_5[VAR_10];
        VAR_9 -= 2;
    }


    if (VAR_7 < 10) {
        VAR_2[VAR_9] = '0' + (uint32_t) VAR_7;
    } else {
        int VAR_11 = (uint32_t) VAR_7 * 2;
        VAR_2[VAR_9] = VAR_5[VAR_11 + 1];
        VAR_2[VAR_9 - 1] = VAR_5[VAR_11];
    }


    if (VAR_6) VAR_2[0] = '-';
    return VAR_8;
}
