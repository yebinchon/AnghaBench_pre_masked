
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mfxU16 ;
struct TYPE_11__ {int flags; scalar_t__ global_quality; scalar_t__ rc_max_rate; scalar_t__ bit_rate; } ;
struct TYPE_8__ {int RateControlMethod; } ;
struct TYPE_9__ {TYPE_1__ mfx; } ;
struct TYPE_10__ {int look_ahead; int vcm; TYPE_2__ param; } ;
typedef TYPE_3__ QSVEncContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_17, QSVEncContext *VAR_18)
{
    const char *VAR_19;
    mfxU16 VAR_20;

    int VAR_21 = VAR_18->look_ahead;
    int VAR_22 = !!(VAR_17->flags & VAR_0);
    int VAR_23 = VAR_18->vcm;

    if (VAR_21 && !VAR_15) {
        FUNC_1(VAR_17, VAR_1,
               "Lookahead ratecontrol mode requested, but is not supported by this SDK version\n");
        return FUNC_0(VAR_4);
    }
    if (VAR_23 && !VAR_16) {
        FUNC_1(VAR_17, VAR_1,
               "VCM ratecontrol mode requested, but is not supported by this SDK version\n");
        return FUNC_0(VAR_4);
    }

    if (VAR_21 + VAR_22 + VAR_23 > 1) {
        FUNC_1(VAR_17, VAR_1,
               "More than one of: { constant qscale, lookahead, VCM } requested, "
               "only one of them can be used at a time.\n");
        return FUNC_0(VAR_3);
    }

    if (!VAR_22 && VAR_17->global_quality > 0 && !VAR_14){
        FUNC_1(VAR_17, VAR_1,
               "ICQ ratecontrol mode requested, but is not supported by this SDK version\n");
        return FUNC_0(VAR_4);
    }

    if (VAR_22) {
        VAR_20 = VAR_7;
        VAR_19 = "constant quantization parameter (CQP)";
    }
    else if (VAR_17->rc_max_rate == VAR_17->bit_rate) {
        VAR_20 = VAR_6;
        VAR_19 = "constant bitrate (CBR)";
    }
    else {
        VAR_20 = VAR_12;
        VAR_19 = "variable bitrate (VBR)";
    }

    VAR_18->param.mfx.RateControlMethod = VAR_20;
    FUNC_1(VAR_17, VAR_2, "Using the %s ratecontrol method\n", VAR_19);

    return 0;
}
