
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {int current_PC; } ;
typedef TYPE_1__ Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int,scalar_t__*) ;
 int FUNC_4 (int ,int,scalar_t__) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(Q68State *VAR_12, uint32_t VAR_13)
{
    VAR_6;
    VAR_7;
    int VAR_14 = 0;
    if (VAR_10 == 0) {
        VAR_10 = (int16_t)FUNC_0(VAR_12);
        VAR_14 = 4;
    }
    uint32_t VAR_15 = VAR_12->current_PC + VAR_10;
    if (VAR_8 == VAR_1) {


        FUNC_5(VAR_9, VAR_13,
                                  VAR_4 | VAR_5);

        FUNC_1(VAR_9, 18);
        FUNC_7(VAR_12);
        FUNC_2(VAR_9, VAR_11, VAR_15);
        return 0;
    } else {
        int32_t VAR_16;
        if (VAR_15 < VAR_12->current_PC) {
            VAR_16 = FUNC_8(VAR_15);
        } else {
            VAR_16 = -1;
        }
        FUNC_6(VAR_8, VAR_9);
        if (VAR_16 >= 0) {
            FUNC_4(VAR_9, VAR_15, VAR_16);
        } else {
            int32_t VAR_17;
            FUNC_3(VAR_9, VAR_15, &VAR_17);
            if (VAR_15 >= VAR_12->current_PC && VAR_17 >= 0) {
                FUNC_9(VAR_15, VAR_17);
            }
        }
        FUNC_1(VAR_9, 8 + VAR_14);
        return 0;
    }
}
