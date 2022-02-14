
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {scalar_t__ length; int bytes; } ;
struct TYPE_19__ {TYPE_4__ extradata; } ;
struct TYPE_20__ {TYPE_5__ config; } ;
struct TYPE_16__ {int samplerate; } ;
struct TYPE_17__ {TYPE_2__ out; } ;
struct TYPE_21__ {TYPE_6__ priv; TYPE_3__ config; } ;
typedef TYPE_7__ hb_audio_t ;
struct TYPE_15__ {int num; int den; } ;
struct TYPE_22__ {int par_in; TYPE_1__ time_base_in; } ;
typedef int AVPacket ;
typedef int AVCodecContext ;
typedef int AVBitStreamFilter ;
typedef TYPE_8__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int const*,TYPE_8__**) ;
 int FUNC_3 (TYPE_8__**) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*,int *) ;
 int FUNC_7 (TYPE_8__*,int *) ;
 int * FUNC_8 (int *,int ,int*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_12( hb_audio_t * VAR_5, AVCodecContext * VAR_6,
                                 AVPacket * VAR_7 )
{
    const AVBitStreamFilter * VAR_8;
    AVBSFContext * VAR_9 = ((void*)0);
    int VAR_10;

    VAR_8 = FUNC_4("aac_adtstoasc");
    VAR_10 = FUNC_2(VAR_8, &VAR_9);
    if (VAR_10 < 0)
    {
        FUNC_10("decavcodec: bitstream filter alloc failure");
        return VAR_10;
    }
    VAR_9->time_base_in.num = 1;
    VAR_9->time_base_in.den = VAR_5->config.out.samplerate;
    FUNC_9(VAR_9->par_in, VAR_6);
    VAR_10 = FUNC_5(VAR_9);
    if (VAR_10 < 0)
    {
        FUNC_10("decavcodec: bitstream filter init failure");
        FUNC_3(&VAR_9);
        return VAR_10;
    }

    VAR_10 = FUNC_7(VAR_9, VAR_7);
    if (VAR_10 < 0)
    {
        FUNC_10("decavcodec: av_bsf_send_packet failure");
        FUNC_3(&VAR_9);
        return VAR_10;
    }

    VAR_10 = FUNC_6(VAR_9, VAR_7);
    FUNC_3(&VAR_9);
    if (VAR_10 == FUNC_0(VAR_3) || VAR_10 == VAR_0)
    {
        return 0;
    }
    else if (VAR_10 < 0)
    {
        if (VAR_10 != VAR_1)
        {
            FUNC_10("decavcodec: av_bsf_receive_packet failure %x", -VAR_10);
        }
        return VAR_10;
    }

    if (VAR_5->priv.config.extradata.length == 0)
    {
        const uint8_t * VAR_11;
        int VAR_12;

        VAR_11 = FUNC_8(VAR_7, VAR_2,
                                            &VAR_12);
        if (VAR_11 != ((void*)0) && VAR_12 > 0)
        {
            int VAR_13;
            VAR_13 = FUNC_1(VAR_12, VAR_4);
            FUNC_11(VAR_5->priv.config.extradata.bytes, VAR_11, VAR_13);
            VAR_5->priv.config.extradata.length = VAR_13;
        }
    }

    return 0;
}
