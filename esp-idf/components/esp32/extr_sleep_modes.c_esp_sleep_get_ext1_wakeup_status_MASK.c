
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int rtc_num; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 TYPE_1__* VAR_4 ;

uint64_t FUNC_4(void)
{
    if (FUNC_3() != VAR_0) {
        return 0;
    }
    uint32_t VAR_5 = FUNC_1(VAR_3, VAR_2);

    uint64_t VAR_6 = 0;
    for (int VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
        if (!FUNC_2(VAR_7)) {
            continue;
        }
        int VAR_8 = VAR_4[VAR_7].rtc_num;
        if ((VAR_5 & FUNC_0(VAR_8)) == 0) {
            continue;
        }
        VAR_6 |= 1ULL << VAR_7;
    }
    return VAR_6;
}
