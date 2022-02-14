
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int pitch; scalar_t__ rotate_code; int gb; scalar_t__ frm0; } ;
typedef TYPE_1__ SANMVideoContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int,int) ;

__attribute__((used)) static int FUNC_5(SANMVideoContext *VAR_1, int VAR_2,
                      int VAR_3, int VAR_4, int VAR_5)
{
    uint8_t *VAR_6 = ((uint8_t *)VAR_1->frm0) + VAR_3 + VAR_2 * VAR_1->pitch;
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        VAR_13 = 0;

        if (FUNC_0(&VAR_1->gb) < 2)
            return VAR_0;

        VAR_9 = FUNC_2(&VAR_1->gb);
        VAR_14 = FUNC_3(&VAR_1->gb) + VAR_9;

        while (FUNC_3(&VAR_1->gb) < VAR_14) {
            if (FUNC_0(&VAR_1->gb) < 2)
                return VAR_0;

            VAR_11 = FUNC_1(&VAR_1->gb);
            VAR_10 = VAR_11 & 1;
            VAR_11 = (VAR_11 >> 1) + 1;
            if (VAR_13 + VAR_11 > VAR_4)
                return VAR_0;
            if (VAR_10) {
                VAR_12 = FUNC_1(&VAR_1->gb);
                if (VAR_12)
                    FUNC_4(VAR_6 + VAR_13, VAR_12, VAR_11);
                VAR_13 += VAR_11;
            } else {
                if (FUNC_0(&VAR_1->gb) < VAR_11)
                    return VAR_0;
                for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
                    VAR_12 = FUNC_1(&VAR_1->gb);
                    if (VAR_12)
                        VAR_6[VAR_13] = VAR_12;
                    VAR_13++;
                }
            }
        }
        VAR_6 += VAR_1->pitch;
    }
    VAR_1->rotate_code = 0;

    return 0;
}
