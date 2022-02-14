
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pvr_ptr_t ;
typedef int ptr_t ;
struct TYPE_2__ {int PRINA; int PRINB; int PRIR; int TVMD; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (scalar_t__,int ,int,int ,int ,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__* VAR_10 ;

__attribute__((used)) static void FUNC_14(void) {
    int VAR_11;

    FUNC_5(VAR_0->TVMD);
    FUNC_0(VAR_0->PRINA & 0x7);
    FUNC_1((VAR_0->PRINA >> 8) & 0x7);
    FUNC_2(VAR_0->PRINB & 0x7);
    FUNC_3((VAR_0->PRINB >> 8) & 0x7);
    FUNC_4(VAR_0->PRIR & 0x7);

    VAR_8 = VAR_10[0];
    VAR_9 = 0;

    for(VAR_11 = 1; VAR_11 < 8; VAR_11++) {
        if(VAR_7 == VAR_11) {
            if(FUNC_10()) {
                FUNC_11((ptr_t)(VAR_8), 512 * 256 * 2);
                FUNC_13(&VAR_3);

                FUNC_12(VAR_8, (pvr_ptr_t) VAR_1, 512 * 256 * 2,
                                 0, VAR_2, 0);

                FUNC_6(VAR_11);

                VAR_1 += 512 * 256 * 2;
                VAR_9 ^= 1;
                VAR_8 = VAR_10[VAR_9];
            }
        }
        if(VAR_6 == VAR_11) {
            if(FUNC_9()) {
                FUNC_11((ptr_t)(VAR_8), 512 * 256 * 2);
                FUNC_13(&VAR_3);

                FUNC_12(VAR_8, (pvr_ptr_t) VAR_1, 512 * 256 * 2,
                                 0, VAR_2, 0);

                FUNC_6(VAR_11);

                VAR_1 += 512 * 256 * 2;
                VAR_9 ^= 1;
                VAR_8 = VAR_10[VAR_9];
            }
        }
        if(VAR_5 == VAR_11) {
            if(FUNC_8()) {
                FUNC_11((ptr_t)(VAR_8), 512 * 256 * 2);
                FUNC_13(&VAR_3);

                FUNC_12(VAR_8, (pvr_ptr_t) VAR_1, 512 * 256 * 2,
                                 0, VAR_2, 0);

                FUNC_6(VAR_11);

                VAR_1 += 512 * 256 * 2;
                VAR_9 ^= 1;
                VAR_8 = VAR_10[VAR_9];
            }
        }
        if(VAR_4 == VAR_11) {
            if(FUNC_7()) {
                FUNC_11((ptr_t)(VAR_8), 512 * 256 * 2);
                FUNC_13(&VAR_3);

                FUNC_12(VAR_8, (pvr_ptr_t) VAR_1, 512 * 256 * 2,
                                 0, VAR_2, 0);

                FUNC_6(VAR_11);

                VAR_1 += 512 * 256 * 2;
                VAR_9 ^= 1;
                VAR_8 = VAR_10[VAR_9];
            }
        }


    }
}
