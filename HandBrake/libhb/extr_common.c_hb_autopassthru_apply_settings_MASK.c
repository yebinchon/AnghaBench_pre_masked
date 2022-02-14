
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int list_audio; int mux; int acodec_fallback; int acodec_copy_mask; } ;
typedef TYPE_4__ hb_job_t ;
struct TYPE_18__ {int codec; int name; } ;
typedef TYPE_5__ hb_encoder_t ;
struct TYPE_15__ {int codec; int track; scalar_t__ mixdown; scalar_t__ samplerate; scalar_t__ bitrate; scalar_t__ quality; scalar_t__ compression_level; } ;
struct TYPE_14__ {scalar_t__ samplerate; int channel_layout; int codec; } ;
struct TYPE_16__ {TYPE_2__ out; TYPE_1__ in; } ;
struct TYPE_19__ {TYPE_3__ config; } ;
typedef TYPE_6__ hb_audio_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_6__**) ;
 scalar_t__ FUNC_3 (int,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_5__* FUNC_5 (TYPE_5__ const*) ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ) ;
 TYPE_6__* FUNC_12 (int ,int) ;
 int FUNC_13 (int ,TYPE_6__*) ;
 int FUNC_14 (char*,int,...) ;
 scalar_t__ FUNC_15 (int,int ,scalar_t__) ;
 scalar_t__ FUNC_16 (int,int ) ;

void FUNC_17(hb_job_t *VAR_5)
{
    hb_audio_t *VAR_6;
    int VAR_7, VAR_8;
    for (VAR_7 = VAR_8 = 0; VAR_7 < FUNC_11(VAR_5->list_audio);)
    {
        VAR_6 = FUNC_12(VAR_5->list_audio, VAR_7);
        if (VAR_6->config.out.codec == VAR_0)
        {
            if (!VAR_8)
                FUNC_10(VAR_5);
            VAR_8 = 1;
            VAR_6->config.out.codec = FUNC_9(VAR_6->config.in.codec,
                                                                  VAR_5->acodec_copy_mask,
                                                                  VAR_5->acodec_fallback,
                                                                  VAR_5->mux);
            if (VAR_6->config.out.codec == VAR_2 ||
                VAR_6->config.out.codec == VAR_1)
            {
                FUNC_14("Auto Passthru: passthru not possible and no valid fallback specified, dropping track %d",
                       VAR_6->config.out.track );
                FUNC_13(VAR_5->list_audio, VAR_6);
                FUNC_2(&VAR_6);
                continue;
            }
            if (!(VAR_6->config.out.codec & VAR_3))
            {
                FUNC_14("Auto Passthru: passthru not possible for track %d, using fallback",
                       VAR_6->config.out.track);
                if (VAR_6->config.out.mixdown <= 0)
                {
                    VAR_6->config.out.mixdown =
                        FUNC_16(VAR_6->config.out.codec,
                                               VAR_6->config.in.channel_layout);
                }
                else
                {
                    VAR_6->config.out.mixdown =
                        FUNC_15(VAR_6->config.out.codec,
                                            VAR_6->config.in.channel_layout,
                                            VAR_6->config.out.mixdown);
                }
                if (VAR_6->config.out.samplerate <= 0)
                    VAR_6->config.out.samplerate = VAR_6->config.in.samplerate;
                VAR_6->config.out.samplerate =
                    FUNC_8(
                        VAR_6->config.out.samplerate, VAR_6->config.out.codec);
                int VAR_9 =
                    FUNC_7(VAR_6->config.out.codec)
                            == VAR_4;
                if (VAR_6->config.out.bitrate > 0)
                {

                    VAR_6->config.out.bitrate =
                        FUNC_0(VAR_6->config.out.codec,
                                                  VAR_6->config.out.bitrate,
                                                  VAR_6->config.out.samplerate,
                                                  VAR_6->config.out.mixdown);
                }
                else if (VAR_9 ||
                         VAR_6->config.out.quality != VAR_4)
                {

                    VAR_6->config.out.bitrate =
                        FUNC_1(VAR_6->config.out.codec,
                                                 VAR_6->config.out.samplerate,
                                                 VAR_6->config.out.mixdown);
                }
                else
                {

                    VAR_6->config.out.quality =
                        FUNC_6(VAR_6->config.out.codec,
                                                  VAR_6->config.out.quality);
                }
                if (VAR_6->config.out.compression_level < 0)
                {
                    VAR_6->config.out.compression_level =
                        FUNC_4(
                                        VAR_6->config.out.codec);
                }
                else
                {
                    VAR_6->config.out.compression_level =
                        FUNC_3(VAR_6->config.out.codec,
                                        VAR_6->config.out.compression_level);
                }
            }
            else
            {
                const hb_encoder_t *VAR_10 = ((void*)0);
                while ((VAR_10 = FUNC_5(VAR_10)) != ((void*)0))
                {
                    if (VAR_10->codec == VAR_6->config.out.codec)
                    {
                        FUNC_14("Auto Passthru: using %s for track %d",
                               VAR_10->name,
                               VAR_6->config.out.track);
                        break;
                    }
                }
            }
        }



        VAR_6->config.out.track = ++VAR_7;
    }
}
