
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int tmp ;
struct AVSHA {int dummy; } ;
typedef int clock_t ;
typedef int buffer ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct AVSHA*,unsigned char*) ;
 int FUNC_4 (struct AVSHA*,int) ;
 int VAR_2 ;
 int FUNC_5 (struct AVSHA*,int const*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int*,int ,int) ;

__attribute__((used)) static uint32_t FUNC_8(void)
{
    uint64_t VAR_3[120/8];
    struct AVSHA *VAR_4 = (void*)VAR_3;
    clock_t VAR_5 = 0;
    clock_t VAR_6 = 0;
    clock_t VAR_7 = 0;
    static uint64_t VAR_8 = 0;
    static uint32_t VAR_9[512] = { 0 };
    unsigned char VAR_10[20];
    uint64_t VAR_11 = VAR_8;

    FUNC_2(sizeof(VAR_3) >= VAR_2);

    if(VAR_1){
        FUNC_7(VAR_9, 0, sizeof(VAR_9));
        VAR_11 = VAR_8 = 0;
    }else{




    }

    for (;;) {
        clock_t VAR_12 = FUNC_6();
        if (VAR_5 + 2*VAR_6 + (VAR_0 > 1000) >= VAR_12) {
            VAR_6 = VAR_12 - VAR_5;
            VAR_9[VAR_8 & 511] = 1664525*VAR_9[VAR_8 & 511] + 1013904223 + (VAR_6 % 3294638521U);
        } else {
            VAR_6 = VAR_12 - VAR_5;
            VAR_9[++VAR_8 & 511] += VAR_6 % 3294638521U;
            if ((VAR_12 - VAR_7) >= VAR_0>>5)
                if (VAR_11 && VAR_8 - VAR_11 > 4 || VAR_8 - VAR_11 > 64 || VAR_1 && VAR_8 - VAR_11 > 8)
                    break;
        }
        VAR_5 = VAR_12;
        if (!VAR_7)
            VAR_7 = VAR_12;
    }

    if(VAR_1) {
        VAR_9[0] = VAR_9[1] = 0;
    } else {



    }

    FUNC_4(VAR_4, 160);
    FUNC_5(VAR_4, (const uint8_t *)VAR_9, sizeof(VAR_9));
    FUNC_3(VAR_4, VAR_10);
    return FUNC_0(VAR_10) + FUNC_0(VAR_10 + 16);
}
