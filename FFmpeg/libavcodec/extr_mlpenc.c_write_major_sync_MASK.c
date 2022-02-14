
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int* coded_sample_fmt; int* coded_sample_rate; int channel_arrangement; int ch_modifier_thd0; int ch_modifier_thd1; int ch_modifier_thd2; int flags; int coded_peak_bitrate; int substream_info; int fs; int wordlength; int channel_occupancy; int summary_info; TYPE_1__* avctx; } ;
struct TYPE_4__ {scalar_t__ codec_id; } ;
typedef int PutBitContext ;
typedef TYPE_2__ MLPEncodeContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static void FUNC_5(MLPEncodeContext *VAR_6, uint8_t *VAR_7, int VAR_8)
{
    PutBitContext VAR_9;

    FUNC_3(&VAR_9, VAR_7, VAR_8);

    FUNC_4(&VAR_9, 24, VAR_3 );

    if (VAR_6->avctx->codec_id == VAR_0) {
        FUNC_4(&VAR_9, 8, VAR_4 );
        FUNC_4(&VAR_9, 4, VAR_6->coded_sample_fmt [0]);
        FUNC_4(&VAR_9, 4, VAR_6->coded_sample_fmt [1]);
        FUNC_4(&VAR_9, 4, VAR_6->coded_sample_rate[0]);
        FUNC_4(&VAR_9, 4, VAR_6->coded_sample_rate[1]);
        FUNC_4(&VAR_9, 4, 0 );
        FUNC_4(&VAR_9, 4, 0 );
        FUNC_4(&VAR_9, 3, 0 );
        FUNC_4(&VAR_9, 5, VAR_6->channel_arrangement );
    } else if (VAR_6->avctx->codec_id == VAR_1) {
        FUNC_4(&VAR_9, 8, VAR_5 );
        FUNC_4(&VAR_9, 4, VAR_6->coded_sample_rate[0]);
        FUNC_4(&VAR_9, 4, 0 );
        FUNC_4(&VAR_9, 2, VAR_6->ch_modifier_thd0 );
        FUNC_4(&VAR_9, 2, VAR_6->ch_modifier_thd1 );
        FUNC_4(&VAR_9, 5, VAR_6->channel_arrangement );
        FUNC_4(&VAR_9, 2, VAR_6->ch_modifier_thd2 );
        FUNC_4(&VAR_9, 13, VAR_6->channel_arrangement );
    }

    FUNC_4(&VAR_9, 16, VAR_2);
    FUNC_4(&VAR_9, 16, VAR_6->flags );
    FUNC_4(&VAR_9, 16, 0 );
    FUNC_4(&VAR_9, 1, 1 );
    FUNC_4(&VAR_9, 15, VAR_6->coded_peak_bitrate );
    FUNC_4(&VAR_9, 4, 1 );
    FUNC_4(&VAR_9, 4, 0x1 );


    FUNC_4(&VAR_9, 8, VAR_6->substream_info );
    FUNC_4(&VAR_9, 5, VAR_6->fs );
    FUNC_4(&VAR_9, 5, VAR_6->wordlength );
    FUNC_4(&VAR_9, 6, VAR_6->channel_occupancy );
    FUNC_4(&VAR_9, 3, 0 );
    FUNC_4(&VAR_9, 10, 0 );
    FUNC_4(&VAR_9, 3, 0 );
    FUNC_4(&VAR_9, 16, 0x8080 );
    FUNC_4(&VAR_9, 7, 0 );
    FUNC_4(&VAR_9, 4, 0 );
    FUNC_4(&VAR_9, 5, VAR_6->summary_info );

    FUNC_2(&VAR_9);

    FUNC_0(VAR_7+26, FUNC_1(VAR_7, 26));
}
