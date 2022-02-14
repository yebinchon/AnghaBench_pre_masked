
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ pix_fmt; } ;
typedef TYPE_1__ CinepakEncContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(CinepakEncContext *VAR_1, int VAR_2, int VAR_3,
                            uint8_t * VAR_4[4], int VAR_5[4],
                            uint8_t *VAR_6[4], int VAR_7[4])
{
    VAR_6[0] = VAR_4[0] + VAR_2 + VAR_3 * VAR_5[0];
    VAR_7[0] = VAR_5[0];

    if (VAR_1->pix_fmt == VAR_0) {
        VAR_6[1] = VAR_4[1] + (VAR_2 >> 1) + (VAR_3 >> 1) * VAR_5[1];
        VAR_7[1] = VAR_5[1];

        VAR_6[2] = VAR_4[2] + (VAR_2 >> 1) + (VAR_3 >> 1) * VAR_5[2];
        VAR_7[2] = VAR_5[2];
    }
}
