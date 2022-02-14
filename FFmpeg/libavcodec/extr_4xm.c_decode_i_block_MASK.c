
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int table; } ;
struct TYPE_5__ {int last_dc; int avctx; int gb; TYPE_1__ pre_vlc; int pre_gb; } ;
typedef TYPE_2__ FourXContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(FourXContext *VAR_5, int16_t *VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

    if (FUNC_1(&VAR_5->gb) < 2){
        FUNC_0(VAR_5->avctx, VAR_2, "%d bits left before decode_i_block()\n", FUNC_1(&VAR_5->gb));
        return VAR_1;
    }


    VAR_11 = FUNC_2(&VAR_5->pre_gb, VAR_5->pre_vlc.table, VAR_0, 3);
    if (VAR_11 >> 4) {
        FUNC_0(VAR_5->avctx, VAR_2, "error dc run != 0\n");
        return VAR_1;
    }

    if (VAR_11)
        VAR_11 = FUNC_3(&VAR_5->gb, VAR_11);

    VAR_11 = VAR_11 * VAR_3[0] + VAR_5->last_dc;
    VAR_5->last_dc = VAR_6[0] = VAR_11;

    VAR_8 = 1;
    for (;;) {
        VAR_7 = FUNC_2(&VAR_5->pre_gb, VAR_5->pre_vlc.table, VAR_0, 3);


        if (VAR_7 == 0)
            break;
        if (VAR_7 == 0xf0) {
            VAR_8 += 16;
            if (VAR_8 >= 64) {
                FUNC_0(VAR_5->avctx, VAR_2, "run %d overflow\n", VAR_8);
                return 0;
            }
        } else {
            if (VAR_7 & 0xf) {
                VAR_10 = FUNC_3(&VAR_5->gb, VAR_7 & 0xf);
            } else {
                FUNC_0(VAR_5->avctx, VAR_2, "0 coeff\n");
                return VAR_1;
            }
            VAR_8 += VAR_7 >> 4;
            if (VAR_8 >= 64) {
                FUNC_0(VAR_5->avctx, VAR_2, "run %d overflow\n", VAR_8);
                return 0;
            }

            VAR_9 = VAR_4[VAR_8];
            VAR_6[VAR_9] = VAR_10 * VAR_3[VAR_9];
            VAR_8++;
            if (VAR_8 >= 64)
                break;
        }
    }

    return 0;
}
