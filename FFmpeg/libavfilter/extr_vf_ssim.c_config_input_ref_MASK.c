
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_17__ {int ssim_end_line; int ssim_4x4_line; } ;
struct TYPE_16__ {TYPE_1__** inputs; TYPE_3__* priv; } ;
struct TYPE_15__ {int h; int w; int format; TYPE_6__* dst; } ;
struct TYPE_14__ {int nb_components; TYPE_2__* comp; int log2_chroma_w; int log2_chroma_h; } ;
struct TYPE_13__ {int nb_components; int is_rgb; char* comps; int* planeheight; int* planewidth; double* coefs; int max; TYPE_7__ dsp; int ssim_plane; int temp; int rgba_map; } ;
struct TYPE_12__ {int depth; } ;
struct TYPE_11__ {scalar_t__ w; scalar_t__ h; scalar_t__ format; } ;
typedef TYPE_3__ SSIMContext ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_6__*,int ,char*) ;
 int FUNC_4 (int,int) ;
 TYPE_4__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_7__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_8)
{
    const AVPixFmtDescriptor *VAR_9 = FUNC_5(VAR_8->format);
    AVFilterContext *VAR_10 = VAR_8->dst;
    SSIMContext *VAR_11 = VAR_10->priv;
    int VAR_12 = 0, VAR_13;

    VAR_11->nb_components = VAR_9->nb_components;

    if (VAR_10->inputs[0]->w != VAR_10->inputs[1]->w ||
        VAR_10->inputs[0]->h != VAR_10->inputs[1]->h) {
        FUNC_3(VAR_10, VAR_1, "Width and height of input videos must be same.\n");
        return FUNC_0(VAR_2);
    }
    if (VAR_10->inputs[0]->format != VAR_10->inputs[1]->format) {
        FUNC_3(VAR_10, VAR_1, "Inputs must be of same pixel format.\n");
        return FUNC_0(VAR_2);
    }

    VAR_11->is_rgb = FUNC_6(VAR_11->rgba_map, VAR_8->format) >= 0;
    VAR_11->comps[0] = VAR_11->is_rgb ? 'R' : 'Y';
    VAR_11->comps[1] = VAR_11->is_rgb ? 'G' : 'U';
    VAR_11->comps[2] = VAR_11->is_rgb ? 'B' : 'V';
    VAR_11->comps[3] = 'A';

    VAR_11->planeheight[1] = VAR_11->planeheight[2] = FUNC_1(VAR_8->h, VAR_9->log2_chroma_h);
    VAR_11->planeheight[0] = VAR_11->planeheight[3] = VAR_8->h;
    VAR_11->planewidth[1] = VAR_11->planewidth[2] = FUNC_1(VAR_8->w, VAR_9->log2_chroma_w);
    VAR_11->planewidth[0] = VAR_11->planewidth[3] = VAR_8->w;
    for (VAR_13 = 0; VAR_13 < VAR_11->nb_components; VAR_13++)
        VAR_12 += VAR_11->planeheight[VAR_13] * VAR_11->planewidth[VAR_13];
    for (VAR_13 = 0; VAR_13 < VAR_11->nb_components; VAR_13++)
        VAR_11->coefs[VAR_13] = (double) VAR_11->planeheight[VAR_13] * VAR_11->planewidth[VAR_13] / VAR_12;

    VAR_11->temp = FUNC_4(2 * FUNC_2(VAR_8->w), (VAR_9->comp[0].depth > 8) ? sizeof(int64_t[4]) : sizeof(int[4]));
    if (!VAR_11->temp)
        return FUNC_0(VAR_3);
    VAR_11->max = (1 << VAR_9->comp[0].depth) - 1;

    VAR_11->ssim_plane = VAR_9->comp[0].depth > 8 ? VAR_7 : VAR_6;
    VAR_11->dsp.ssim_4x4_line = VAR_4;
    VAR_11->dsp.ssim_end_line = VAR_5;
    if (VAR_0)
        FUNC_7(&VAR_11->dsp);

    return 0;
}
