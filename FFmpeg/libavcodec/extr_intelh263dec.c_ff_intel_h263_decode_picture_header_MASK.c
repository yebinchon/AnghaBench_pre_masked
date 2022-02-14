
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int num; int den; } ;
struct TYPE_9__ {TYPE_4__ sample_aspect_ratio; int lowres; } ;
struct TYPE_7__ {int picture_number; int h263_long_vectors; int obmc; int unrestricted_mv; int pb_frame; int loop_filter; int chroma_qscale; int qscale; int f_code; int c_dc_scale_table; int y_dc_scale_table; int gb; TYPE_5__* avctx; void* height; void* width; scalar_t__ pict_type; scalar_t__ h263_plus; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ,char*) ;
 int FUNC_1 (TYPE_5__*,int *,char*) ;
 void*** VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;

int FUNC_10(MpegEncContext *VAR_7)
{
    int VAR_8;

    if (FUNC_5(&VAR_7->gb) == 64) {
        return VAR_3;
    }


    if (FUNC_6(&VAR_7->gb, 22) != 0x20) {
        FUNC_0(VAR_7->avctx, VAR_1, "Bad picture start code\n");
        return -1;
    }
    VAR_7->picture_number = FUNC_3(&VAR_7->gb, 8);

    if (FUNC_1(VAR_7->avctx, &VAR_7->gb, "after picture_number") != 1) {
        return -1;
    }
    if (FUNC_4(&VAR_7->gb) != 0) {
        FUNC_0(VAR_7->avctx, VAR_1, "Bad H.263 id\n");
        return -1;
    }
    FUNC_9(&VAR_7->gb);
    FUNC_9(&VAR_7->gb);
    FUNC_9(&VAR_7->gb);

    VAR_8 = FUNC_3(&VAR_7->gb, 3);
    if (VAR_8 == 0 || VAR_8 == 6) {
        FUNC_0(VAR_7->avctx, VAR_1, "Intel H.263 free format not supported\n");
        return -1;
    }
    VAR_7->h263_plus = 0;

    VAR_7->pict_type = VAR_2 + FUNC_4(&VAR_7->gb);

    VAR_7->h263_long_vectors = FUNC_4(&VAR_7->gb);

    if (FUNC_4(&VAR_7->gb) != 0) {
        FUNC_0(VAR_7->avctx, VAR_1, "SAC not supported\n");
        return -1;
    }
    VAR_7->obmc= FUNC_4(&VAR_7->gb);
    VAR_7->unrestricted_mv = VAR_7->obmc || VAR_7->h263_long_vectors;
    VAR_7->pb_frame = FUNC_4(&VAR_7->gb);

    if (VAR_8 < 6) {
        VAR_7->width = VAR_4[VAR_8][0];
        VAR_7->height = VAR_4[VAR_8][1];
        VAR_7->avctx->sample_aspect_ratio.num = 12;
        VAR_7->avctx->sample_aspect_ratio.den = 11;
    } else {
        VAR_8 = FUNC_3(&VAR_7->gb, 3);
        if(VAR_8 == 0 || VAR_8 == 7){
            FUNC_0(VAR_7->avctx, VAR_1, "Wrong Intel H.263 format\n");
            return -1;
        }
        if(FUNC_3(&VAR_7->gb, 2))
            FUNC_0(VAR_7->avctx, VAR_1, "Bad value for reserved field\n");
        VAR_7->loop_filter = FUNC_4(&VAR_7->gb) * !VAR_7->avctx->lowres;
        if(FUNC_4(&VAR_7->gb))
            FUNC_0(VAR_7->avctx, VAR_1, "Bad value for reserved field\n");
        if(FUNC_4(&VAR_7->gb))
            VAR_7->pb_frame = 2;
        if(FUNC_3(&VAR_7->gb, 5))
            FUNC_0(VAR_7->avctx, VAR_1, "Bad value for reserved field\n");
        if(FUNC_3(&VAR_7->gb, 5) != 1)
            FUNC_0(VAR_7->avctx, VAR_1, "Invalid marker\n");
    }
    if(VAR_8 == 6){
        int VAR_9 = FUNC_3(&VAR_7->gb, 4);
        FUNC_8(&VAR_7->gb, 9);
        FUNC_1(VAR_7->avctx, &VAR_7->gb, "in dimensions");
        FUNC_8(&VAR_7->gb, 9);
        if(VAR_9 == 15){
            VAR_7->avctx->sample_aspect_ratio.num = FUNC_3(&VAR_7->gb, 8);
            VAR_7->avctx->sample_aspect_ratio.den = FUNC_3(&VAR_7->gb, 8);
        } else {
            VAR_7->avctx->sample_aspect_ratio = VAR_5[VAR_9];
        }
        if (VAR_7->avctx->sample_aspect_ratio.num == 0)
            FUNC_0(VAR_7->avctx, VAR_1, "Invalid aspect ratio.\n");
    }

    VAR_7->chroma_qscale= VAR_7->qscale = FUNC_3(&VAR_7->gb, 5);
    FUNC_9(&VAR_7->gb);

    if(VAR_7->pb_frame){
        FUNC_8(&VAR_7->gb, 3);
        FUNC_8(&VAR_7->gb, 2);
    }


    if (FUNC_7(&VAR_7->gb) < 0)
        return VAR_0;
    VAR_7->f_code = 1;

    VAR_7->y_dc_scale_table=
    VAR_7->c_dc_scale_table= VAR_6;

    FUNC_2(VAR_7);

    return 0;
}
