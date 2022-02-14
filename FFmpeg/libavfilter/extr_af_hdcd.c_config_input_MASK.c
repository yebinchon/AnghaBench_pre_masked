
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int sustain_reset; } ;
struct TYPE_11__ {TYPE_1__* graph; TYPE_2__* priv; } ;
struct TYPE_10__ {scalar_t__ format; int sample_rate; int channels; TYPE_4__* dst; } ;
struct TYPE_9__ {int bits_per_sample; size_t cdt_ms; size_t analyze_mode; scalar_t__ force_pe; scalar_t__ process_stereo; TYPE_5__* state; int detect; } ;
struct TYPE_8__ {scalar_t__ disable_auto_convert; } ;
typedef TYPE_2__ HDCDContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*,int,size_t) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_6) {
    AVFilterContext *VAR_7 = VAR_6->dst;
    HDCDContext *VAR_8 = VAR_7->priv;
    int VAR_9;

    FUNC_1(VAR_7, VAR_0, "Auto-convert: %s\n",
        (VAR_7->graph->disable_auto_convert) ? "disabled" : "enabled");

    if ((VAR_6->format == VAR_2 ||
         VAR_6->format == VAR_3) &&
         VAR_8->bits_per_sample != 16) {
            FUNC_1(VAR_7, VAR_1, "bits_per_sample %d does not fit into sample format %s, falling back to 16\n",
                VAR_8->bits_per_sample, FUNC_0(VAR_6->format) );
        VAR_8->bits_per_sample = 16;
    } else {
        FUNC_1(VAR_7, VAR_0, "Looking for %d-bit HDCD in sample format %s\n",
            VAR_8->bits_per_sample, FUNC_0(VAR_6->format) );
    }

    if (VAR_8->bits_per_sample != 16)
        FUNC_1(VAR_7, VAR_1, "20 and 24-bit HDCD decoding is experimental\n");
    if (VAR_6->sample_rate != 44100)
        FUNC_1(VAR_7, VAR_1, "HDCD decoding for sample rates other than 44100 is experimental\n");

    FUNC_2(&VAR_8->detect);
    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        FUNC_3(&VAR_8->state[VAR_9], VAR_6->sample_rate, VAR_8->cdt_ms);
    }
    FUNC_1(VAR_7, VAR_0, "CDT period: %dms (%u samples @44100Hz)\n",
        VAR_8->cdt_ms, VAR_8->state[0].sustain_reset );

    if (VAR_6->channels != 2 && VAR_8->process_stereo) {
        FUNC_1(VAR_7, VAR_1, "process_stereo disabled (channels = %d)\n", VAR_6->channels);
        VAR_8->process_stereo = 0;
    }
    FUNC_1(VAR_7, VAR_0, "Process mode: %s\n",
        (VAR_8->process_stereo) ? "process stereo channels together" : "process each channel separately");

    FUNC_1(VAR_7, VAR_0, "Force PE: %s\n",
        (VAR_8->force_pe) ? "on" : "off");
    FUNC_1(VAR_7, VAR_0, "Analyze mode: [%d] %s\n",
        VAR_8->analyze_mode, VAR_5[VAR_8->analyze_mode] );

    return 0;
}
