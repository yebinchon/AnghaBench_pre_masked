
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int err_recognition; } ;
struct TYPE_8__ {int frame_size; TYPE_6__* avctx; int gb; int gb_in; scalar_t__ x96_pos; scalar_t__ xxch_pos; scalar_t__ xch_pos; scalar_t__ ext_audio_mask; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_6__*,int ,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(DCACoreDecoder *VAR_4, uint8_t *VAR_5, int VAR_6)
{
    int VAR_7;

    VAR_4->ext_audio_mask = 0;
    VAR_4->xch_pos = VAR_4->xxch_pos = VAR_4->x96_pos = 0;

    if ((VAR_7 = FUNC_3(&VAR_4->gb, VAR_5, VAR_6)) < 0)
        return VAR_7;
    VAR_4->gb_in = VAR_4->gb;

    if ((VAR_7 = FUNC_5(VAR_4)) < 0)
        return VAR_7;
    if ((VAR_7 = FUNC_0(VAR_4)) < 0)
        return VAR_7;
    if ((VAR_7 = FUNC_4(VAR_4, VAR_3, 0)) < 0)
        return VAR_7;
    if ((VAR_7 = FUNC_6(VAR_4)) < 0)
        return VAR_7;


    if (VAR_4->frame_size > VAR_6)
        VAR_4->frame_size = VAR_6;

    if (FUNC_2(&VAR_4->gb, VAR_4->frame_size * 8)) {
        FUNC_1(VAR_4->avctx, VAR_2, "Read past end of core frame\n");
        if (VAR_4->avctx->err_recognition & VAR_1)
            return VAR_0;
    }

    return 0;
}
