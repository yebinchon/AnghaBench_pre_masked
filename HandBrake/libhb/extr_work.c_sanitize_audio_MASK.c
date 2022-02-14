
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_22__ {int list_audio; scalar_t__ indepth_scan; } ;
typedef TYPE_8__ hb_job_t ;
struct TYPE_21__ {int codec; int track; int samplerate; int mixdown; float compression_level; float quality; int bitrate; scalar_t__ dither_method; int samples_per_frame; } ;
struct TYPE_19__ {int codec; int samplerate; int channel_layout; int samples_per_frame; } ;
struct TYPE_18__ {int simple; } ;
struct TYPE_20__ {TYPE_7__ out; TYPE_5__ in; TYPE_4__ lang; } ;
struct TYPE_15__ {int language; } ;
struct TYPE_16__ {TYPE_1__ vorbis; } ;
struct TYPE_17__ {TYPE_2__ config; } ;
struct TYPE_23__ {TYPE_6__ config; TYPE_3__ priv; } ;
typedef TYPE_9__ hb_audio_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 float VAR_5 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int) ;
 float FUNC_3 (int,float) ;
 float FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 float FUNC_8 (int,float) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (int ) ;
 TYPE_9__* FUNC_13 (int ,int) ;
 int FUNC_14 (int ,TYPE_9__*) ;
 int FUNC_15 (char*,int,...) ;
 int FUNC_16 (int,int ,int) ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(hb_job_t *VAR_6)
{
    int VAR_7;
    hb_audio_t * VAR_8;

    if (VAR_6->indepth_scan)
    {

        return 0;
    }


    FUNC_11(VAR_6);

    for (VAR_7 = 0; VAR_7 < FUNC_12(VAR_6->list_audio);)
    {
        VAR_8 = FUNC_13(VAR_6->list_audio, VAR_7);
        if (VAR_8->config.out.codec == VAR_0)
        {


            FUNC_15("Auto Passthru error, dropping track %d",
                   VAR_8->config.out.track);
            FUNC_14(VAR_6->list_audio, VAR_8);
            FUNC_0(VAR_8);
            continue;
        }
        if ((VAR_8->config.out.codec & VAR_1) &&
            !(VAR_8->config.in.codec &
              VAR_8->config.out.codec & VAR_2))
        {
            FUNC_15("Passthru requested and input codec is not the same as output codec for track %d, dropping track",
                   VAR_8->config.out.track);
            FUNC_14(VAR_6->list_audio, VAR_8);
            FUNC_0(VAR_8);
            continue;
        }



        VAR_8->config.out.track = ++VAR_7;
    }

    int VAR_9 = 0;
    int VAR_10 = 0;
    int VAR_11 = 0;

    for (VAR_7 = 0; VAR_7 < FUNC_12(VAR_6->list_audio); VAR_7++)
    {
        VAR_8 = FUNC_13(VAR_6->list_audio, VAR_7);


        if (VAR_8->config.out.codec & VAR_1)
        {


            VAR_8->config.out.samples_per_frame =
                                    VAR_8->config.in.samples_per_frame;
            VAR_8->config.out.samplerate = VAR_8->config.in.samplerate;
            continue;
        }


        if (VAR_8->config.out.codec == VAR_3)
            VAR_8->priv.config.vorbis.language = VAR_8->config.lang.simple;


        if (VAR_8->config.out.samplerate <= 0)
        {

            VAR_8->config.out.samplerate = VAR_8->config.in.samplerate;
        }
        VAR_11 =
            FUNC_9(VAR_8->config.out.samplerate,
                                             VAR_8->config.out.codec);
        if (VAR_11 != VAR_8->config.out.samplerate)
        {
            FUNC_15("work: sanitizing track %d unsupported samplerate %d Hz to %s kHz",
                   VAR_8->config.out.track, VAR_8->config.out.samplerate,
                   FUNC_10(VAR_11));
            VAR_8->config.out.samplerate = VAR_11;
        }


        if (VAR_8->config.out.mixdown <= VAR_4)
        {

            VAR_8->config.out.mixdown =
                FUNC_17(VAR_8->config.out.codec,
                                       VAR_8->config.in.channel_layout);
            FUNC_15("work: mixdown not specified, track %d setting mixdown %s",
                   VAR_8->config.out.track,
                   FUNC_18(VAR_8->config.out.mixdown));
        }
        else
        {
            VAR_9 =
                FUNC_16(VAR_8->config.out.codec,
                                    VAR_8->config.in.channel_layout,
                                    VAR_8->config.out.mixdown);
            if (VAR_8->config.out.mixdown != VAR_9)
            {

                FUNC_15("work: sanitizing track %d mixdown %s to %s",
                       VAR_8->config.out.track,
                       FUNC_18(VAR_8->config.out.mixdown),
                       FUNC_18(VAR_9));
                VAR_8->config.out.mixdown = VAR_9;
            }
        }


        if (VAR_8->config.out.compression_level < 0)
        {
            VAR_8->config.out.compression_level =
                FUNC_4(VAR_8->config.out.codec);
            if (VAR_8->config.out.compression_level >= 0)
            {
                FUNC_15("work: compression level not specified, track %d setting compression level %.2f",
                       VAR_8->config.out.track,
                       VAR_8->config.out.compression_level);
            }
        }
        else
        {
            float VAR_12 =
                FUNC_3(VAR_8->config.out.codec,
                                              VAR_8->config.out.compression_level);
            if (VAR_12 != VAR_8->config.out.compression_level)
            {
                if (VAR_12 == -1)
                {
                    FUNC_15("work: track %d, compression level not supported by codec",
                           VAR_8->config.out.track);
                }
                else
                {
                    FUNC_15("work: sanitizing track %d compression level %.2f to %.2f",
                           VAR_8->config.out.track,
                           VAR_8->config.out.compression_level,
                           VAR_12);
                }
                VAR_8->config.out.compression_level = VAR_12;
            }
        }


        if (VAR_8->config.out.quality != VAR_5)
        {
            float VAR_13 =
                FUNC_8(VAR_8->config.out.codec,
                                          VAR_8->config.out.quality);
            if (VAR_13 != VAR_8->config.out.quality)
            {
                if (VAR_13 == VAR_5)
                {
                    FUNC_15("work: track %d, quality mode not supported by codec",
                           VAR_8->config.out.track);
                }
                else
                {
                    FUNC_15("work: sanitizing track %d quality %.2f to %.2f",
                           VAR_8->config.out.track,
                           VAR_8->config.out.quality, VAR_13);
                }
                VAR_8->config.out.quality = VAR_13;
            }
        }


        if (VAR_8->config.out.quality == VAR_5)
        {
            if (VAR_8->config.out.bitrate <= 0)
            {

                VAR_8->config.out.bitrate =
                    FUNC_2(VAR_8->config.out.codec,
                                                 VAR_8->config.out.samplerate,
                                                 VAR_8->config.out.mixdown);
                if (VAR_8->config.out.bitrate > 0)
                {
                    FUNC_15("work: bitrate not specified, track %d setting bitrate %d Kbps",
                           VAR_8->config.out.track,
                           VAR_8->config.out.bitrate);
                }
            }
            else
            {
                VAR_10 =
                    FUNC_1(VAR_8->config.out.codec,
                                              VAR_8->config.out.bitrate,
                                              VAR_8->config.out.samplerate,
                                              VAR_8->config.out.mixdown);
                if (VAR_10 > 0 &&
                    VAR_10 != VAR_8->config.out.bitrate)
                {

                    FUNC_15("work: sanitizing track %d bitrate %d to %d Kbps",
                           VAR_8->config.out.track,
                           VAR_8->config.out.bitrate, VAR_10);
                }
                VAR_8->config.out.bitrate = VAR_10;
            }
        }


        if (FUNC_7(VAR_8->config.out.codec))
        {
            if (VAR_8->config.out.dither_method ==
                FUNC_5())
            {

                VAR_8->config.out.dither_method =
                    FUNC_6();
            }
        }
        else if (VAR_8->config.out.dither_method !=
                 FUNC_5())
        {

            FUNC_15("work: track %d, dithering not supported by codec",
                   VAR_8->config.out.track);
        }
    }
    return 0;
}
