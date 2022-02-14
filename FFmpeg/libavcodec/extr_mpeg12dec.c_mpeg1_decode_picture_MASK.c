
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int err_recognition; int debug; TYPE_4__* priv_data; } ;
struct TYPE_9__ {TYPE_1__* f; } ;
struct TYPE_10__ {int pict_type; int vbv_delay; int** mpeg_f_code; int y_dc_scale; int c_dc_scale; TYPE_2__ current_picture; int gb; void** full_pel; } ;
struct TYPE_11__ {TYPE_3__ mpeg_enc_ctx; } ;
struct TYPE_8__ {int pict_type; int key_frame; } ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ Mpeg1Context ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int,int,int) ;
 void* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_8, const uint8_t *VAR_9,
                                int VAR_10)
{
    Mpeg1Context *VAR_11 = VAR_8->priv_data;
    MpegEncContext *VAR_12 = &VAR_11->mpeg_enc_ctx;
    int VAR_13, VAR_14, VAR_15;

    FUNC_3(&VAR_12->gb, VAR_9, VAR_10 * 8);

    VAR_13 = FUNC_1(&VAR_12->gb, 10);
    VAR_12->pict_type = FUNC_1(&VAR_12->gb, 3);
    if (VAR_12->pict_type == 0 || VAR_12->pict_type > 3)
        return VAR_0;

    VAR_15 = FUNC_1(&VAR_12->gb, 16);
    VAR_12->vbv_delay = VAR_15;
    if (VAR_12->pict_type == VAR_6 ||
        VAR_12->pict_type == VAR_4) {
        VAR_12->full_pel[0] = FUNC_2(&VAR_12->gb);
        VAR_14 = FUNC_1(&VAR_12->gb, 3);
        if (VAR_14 == 0 && (VAR_8->err_recognition & (VAR_1|VAR_2)))
            return VAR_0;
        VAR_14 += !VAR_14;
        VAR_12->mpeg_f_code[0][0] = VAR_14;
        VAR_12->mpeg_f_code[0][1] = VAR_14;
    }
    if (VAR_12->pict_type == VAR_4) {
        VAR_12->full_pel[1] = FUNC_2(&VAR_12->gb);
        VAR_14 = FUNC_1(&VAR_12->gb, 3);
        if (VAR_14 == 0 && (VAR_8->err_recognition & (VAR_1|VAR_2)))
            return VAR_0;
        VAR_14 += !VAR_14;
        VAR_12->mpeg_f_code[1][0] = VAR_14;
        VAR_12->mpeg_f_code[1][1] = VAR_14;
    }
    VAR_12->current_picture.f->pict_type = VAR_12->pict_type;
    VAR_12->current_picture.f->key_frame = VAR_12->pict_type == VAR_5;

    if (VAR_8->debug & VAR_7)
        FUNC_0(VAR_8, VAR_3,
               "vbv_delay %d, ref %d type:%d\n", VAR_15, VAR_13, VAR_12->pict_type);

    VAR_12->y_dc_scale = 8;
    VAR_12->c_dc_scale = 8;
    return 0;
}
