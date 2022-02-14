
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int settings; int builder; } ;
typedef TYPE_2__ signal_user_data_t ;
typedef int hb_title_t ;
struct TYPE_18__ {int muxers; scalar_t__ codec; } ;
typedef TYPE_3__ hb_encoder_t ;
struct TYPE_19__ {int format; } ;
typedef TYPE_4__ hb_container_t ;
struct TYPE_16__ {int codec; int channel_layout; } ;
struct TYPE_20__ {TYPE_1__ in; } ;
typedef TYPE_5__ hb_audio_config_t ;
typedef int guint32 ;
typedef int gint64 ;
typedef int gint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ,char*) ;
 TYPE_5__* FUNC_2 (int const*,int ) ;
 int FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (char const*) ;
 int * FUNC_5 (int ,int *) ;
 int FUNC_6 (int,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*,scalar_t__,int ) ;
 int FUNC_10 (TYPE_2__*,int ,int ) ;
 int FUNC_11 (TYPE_2__*,TYPE_5__*) ;
 TYPE_3__* FUNC_12 (TYPE_3__ const*) ;
 TYPE_3__* FUNC_13 (TYPE_3__ const*) ;

void
FUNC_14(signal_user_data_t *VAR_3)
{
    gint VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    const hb_title_t *VAR_9;
    hb_audio_config_t *VAR_10 = ((void*)0);

    VAR_5 = FUNC_0(VAR_3->settings, "title");
    VAR_9 = FUNC_5(VAR_5, &VAR_6);

    VAR_4 = FUNC_0(VAR_3->settings, "AudioTrack");
    VAR_10 = FUNC_2(VAR_9, VAR_4);

    const char *VAR_11;
    const hb_container_t *VAR_12;

    VAR_11 = FUNC_1(VAR_3->settings, "FileFormat");
    VAR_12 = FUNC_4(VAR_11);

    const hb_encoder_t *VAR_13;
    for (VAR_13 = FUNC_12(((void*)0)); VAR_13 != ((void*)0);
         VAR_13 = FUNC_12(VAR_13))
    {
        if (!(VAR_12->format & VAR_13->muxers) && VAR_13->codec != VAR_1)
        {
            FUNC_9(VAR_3->builder, "AudioEncoder",
                VAR_13->codec, VAR_2);
            FUNC_9(VAR_3->builder, "AudioEncoderFallback",
                VAR_13->codec, VAR_2);
        }
        else
        {
            FUNC_9(VAR_3->builder, "AudioEncoder",
                VAR_13->codec, VAR_0);
            FUNC_9(VAR_3->builder, "AudioEncoderFallback",
                VAR_13->codec, VAR_0);
        }
    }
    for (VAR_13 = FUNC_13(((void*)0)); VAR_13 != ((void*)0);
         VAR_13 = FUNC_13(VAR_13))
    {
        if (!(VAR_12->format & VAR_13->muxers))
        {
            FUNC_9(VAR_3->builder, "VideoEncoder",
                VAR_13->codec, VAR_2);
        }
        else
        {
            FUNC_9(VAR_3->builder, "VideoEncoder",
                VAR_13->codec, VAR_0);
        }
    }
    FUNC_11(VAR_3, VAR_10);

    VAR_7 = FUNC_8(VAR_3->settings, "AudioEncoder");

    gint64 VAR_14 = VAR_10 != ((void*)0) ? VAR_10->in.channel_layout : ~0;
    guint32 VAR_15 = VAR_10 != ((void*)0) ? VAR_10->in.codec : 0;
    VAR_8 = FUNC_7(VAR_3->settings, VAR_7);
    gint VAR_16 = FUNC_3(VAR_3->settings);
    VAR_7 = FUNC_6(VAR_12->format, VAR_15, VAR_7,
                                    VAR_8, VAR_16);
    FUNC_10(VAR_3, VAR_7, VAR_14);
}
