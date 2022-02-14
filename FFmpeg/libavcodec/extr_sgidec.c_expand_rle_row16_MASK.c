
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned short uint16_t ;
struct TYPE_3__ {int g; int avctx; } ;
typedef TYPE_1__ SgiState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned short*,unsigned short) ;
 int FUNC_1 (int ,int ,char*) ;
 unsigned short FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned short FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(SgiState *VAR_2, uint16_t *VAR_3,
                            int VAR_4, int VAR_5)
{
    unsigned short VAR_6;
    unsigned char VAR_7;
    unsigned short *VAR_8 = VAR_3;
    uint16_t *VAR_9 = VAR_3 + VAR_4;

    while (VAR_3 < VAR_9) {
        if (FUNC_3(&VAR_2->g) < 2)
            return VAR_0;
        VAR_6 = FUNC_2(&VAR_2->g);
        if (!(VAR_7 = (VAR_6 & 0x7f)))
            break;


        if (VAR_9 - VAR_3 <= VAR_5 * (VAR_7 - 1)) {
            FUNC_1(VAR_2->avctx, VAR_1, "Invalid pixel count.\n");
            return VAR_0;
        }

        if (VAR_6 & 0x80) {
            while (VAR_7--) {
                VAR_6 = FUNC_4(&VAR_2->g);
                FUNC_0(VAR_3, VAR_6);
                VAR_3 += VAR_5;
            }
        } else {
            VAR_6 = FUNC_4(&VAR_2->g);

            while (VAR_7--) {
                FUNC_0(VAR_3, VAR_6);
                VAR_3 += VAR_5;
            }
        }
    }
    return (VAR_3 - VAR_8) / VAR_5;
}
