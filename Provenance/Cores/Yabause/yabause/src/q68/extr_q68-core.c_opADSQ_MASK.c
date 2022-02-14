
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int SR; } ;
typedef TYPE_1__ Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*,int,int,int,int*) ;
 int FUNC_5 (TYPE_1__*,int,int,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(Q68State *VAR_10, uint32_t VAR_11)
{
    const int VAR_12 = VAR_11 & 0x0100;
    VAR_2;
    VAR_3;
    if (FUNC_0(VAR_11) == VAR_0 && VAR_9 == 1) {
        VAR_9 = 2;
    }
    const int VAR_13 = FUNC_3(VAR_9);
    const int VAR_14 = VAR_13*8 - 1;
    const uint32_t VAR_15 = ~(~1 << VAR_14);
    int VAR_16;
    uint32_t VAR_17 = FUNC_4(VAR_10, VAR_11, VAR_9, 1, &VAR_16);
    if (VAR_16 < 0) {
        return 0;
    }

    uint32_t VAR_18;
    if (VAR_12) {
        VAR_18 = VAR_17 - VAR_8;
    } else {
        VAR_18 = VAR_17 + VAR_8;
    }
    VAR_18 &= VAR_15;
    if (FUNC_0(VAR_11) != VAR_0) {
        FUNC_1();
        FUNC_2(VAR_18);
        if ((VAR_12 ? ~VAR_18 & VAR_17 : VAR_18 & ~VAR_17) >> VAR_14) {
            VAR_10->SR |= VAR_6;
        }
        if ((VAR_12 ? VAR_18 & ~VAR_17 : ~VAR_18 & VAR_17) >> VAR_14) {
            VAR_10->SR |= VAR_7 | VAR_5;
        }
    }

    FUNC_5(VAR_10, VAR_11, VAR_9, VAR_18);
    return (VAR_9==VAR_4 || FUNC_0(VAR_11) == VAR_0 ? 8 : 4)
           + (FUNC_0(VAR_11) >= VAR_1 ? 4 : 0) + VAR_16;
}
