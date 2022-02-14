
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const ptrdiff_t ;
typedef int int8_t ;
typedef int int16_t ;
struct TYPE_4__ {int member_0; int member_1; } ;
struct TYPE_3__ {int member_0; int member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int const,int const,int,int,int,int,int *,int*) ;

void FUNC_1(uint8_t *VAR_2, uint8_t *VAR_3, ptrdiff_t VAR_4, int16_t *VAR_5,
                                  int VAR_6, int VAR_7, int VAR_8) {
    static uint8_t VAR_9[] = { 1, 2, 0, 3, 4 };
    static const int8_t VAR_10[4][2][2] = {
        { { -1, 0 }, { 1, 0 } },
        { { 0, -1 }, { 0, 1 } },
        { { -1, -1 }, { 1, 1 } },
        { { 1, -1 }, { -1, 1 } },
    };
    uint8_t *VAR_11 = VAR_2;
    uint8_t *VAR_12 = VAR_3;
    int VAR_13, VAR_14;
    ptrdiff_t VAR_15 = (2*VAR_1 + VAR_0);

    VAR_13 = VAR_10[VAR_6][0][0] + VAR_10[VAR_6][0][1] * VAR_15;
    VAR_14 = VAR_10[VAR_6][1][0] + VAR_10[VAR_6][1][1] * VAR_15;

    FUNC_0(VAR_11, VAR_12, VAR_4, VAR_15, VAR_7, VAR_8, VAR_13, VAR_14, VAR_5, VAR_9);
}
