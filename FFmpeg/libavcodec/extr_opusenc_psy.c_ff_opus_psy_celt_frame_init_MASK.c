
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int start_band; int size; int silence; int transient; int blocks; float pf_gain; int pf_octave; int pf_period; int pf_tapset; int anticollapse; int alloc_trim; int alloc_boost; int tf_change; int spread; scalar_t__ dual_stereo; int end_band; int intensity_stereo; int skip_band_floor; scalar_t__ tf_select; scalar_t__ pfilter; scalar_t__ framebits; int channels; } ;
struct TYPE_10__ {int framesize; scalar_t__ mode; size_t bandwidth; } ;
struct TYPE_11__ {int inflection_points_count; int* inflection_points; TYPE_3__ p; TYPE_2__** steps; TYPE_1__* avctx; } ;
struct TYPE_9__ {int silence; } ;
struct TYPE_8__ {int channels; } ;
typedef TYPE_4__ OpusPsyContext ;
typedef TYPE_5__ CeltFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(OpusPsyContext *VAR_5, CeltFrame *VAR_6, int VAR_7)
{
    int VAR_8, VAR_9 = 0, VAR_10 = 0;
    int VAR_11 = (1 << VAR_5->p.framesize), VAR_12 = VAR_11*VAR_7;
    int VAR_13 = 1;

    VAR_6->start_band = (VAR_5->p.mode == VAR_3) ? 17 : 0;
    VAR_6->end_band = VAR_4[VAR_5->p.bandwidth];
    VAR_6->channels = VAR_5->avctx->channels;
    VAR_6->size = VAR_5->p.framesize;

    for (VAR_8 = 0; VAR_8 < (1 << VAR_6->size); VAR_8++)
        VAR_13 &= VAR_5->steps[VAR_7*(1 << VAR_6->size) + VAR_8]->silence;

    VAR_6->silence = VAR_13;
    if (VAR_6->silence) {
        VAR_6->framebits = 0;
        return;
    }

    for (VAR_8 = 0; VAR_8 < VAR_5->inflection_points_count; VAR_8++) {
        if (VAR_5->inflection_points[VAR_8] >= VAR_12) {
            VAR_10 = VAR_8;
            break;
        }
    }

    for (VAR_8 = VAR_10; VAR_8 < FUNC_0(VAR_11, VAR_5->inflection_points_count - VAR_10); VAR_8++) {
        if (VAR_5->inflection_points[VAR_8] < (VAR_12 + VAR_11)) {
            VAR_9++;
        }
    }


    VAR_6->transient = VAR_9 > 0;
    VAR_6->blocks = VAR_6->transient ? FUNC_1(VAR_5->p.framesize)/VAR_1 : 1;


    VAR_6->pfilter = 0;
    VAR_6->pf_gain = 0.5f;
    VAR_6->pf_octave = 2;
    VAR_6->pf_period = 1;
    VAR_6->pf_tapset = 2;


    VAR_6->tf_select = 0;
    VAR_6->anticollapse = 1;
    VAR_6->alloc_trim = 5;
    VAR_6->skip_band_floor = VAR_6->end_band;
    VAR_6->intensity_stereo = VAR_6->end_band;
    VAR_6->dual_stereo = 0;
    VAR_6->spread = VAR_2;
    FUNC_2(VAR_6->tf_change, 0, sizeof(int)*VAR_0);
    FUNC_2(VAR_6->alloc_boost, 0, sizeof(int)*VAR_0);
}
