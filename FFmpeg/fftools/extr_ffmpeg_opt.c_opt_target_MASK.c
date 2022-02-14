
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int int64_t ;
struct TYPE_14__ {long long den; long long num; } ;
struct TYPE_17__ {TYPE_3__ time_base; TYPE_2__* codecpar; } ;
struct TYPE_16__ {int mux_preload; TYPE_4__* g; } ;
struct TYPE_15__ {int format_opts; int codec_opts; } ;
struct TYPE_13__ {scalar_t__ codec_type; } ;
struct TYPE_12__ {TYPE_6__** streams; } ;
struct TYPE_11__ {int nb_streams; TYPE_1__* ctx; } ;
typedef TYPE_5__ OptionsContext ;
typedef TYPE_6__ AVStream ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 TYPE_10__** VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_5__*,char*,char*) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (TYPE_5__*,char*,char*) ;
 int VAR_10 ;
 int FUNC_7 (TYPE_5__*,char*,char const* const,int ) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_10(void *VAR_11, const char *VAR_12, const char *VAR_13)
{
    OptionsContext *VAR_14 = VAR_11;
    enum { PAL, NTSC, FILM, UNKNOWN } VAR_15 = UNKNOWN;
    static const char *const VAR_16[] = { "25", "30000/1001", "24000/1001" };

    if (!FUNC_9(VAR_13, "pal-", 4)) {
        VAR_15 = PAL;
        VAR_13 += 4;
    } else if (!FUNC_9(VAR_13, "ntsc-", 5)) {
        VAR_15 = NTSC;
        VAR_13 += 5;
    } else if (!FUNC_9(VAR_13, "film-", 5)) {
        VAR_15 = FILM;
        VAR_13 += 5;
    } else {

        if (VAR_9) {
            int VAR_17, VAR_18;
            for (VAR_18 = 0; VAR_18 < VAR_9; VAR_18++) {
                for (VAR_17 = 0; VAR_17 < VAR_8[VAR_18]->nb_streams; VAR_17++) {
                    AVStream *VAR_19 = VAR_8[VAR_18]->ctx->streams[VAR_17];
                    int64_t VAR_20;
                    if (VAR_19->codecpar->codec_type != VAR_0)
                        continue;
                    VAR_20 = VAR_19->time_base.den * 1000LL / VAR_19->time_base.num;
                    if (VAR_20 == 25000) {
                        VAR_15 = PAL;
                        break;
                    } else if ((VAR_20 == 29970) || (VAR_20 == 23976)) {
                        VAR_15 = NTSC;
                        break;
                    }
                }
                if (VAR_15 != UNKNOWN)
                    break;
            }
        }
        if (VAR_15 != UNKNOWN)
            FUNC_2(((void*)0), VAR_4, "Assuming %s for target.\n", VAR_15 == PAL ? "PAL" : "NTSC");
    }

    if (VAR_15 == UNKNOWN) {
        FUNC_2(((void*)0), VAR_3, "Could not determine norm (PAL/NTSC/NTSC-Film) for target.\n");
        FUNC_2(((void*)0), VAR_3, "Please prefix target with \"pal-\", \"ntsc-\" or \"film-\",\n");
        FUNC_2(((void*)0), VAR_3, "or set a framerate with \"-r xxx\".\n");
        FUNC_3(1);
    }

    if (!FUNC_8(VAR_13, "vcd")) {
        FUNC_6(VAR_14, "c:v", "mpeg1video");
        FUNC_4(VAR_14, "c:a", "mp2");
        FUNC_7(VAR_14, "f", "vcd", VAR_10);

        FUNC_7(VAR_14, "s", VAR_15 == PAL ? "352x288" : "352x240", VAR_10);
        FUNC_7(VAR_14, "r", VAR_16[VAR_15], VAR_10);
        FUNC_5(((void*)0), "g", VAR_15 == PAL ? "15" : "18");

        FUNC_5(((void*)0), "b:v", "1150000");
        FUNC_5(((void*)0), "maxrate:v", "1150000");
        FUNC_5(((void*)0), "minrate:v", "1150000");
        FUNC_5(((void*)0), "bufsize:v", "327680");

        FUNC_5(((void*)0), "b:a", "224000");
        FUNC_7(VAR_14, "ar", "44100", VAR_10);
        FUNC_7(VAR_14, "ac", "2", VAR_10);

        FUNC_5(((void*)0), "packetsize", "2324");
        FUNC_5(((void*)0), "muxrate", "1411200");






        VAR_14->mux_preload = (36000 + 3 * 1200) / 90000.0;
    } else if (!FUNC_8(VAR_13, "svcd")) {

        FUNC_6(VAR_14, "c:v", "mpeg2video");
        FUNC_4(VAR_14, "c:a", "mp2");
        FUNC_7(VAR_14, "f", "svcd", VAR_10);

        FUNC_7(VAR_14, "s", VAR_15 == PAL ? "480x576" : "480x480", VAR_10);
        FUNC_7(VAR_14, "r", VAR_16[VAR_15], VAR_10);
        FUNC_7(VAR_14, "pix_fmt", "yuv420p", VAR_10);
        FUNC_5(((void*)0), "g", VAR_15 == PAL ? "15" : "18");

        FUNC_5(((void*)0), "b:v", "2040000");
        FUNC_5(((void*)0), "maxrate:v", "2516000");
        FUNC_5(((void*)0), "minrate:v", "0");
        FUNC_5(((void*)0), "bufsize:v", "1835008");
        FUNC_5(((void*)0), "scan_offset", "1");

        FUNC_5(((void*)0), "b:a", "224000");
        FUNC_7(VAR_14, "ar", "44100", VAR_10);

        FUNC_5(((void*)0), "packetsize", "2324");

    } else if (!FUNC_8(VAR_13, "dvd")) {

        FUNC_6(VAR_14, "c:v", "mpeg2video");
        FUNC_4(VAR_14, "c:a", "ac3");
        FUNC_7(VAR_14, "f", "dvd", VAR_10);

        FUNC_7(VAR_14, "s", VAR_15 == PAL ? "720x576" : "720x480", VAR_10);
        FUNC_7(VAR_14, "r", VAR_16[VAR_15], VAR_10);
        FUNC_7(VAR_14, "pix_fmt", "yuv420p", VAR_10);
        FUNC_5(((void*)0), "g", VAR_15 == PAL ? "15" : "18");

        FUNC_5(((void*)0), "b:v", "6000000");
        FUNC_5(((void*)0), "maxrate:v", "9000000");
        FUNC_5(((void*)0), "minrate:v", "0");
        FUNC_5(((void*)0), "bufsize:v", "1835008");

        FUNC_5(((void*)0), "packetsize", "2048");
        FUNC_5(((void*)0), "muxrate", "10080000");

        FUNC_5(((void*)0), "b:a", "448000");
        FUNC_7(VAR_14, "ar", "48000", VAR_10);

    } else if (!FUNC_9(VAR_13, "dv", 2)) {

        FUNC_7(VAR_14, "f", "dv", VAR_10);

        FUNC_7(VAR_14, "s", VAR_15 == PAL ? "720x576" : "720x480", VAR_10);
        FUNC_7(VAR_14, "pix_fmt", !FUNC_9(VAR_13, "dv50", 4) ? "yuv422p" :
                          VAR_15 == PAL ? "yuv420p" : "yuv411p", VAR_10);
        FUNC_7(VAR_14, "r", VAR_16[VAR_15], VAR_10);

        FUNC_7(VAR_14, "ar", "48000", VAR_10);
        FUNC_7(VAR_14, "ac", "2", VAR_10);

    } else {
        FUNC_2(((void*)0), VAR_2, "Unknown target: %s\n", VAR_13);
        return FUNC_0(VAR_5);
    }

    FUNC_1(&VAR_14->g->codec_opts, VAR_6, VAR_1);
    FUNC_1(&VAR_14->g->format_opts, VAR_7, VAR_1);

    return 0;
}
