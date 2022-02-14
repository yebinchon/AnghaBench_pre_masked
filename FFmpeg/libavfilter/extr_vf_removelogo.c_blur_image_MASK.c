
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int y1; int y2; int x1; int x2; } ;
typedef TYPE_1__ FFBoundingBox ;


 int FUNC_0 (scalar_t__*,int,scalar_t__ const*,int,int,int) ;
 scalar_t__ FUNC_1 (int***,scalar_t__ const*,int,scalar_t__*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(int ***VAR_0,
                       const uint8_t *VAR_1, int VAR_2,
                             uint8_t *VAR_3, int VAR_4,
                       const uint8_t *VAR_5, int VAR_6,
                       int VAR_7, int VAR_8, int VAR_9,
                       FFBoundingBox *VAR_10)
{
    int VAR_11, VAR_12;
    uint8_t *VAR_13;
    const uint8_t *VAR_14;

    if (!VAR_9)
        FUNC_0(VAR_3, VAR_4, VAR_1, VAR_2, VAR_7, VAR_8);

    for (VAR_12 = VAR_10->y1; VAR_12 <= VAR_10->y2; VAR_12++) {
        VAR_14 = VAR_1 + VAR_2 * VAR_12;
        VAR_13 = VAR_3 + VAR_4 * VAR_12;

        for (VAR_11 = VAR_10->x1; VAR_11 <= VAR_10->x2; VAR_11++) {
             if (VAR_5[VAR_12 * VAR_6 + VAR_11]) {

                 VAR_13[VAR_11] = FUNC_1(VAR_0,
                                          VAR_5, VAR_6,
                                          VAR_3, VAR_4,
                                          VAR_7, VAR_8, VAR_11, VAR_12);
            } else {

                if (!VAR_9)
                    VAR_13[VAR_11] = VAR_14[VAR_11];
            }
        }
    }
}
