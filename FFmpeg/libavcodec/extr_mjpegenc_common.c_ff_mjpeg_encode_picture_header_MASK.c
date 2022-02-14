
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int luma_intra_matrix ;
struct TYPE_12__ {int codec_id; scalar_t__ pix_fmt; int height; int width; TYPE_1__* codec; TYPE_3__* priv_data; } ;
struct TYPE_11__ {int esc_pos; int slice_context_count; TYPE_2__** thread_context; } ;
struct TYPE_10__ {scalar_t__ esc_pos; } ;
struct TYPE_9__ {int priv_data_size; } ;
typedef int ScanTable ;
typedef int PutBitContext ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int*,int*) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*,int *,int *,int *,int *,int*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(AVCodecContext *VAR_8, PutBitContext *VAR_9,
                                    ScanTable *VAR_10, int VAR_11,
                                    uint16_t VAR_12[64],
                                    uint16_t VAR_13[64])
{
    const int VAR_14 = VAR_8->codec_id != 128 && VAR_8->codec_id != VAR_0;
    int VAR_15[4], VAR_16[4];
    int VAR_17;
    int VAR_18 = 3 + (VAR_8->pix_fmt == VAR_3);
    int VAR_19 = !!FUNC_4(VAR_12,
                                 VAR_13,
                                 sizeof(VAR_12[0])*64);

    FUNC_1(VAR_8, VAR_15, VAR_16);

    FUNC_7(VAR_9, VAR_6);


    if(VAR_8->codec_id == VAR_0) goto end;

    FUNC_2(VAR_8, VAR_9);

    FUNC_3(VAR_8, VAR_9, VAR_10, VAR_12, VAR_13, VAR_15);

    switch (VAR_8->codec_id) {
    case 128: FUNC_7(VAR_9, VAR_4 ); break;
    case 129: FUNC_7(VAR_9, VAR_5 ); break;
    default: FUNC_0(0);
    }

    FUNC_5(VAR_9, 16, 17);
    if (VAR_14 && ( VAR_8->pix_fmt == VAR_1
                    || VAR_8->pix_fmt == VAR_3
                    || VAR_8->pix_fmt == VAR_2))
        FUNC_5(VAR_9, 8, 9);
    else
        FUNC_5(VAR_9, 8, 8);
    FUNC_5(VAR_9, 16, VAR_8->height);
    FUNC_5(VAR_9, 16, VAR_8->width);
    FUNC_5(VAR_9, 8, VAR_18);


    FUNC_5(VAR_9, 8, 1);
    FUNC_5(VAR_9, 4, VAR_15[0]);
    FUNC_5(VAR_9, 4, VAR_16[0]);
    FUNC_5(VAR_9, 8, 0);


    FUNC_5(VAR_9, 8, 2);
    FUNC_5(VAR_9, 4, VAR_15[1]);
    FUNC_5(VAR_9, 4, VAR_16[1]);
    FUNC_5(VAR_9, 8, VAR_14 ? 0 : VAR_19);


    FUNC_5(VAR_9, 8, 3);
    FUNC_5(VAR_9, 4, VAR_15[2]);
    FUNC_5(VAR_9, 4, VAR_16[2]);
    FUNC_5(VAR_9, 8, VAR_14 ? 0 : VAR_19);

    if (VAR_18 == 4) {
        FUNC_5(VAR_9, 8, 4);
        FUNC_5(VAR_9, 4, VAR_15[3]);
        FUNC_5(VAR_9, 4, VAR_16[3]);
        FUNC_5(VAR_9, 8, 0);
    }


    FUNC_7(VAR_9, VAR_7);
    FUNC_5(VAR_9, 16, 6 + 2*VAR_18);
    FUNC_5(VAR_9, 8, VAR_18);


    FUNC_5(VAR_9, 8, 1);
    FUNC_5(VAR_9, 4, 0);
    FUNC_5(VAR_9, 4, 0);


    FUNC_5(VAR_9, 8, 2);
    FUNC_5(VAR_9, 4, 1);
    FUNC_5(VAR_9, 4, VAR_14 ? 0 : 1);


    FUNC_5(VAR_9, 8, 3);
    FUNC_5(VAR_9, 4, 1);
    FUNC_5(VAR_9, 4, VAR_14 ? 0 : 1);

    if (VAR_18 == 4) {

        FUNC_5(VAR_9, 8, 4);
        FUNC_5(VAR_9, 4, 0);
        FUNC_5(VAR_9, 4, 0);
    }

    FUNC_5(VAR_9, 8, VAR_14 ? VAR_11 : 0);

    switch (VAR_8->codec_id) {
    case 128: FUNC_5(VAR_9, 8, 63); break;
    case 129: FUNC_5(VAR_9, 8, 0); break;
    default: FUNC_0(0);
    }

    FUNC_5(VAR_9, 8, 0);

end:
    if (!VAR_14) {
        MpegEncContext *VAR_20 = VAR_8->priv_data;
        FUNC_0(VAR_8->codec->priv_data_size == sizeof(MpegEncContext));

        VAR_20->esc_pos = FUNC_6(VAR_9) >> 3;
        for(VAR_17=1; VAR_17<VAR_20->slice_context_count; VAR_17++)
            VAR_20->thread_context[VAR_17]->esc_pos = 0;
    }
}
