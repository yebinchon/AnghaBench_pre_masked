
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int gb; } ;
typedef TYPE_1__ Ir2Context ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(Ir2Context *VAR_1, int VAR_2, int VAR_3, uint8_t *VAR_4,
                                  int VAR_5, const uint8_t *VAR_6)
{
    int VAR_7;
    int VAR_8 = 0;
    int VAR_9;
    int VAR_10;

    if (VAR_2 & 1)
        return VAR_0;

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
        VAR_8 = 0;
        while (VAR_8 < VAR_2) {
            if (FUNC_1(&VAR_1->gb) <= 0)
                return VAR_0;
            VAR_9 = FUNC_2(&VAR_1->gb);
            if (VAR_9 >= 0x80) {
                VAR_9 -= 0x7F;
                VAR_8 += VAR_9 * 2;
            } else {
                if (VAR_9 <= 0)
                    return VAR_0;
                VAR_10 = VAR_4[VAR_8] + (((VAR_6[VAR_9 * 2] - 128)*3) >> 2);
                VAR_10 = FUNC_0(VAR_10);
                VAR_4[VAR_8] = VAR_10;
                VAR_8++;
                VAR_10 = VAR_4[VAR_8] + (((VAR_6[(VAR_9 * 2) + 1] - 128)*3) >> 2);
                VAR_10 = FUNC_0(VAR_10);
                VAR_4[VAR_8] = VAR_10;
                VAR_8++;
            }
        }
        VAR_4 += VAR_5;
    }
    return 0;
}
