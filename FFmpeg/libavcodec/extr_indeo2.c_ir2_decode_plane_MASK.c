
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int gb; } ;
typedef TYPE_1__ Ir2Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(Ir2Context *VAR_2, int VAR_3, int VAR_4, uint8_t *VAR_5,
                            int VAR_6, const uint8_t *VAR_7)
{
    int VAR_8;
    int VAR_9;
    int VAR_10 = 0;

    if ((VAR_3 & 1) || VAR_3 * VAR_4 / (2*(VAR_1 - 0x7F)) > FUNC_1(&VAR_2->gb))
        return VAR_0;


    while (VAR_10 < VAR_3) {
        int VAR_11 = FUNC_2(&VAR_2->gb);
        if (VAR_11 >= 0x80) {
            VAR_11 -= 0x7F;
            if (VAR_10 + VAR_11*2 > VAR_3)
                return VAR_0;
            for (VAR_8 = 0; VAR_8 < VAR_11 * 2; VAR_8++)
                VAR_5[VAR_10++] = 0x80;
        } else {
            if (VAR_11 <= 0)
                return VAR_0;
            VAR_5[VAR_10++] = VAR_7[VAR_11 * 2];
            VAR_5[VAR_10++] = VAR_7[(VAR_11 * 2) + 1];
        }
    }
    VAR_5 += VAR_6;

    for (VAR_9 = 1; VAR_9 < VAR_4; VAR_9++) {
        VAR_10 = 0;
        while (VAR_10 < VAR_3) {
            int VAR_12;
            if (FUNC_1(&VAR_2->gb) <= 0)
                return VAR_0;
            VAR_12 = FUNC_2(&VAR_2->gb);
            if (VAR_12 >= 0x80) {
                VAR_12 -= 0x7F;
                if (VAR_10 + VAR_12*2 > VAR_3)
                    return VAR_0;
                for (VAR_8 = 0; VAR_8 < VAR_12 * 2; VAR_8++) {
                    VAR_5[VAR_10] = VAR_5[VAR_10 - VAR_6];
                    VAR_10++;
                }
            } else {
                int VAR_13;
                if (VAR_12 <= 0)
                    return VAR_0;
                VAR_13 = VAR_5[VAR_10 - VAR_6] + (VAR_7[VAR_12 * 2] - 128);
                VAR_13 = FUNC_0(VAR_13);
                VAR_5[VAR_10] = VAR_13;
                VAR_10++;
                VAR_13 = VAR_5[VAR_10 - VAR_6] + (VAR_7[(VAR_12 * 2) + 1] - 128);
                VAR_13 = FUNC_0(VAR_13);
                VAR_5[VAR_10] = VAR_13;
                VAR_10++;
            }
        }
        VAR_5 += VAR_6;
    }
    return 0;
}
