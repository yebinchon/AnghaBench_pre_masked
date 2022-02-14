
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int size_in_bits; } ;
struct TYPE_14__ {int mb_num; int mb_x; int mb_width; int mb_y; int quant_precision; int chroma_qscale; int qscale; scalar_t__ pict_type; TYPE_3__ gb; int avctx; } ;
struct TYPE_15__ {scalar_t__ shape; int time_increment_bits; scalar_t__ vol_sprite_usage; scalar_t__ new_pred; TYPE_1__ m; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg4DecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int) ;

int FUNC_10(Mpeg4DecContext *VAR_8)
{
    MpegEncContext *VAR_9 = &VAR_8->m;

    int VAR_10 = FUNC_1(VAR_9->mb_num - 1) + 1;
    int VAR_11 = 0, VAR_12, VAR_13;


    if (FUNC_7(&VAR_9->gb) > VAR_9->gb.size_in_bits - 20)
        return VAR_0;

    for (VAR_13 = 0; VAR_13 < 32; VAR_13++)
        if (FUNC_6(&VAR_9->gb))
            break;

    if (VAR_13 != FUNC_4(VAR_9)) {
        FUNC_0(VAR_9->avctx, VAR_1, "marker does not match f_code\n");
        return VAR_0;
    }

    if (VAR_8->shape != VAR_7) {
        VAR_11 = FUNC_6(&VAR_9->gb);

    }

    VAR_12 = FUNC_5(&VAR_9->gb, VAR_10);
    if (VAR_12 >= VAR_9->mb_num || !VAR_12) {
        FUNC_0(VAR_9->avctx, VAR_1,
               "illegal mb_num in video packet (%d %d) \n", VAR_12, VAR_9->mb_num);
        return VAR_0;
    }

    VAR_9->mb_x = VAR_12 % VAR_9->mb_width;
    VAR_9->mb_y = VAR_12 / VAR_9->mb_width;

    if (VAR_8->shape != VAR_5) {
        int VAR_14 = FUNC_5(&VAR_9->gb, VAR_9->quant_precision);
        if (VAR_14)
            VAR_9->chroma_qscale = VAR_9->qscale = VAR_14;
    }

    if (VAR_8->shape == VAR_7)
        VAR_11 = FUNC_6(&VAR_9->gb);

    if (VAR_11) {
        int VAR_15 = 0;

        while (FUNC_6(&VAR_9->gb) != 0)
            VAR_15++;

        FUNC_2(VAR_9->avctx, &VAR_9->gb, "before time_increment in video packed header");
        FUNC_9(&VAR_9->gb, VAR_8->time_increment_bits);
        FUNC_2(VAR_9->avctx, &VAR_9->gb, "before vop_coding_type in video packed header");

        FUNC_9(&VAR_9->gb, 2);


        if (VAR_8->shape != VAR_5) {
            FUNC_9(&VAR_9->gb, 3);

            if (VAR_9->pict_type == VAR_4 &&
                VAR_8->vol_sprite_usage == VAR_6) {
                if (FUNC_8(VAR_8, &VAR_9->gb) < 0)
                    return VAR_0;
                FUNC_0(VAR_9->avctx, VAR_1, "untested\n");
            }



            if (VAR_9->pict_type != VAR_3) {
                int VAR_16 = FUNC_5(&VAR_9->gb, 3);
                if (VAR_16 == 0)
                    FUNC_0(VAR_9->avctx, VAR_1,
                           "Error, video packet header damaged (f_code=0)\n");
            }
            if (VAR_9->pict_type == VAR_2) {
                int VAR_17 = FUNC_5(&VAR_9->gb, 3);
                if (VAR_17 == 0)
                    FUNC_0(VAR_9->avctx, VAR_1,
                           "Error, video packet header damaged (b_code=0)\n");
            }
        }
    }
    if (VAR_8->new_pred)
        FUNC_3(VAR_8, &VAR_9->gb);

    return 0;
}
