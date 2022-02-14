
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {int ea_addr; int fault_addr; int fault_status; int* A; int * DA; int exception; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int,int,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_8(Q68State *VAR_11, uint32_t VAR_12)
{

    if (FUNC_0(VAR_12) == VAR_2) {
        return FUNC_6(VAR_11, VAR_12);
    }

    unsigned int VAR_13 = FUNC_2(VAR_11);
    int VAR_14 = (VAR_12 & 0x0040) ? VAR_9 : VAR_10;
    if (FUNC_0(VAR_12) <= VAR_1
     || FUNC_0(VAR_12) == VAR_4
    ) {
        return FUNC_7(VAR_11, VAR_12);
    }


    uint16_t VAR_15;
    if (FUNC_0(VAR_12) == VAR_5) {
        VAR_15 = VAR_3<<3 | FUNC_1(VAR_12);
    } else {
        VAR_15 = VAR_12;
    }
    int VAR_16 = FUNC_5(VAR_11, VAR_15, VAR_10, VAR_0);
    if (VAR_16 < 0) {
        return FUNC_7(VAR_11, VAR_12);
    }

    if (VAR_11->ea_addr & 1) {
        VAR_11->exception = VAR_6;
        VAR_11->fault_addr = VAR_11->ea_addr;
        VAR_11->fault_status = VAR_7
                            | VAR_8;
        return 0;
    }


    if (FUNC_0(VAR_12) == VAR_5) {

        int VAR_17;
        for (VAR_17 = 15; VAR_17 >= 0; VAR_17--, VAR_13 >>= 1) {
            if (VAR_13 & 1) {
                if (VAR_14 == VAR_10) {
                    VAR_11->ea_addr -= 2;
                    FUNC_3(VAR_11, VAR_11->ea_addr, VAR_11->DA[VAR_17]);
                    VAR_16 += 4;
                } else {
                    VAR_11->ea_addr -= 4;
                    FUNC_4(VAR_11, VAR_11->ea_addr, VAR_11->DA[VAR_17]);
                    VAR_16 += 8;
                }
            }
        }
        VAR_11->A[FUNC_1(VAR_12)] = VAR_11->ea_addr;
    } else {
        int VAR_18;
        for (VAR_18 = 0; VAR_18 < 16; VAR_18++, VAR_13 >>= 1) {
            if (VAR_13 & 1) {
                if (VAR_14 == VAR_10) {
                    FUNC_3(VAR_11, VAR_11->ea_addr, VAR_11->DA[VAR_18]);
                    VAR_11->ea_addr += 2;
                    VAR_16 += 4;
                } else {
                    FUNC_4(VAR_11, VAR_11->ea_addr, VAR_11->DA[VAR_18]);
                    VAR_11->ea_addr += 4;
                    VAR_16 += 8;
                }
            }
        }
    }

    return 4 + VAR_16;
}
