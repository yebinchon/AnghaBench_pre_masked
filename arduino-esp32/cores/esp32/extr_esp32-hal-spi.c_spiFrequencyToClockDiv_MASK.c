
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int member_0; scalar_t__ value; int clkcnt_n; int clkdiv_pre; int clkcnt_l; } ;
typedef TYPE_1__ spiClk_t ;
typedef scalar_t__ int8_t ;
typedef int int32_t ;
typedef int bestReg ;


 void* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;

uint32_t FUNC_4(uint32_t VAR_1)
{
    uint32_t VAR_2 = FUNC_2();

    if(VAR_1 >= VAR_2) {
        return VAR_0;
    }

    const spiClk_t VAR_3 = { 0x7FFFF000 };
    uint32_t VAR_4 = FUNC_0((spiClk_t*) &VAR_3);
    if(VAR_1 < VAR_4) {
        return VAR_3.value;
    }

    uint8_t VAR_5 = 1;
    spiClk_t VAR_6 = { 0 };
    int32_t VAR_7 = 0;

    while(VAR_5 <= 0x3F) {
        spiClk_t VAR_8 = { 0 };
        int32_t VAR_9;
        int32_t VAR_10;
        int8_t VAR_11 = -2;

        VAR_8.clkcnt_n = VAR_5;

        while(VAR_11++ <= 1) {
            VAR_10 = (((VAR_2 / (VAR_8.clkcnt_n + 1)) / VAR_1) - 1) + VAR_11;
            if(VAR_10 > 0x1FFF) {
                VAR_8.clkdiv_pre = 0x1FFF;
            } else if(VAR_10 <= 0) {
                VAR_8.clkdiv_pre = 0;
            } else {
                VAR_8.clkdiv_pre = VAR_10;
            }
            VAR_8.clkcnt_l = ((VAR_8.clkcnt_n + 1) / 2);
            VAR_9 = FUNC_0(&VAR_8);
            if(VAR_9 == (int32_t) VAR_1) {
                FUNC_3(&VAR_6, &VAR_8, sizeof(VAR_6));
                break;
            } else if(VAR_9 < (int32_t) VAR_1) {
                if(FUNC_1(VAR_1 - VAR_9) < FUNC_1(VAR_1 - VAR_7)) {
                    VAR_7 = VAR_9;
                    FUNC_3(&VAR_6, &VAR_8, sizeof(VAR_6));
                }
            }
        }
        if(VAR_9 == (int32_t) VAR_1) {
            break;
        }
        VAR_5++;
    }
    return VAR_6.value;
}
