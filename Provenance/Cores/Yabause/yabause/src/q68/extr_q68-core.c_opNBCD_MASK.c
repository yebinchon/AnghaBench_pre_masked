
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int SR; } ;
typedef TYPE_1__ Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int,int*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(Q68State *VAR_7, uint32_t VAR_8)
{
    if (FUNC_0(VAR_8) == VAR_0) {
        return FUNC_3(VAR_7, VAR_8);
    }

    int VAR_9;
    int VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_2, 1, &VAR_9);
    if (VAR_9 < 0) {
        return 0;
    }

    int VAR_11;
    int VAR_12 = (VAR_7->SR >> VAR_5) & 1;
    VAR_7->SR &= ~(VAR_4 | VAR_3);

    int VAR_13 = 0 - (VAR_10 & 0x0F) - VAR_12;
    int VAR_14 = 0;
    if (VAR_13 < 0) {
        VAR_13 += 10;
        VAR_14 = 1<<4;
    }
    int VAR_15 = 0 - (VAR_10 & 0xF0) - VAR_14;
    if (VAR_15 < 0) {
        VAR_15 += 10<<4;
        VAR_7->SR |= VAR_4 | VAR_3;
    }
    VAR_11 = VAR_15 + VAR_13;
    if (VAR_11 < 0) {
        VAR_7->SR |= VAR_4 | VAR_3;
    }
    VAR_11 &= 0xFF;
    if (VAR_11 != 0) {
        VAR_7->SR &= ~VAR_6;
    }

    FUNC_2(VAR_7, VAR_8, VAR_2, VAR_11);
    return (FUNC_0(VAR_8) == VAR_1 ? 6 : 8) + VAR_9;
}
