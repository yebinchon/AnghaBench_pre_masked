
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char uint8_t ;
struct TYPE_3__ {int g; int avctx; } ;
typedef TYPE_1__ SgiState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 unsigned char FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned char FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(SgiState *VAR_2, uint8_t *VAR_3,
                           int VAR_4, int VAR_5)
{
    unsigned char VAR_6, VAR_7;
    unsigned char *VAR_8 = VAR_3;
    uint8_t *VAR_9 = VAR_3 + VAR_4;

    while (VAR_3 < VAR_9) {
        if (FUNC_2(&VAR_2->g) < 1)
            return VAR_0;
        VAR_6 = FUNC_3(&VAR_2->g);
        if (!(VAR_7 = (VAR_6 & 0x7f))) {
            break;
        }


        if (VAR_9 - VAR_3 <= VAR_5 * (VAR_7 - 1)) {
            FUNC_0(VAR_2->avctx, VAR_1, "Invalid pixel count.\n");
            return VAR_0;
        }

        if (VAR_6 & 0x80) {
            while (VAR_7--) {
                *VAR_3 = FUNC_1(&VAR_2->g);
                VAR_3 += VAR_5;
            }
        } else {
            VAR_6 = FUNC_1(&VAR_2->g);

            while (VAR_7--) {
                *VAR_3 = VAR_6;
                VAR_3 += VAR_5;
            }
        }
    }
    return (VAR_3 - VAR_8) / VAR_5;
}
