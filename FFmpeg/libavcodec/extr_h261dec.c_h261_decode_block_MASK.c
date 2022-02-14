
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_7__ {int* permutated; } ;
struct TYPE_9__ {int* block_last_index; int gb; int mb_y; int mb_x; int avctx; scalar_t__ mb_intra; TYPE_1__ intra_scantable; } ;
struct TYPE_10__ {TYPE_3__ s; } ;
struct TYPE_8__ {int * rl_vlc; } ;
typedef TYPE_2__ RLTable ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ H261Context ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int *,int) ;
 int VAR_1 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,char*,int,int ,...) ;
 TYPE_2__ VAR_2 ;
 int FUNC_9 (int *,int) ;
 int VAR_3 ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12(H261Context *VAR_4, int16_t *VAR_5, int VAR_6, int VAR_7)
{
    MpegEncContext *const VAR_8 = &VAR_4->s;
    int VAR_9, VAR_10, VAR_11, VAR_12;
    RLTable *VAR_13 = &VAR_2;
    const uint8_t *VAR_14;







    VAR_14 = VAR_8->intra_scantable.permutated;
    if (VAR_8->mb_intra) {

        VAR_9 = FUNC_9(&VAR_8->gb, 8);

        if ((VAR_9 & 0x7F) == 0) {
            FUNC_8(VAR_8->avctx, VAR_0, "illegal dc %d at %d %d\n",
                   VAR_9, VAR_8->mb_x, VAR_8->mb_y);
            return -1;
        }


        if (VAR_9 == 255)
            VAR_9 = 128;
        VAR_5[0] = VAR_9;
        VAR_10 = 1;
    } else if (VAR_7) {




        int VAR_15 = FUNC_10(&VAR_8->gb, 2);
        VAR_10 = 0;
        if (VAR_15 & 0x2) {
            FUNC_11(&VAR_8->gb, 2);
            VAR_5[0] = (VAR_15 & 0x1) ? -1 : 1;
            VAR_10 = 1;
        }
    } else {
        VAR_10 = 0;
    }
    if (!VAR_7) {
        VAR_8->block_last_index[VAR_6] = VAR_10 - 1;
        return 0;
    }
    {
    FUNC_2(VAR_3, &VAR_8->gb);
    VAR_10--;
    for (;;) {
        FUNC_7(VAR_3, &VAR_8->gb);
        FUNC_1(VAR_9, VAR_12, VAR_3, &VAR_8->gb, VAR_13->rl_vlc[0], VAR_1, 2, 0);
        if (VAR_12 == 66) {
            if (VAR_9) {
                FUNC_0(VAR_3, &VAR_8->gb);
                FUNC_8(VAR_8->avctx, VAR_0, "illegal ac vlc code at %dx%d\n",
                       VAR_8->mb_x, VAR_8->mb_y);
                return -1;
            }




            VAR_12 = FUNC_4(VAR_3, &VAR_8->gb, 6) + 1;
            FUNC_5(VAR_3, &VAR_8->gb, 6);
            VAR_9 = FUNC_3(VAR_3, &VAR_8->gb, 8);
            FUNC_6(VAR_3, &VAR_8->gb, 6 + 8);
        } else if (VAR_9 == 0) {
            break;
        } else {
            if (FUNC_4(VAR_3, &VAR_8->gb, 1))
                VAR_9 = -VAR_9;
            FUNC_6(VAR_3, &VAR_8->gb, 1);
        }
        VAR_10 += VAR_12;
        if (VAR_10 >= 64) {
            FUNC_0(VAR_3, &VAR_8->gb);
            FUNC_8(VAR_8->avctx, VAR_0, "run overflow at %dx%d\n",
                   VAR_8->mb_x, VAR_8->mb_y);
            return -1;
        }
        VAR_11 = VAR_14[VAR_10];
        VAR_5[VAR_11] = VAR_9;
    }
    FUNC_0(VAR_3, &VAR_8->gb);
    }
    VAR_8->block_last_index[VAR_6] = VAR_10;
    return 0;
}
