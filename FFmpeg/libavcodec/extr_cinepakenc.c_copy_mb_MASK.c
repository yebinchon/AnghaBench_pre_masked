
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ pix_fmt; } ;
typedef TYPE_1__ CinepakEncContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(CinepakEncContext *VAR_2,
                    uint8_t *VAR_3[4], int VAR_4[4],
                    uint8_t *VAR_5[4], int VAR_6[4])
{
    int VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
        FUNC_0(VAR_3[0] + VAR_7 * VAR_4[0], VAR_5[0] + VAR_7 * VAR_6[0],
               VAR_1);

    if (VAR_2->pix_fmt == VAR_0) {
        for (VAR_8 = 1; VAR_8 <= 2; VAR_8++)
            for (VAR_7 = 0; VAR_7 < VAR_1 / 2; VAR_7++)
                FUNC_0(VAR_3[VAR_8] + VAR_7 * VAR_4[VAR_8],
                       VAR_5[VAR_8] + VAR_7 * VAR_6[VAR_8],
                       VAR_1 / 2);
    }
}
