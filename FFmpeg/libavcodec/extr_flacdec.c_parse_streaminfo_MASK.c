
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int bps; int channels; } ;
struct TYPE_8__ {int sample_fmt; } ;
struct TYPE_7__ {int got_streaminfo; TYPE_5__ flac_stream_info; TYPE_4__* avctx; int dsp; } ;
typedef TYPE_1__ FLACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*,int const*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int const*,int *,int*,int*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(FLACContext *VAR_3, const uint8_t *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;

    if (VAR_5 < VAR_2+8) {

        return 0;
    }
    FUNC_3(&VAR_4[4], ((void*)0), &VAR_6, &VAR_7);
    if (VAR_6 != VAR_1 ||
        VAR_7 != VAR_2) {
        return VAR_0;
    }
    VAR_8 = FUNC_1(VAR_3->avctx, &VAR_3->flac_stream_info, &VAR_4[8]);
    if (VAR_8 < 0)
        return VAR_8;
    VAR_8 = FUNC_0(VAR_3);
    if (VAR_8 < 0)
        return VAR_8;
    FUNC_4(VAR_3);
    FUNC_2(&VAR_3->dsp, VAR_3->avctx->sample_fmt,
                    VAR_3->flac_stream_info.channels, VAR_3->flac_stream_info.bps);
    VAR_3->got_streaminfo = 1;

    return 0;
}
