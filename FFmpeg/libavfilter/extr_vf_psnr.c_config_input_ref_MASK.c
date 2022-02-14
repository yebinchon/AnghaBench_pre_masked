
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


struct TYPE_17__ {int sse_line; } ;
struct TYPE_16__ {TYPE_1__** inputs; TYPE_3__* priv; } ;
struct TYPE_15__ {unsigned int h; unsigned int w; int format; TYPE_6__* dst; } ;
struct TYPE_14__ {int nb_components; TYPE_2__* comp; int log2_chroma_w; int log2_chroma_h; } ;
struct TYPE_13__ {int nb_components; int* max; int is_rgb; char* comps; unsigned int* planeheight; unsigned int* planewidth; double* planeweight; TYPE_7__ dsp; int average_max; int rgba_map; } ;
struct TYPE_12__ {int depth; } ;
struct TYPE_11__ {scalar_t__ w; scalar_t__ h; scalar_t__ format; } ;
typedef TYPE_3__ PSNRContext ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_6__*,int ,char*) ;
 TYPE_4__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_7__*,int) ;
 int FUNC_6 (double) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_5)
{
    const AVPixFmtDescriptor *VAR_6 = FUNC_3(VAR_5->format);
    AVFilterContext *VAR_7 = VAR_5->dst;
    PSNRContext *VAR_8 = VAR_7->priv;
    double VAR_9;
    unsigned VAR_10;
    int VAR_11;

    VAR_8->nb_components = VAR_6->nb_components;
    if (VAR_7->inputs[0]->w != VAR_7->inputs[1]->w ||
        VAR_7->inputs[0]->h != VAR_7->inputs[1]->h) {
        FUNC_2(VAR_7, VAR_1, "Width and height of input videos must be same.\n");
        return FUNC_0(VAR_2);
    }
    if (VAR_7->inputs[0]->format != VAR_7->inputs[1]->format) {
        FUNC_2(VAR_7, VAR_1, "Inputs must be of same pixel format.\n");
        return FUNC_0(VAR_2);
    }

    VAR_8->max[0] = (1 << VAR_6->comp[0].depth) - 1;
    VAR_8->max[1] = (1 << VAR_6->comp[1].depth) - 1;
    VAR_8->max[2] = (1 << VAR_6->comp[2].depth) - 1;
    VAR_8->max[3] = (1 << VAR_6->comp[3].depth) - 1;

    VAR_8->is_rgb = FUNC_4(VAR_8->rgba_map, VAR_5->format) >= 0;
    VAR_8->comps[0] = VAR_8->is_rgb ? 'r' : 'y' ;
    VAR_8->comps[1] = VAR_8->is_rgb ? 'g' : 'u' ;
    VAR_8->comps[2] = VAR_8->is_rgb ? 'b' : 'v' ;
    VAR_8->comps[3] = 'a';

    VAR_8->planeheight[1] = VAR_8->planeheight[2] = FUNC_1(VAR_5->h, VAR_6->log2_chroma_h);
    VAR_8->planeheight[0] = VAR_8->planeheight[3] = VAR_5->h;
    VAR_8->planewidth[1] = VAR_8->planewidth[2] = FUNC_1(VAR_5->w, VAR_6->log2_chroma_w);
    VAR_8->planewidth[0] = VAR_8->planewidth[3] = VAR_5->w;
    VAR_10 = 0;
    for (VAR_11 = 0; VAR_11 < VAR_8->nb_components; VAR_11++)
        VAR_10 += VAR_8->planeheight[VAR_11] * VAR_8->planewidth[VAR_11];
    VAR_9 = 0;
    for (VAR_11 = 0; VAR_11 < VAR_8->nb_components; VAR_11++) {
        VAR_8->planeweight[VAR_11] = (double) VAR_8->planeheight[VAR_11] * VAR_8->planewidth[VAR_11] / VAR_10;
        VAR_9 += VAR_8->max[VAR_11] * VAR_8->planeweight[VAR_11];
    }
    VAR_8->average_max = FUNC_6(VAR_9);

    VAR_8->dsp.sse_line = VAR_6->comp[0].depth > 8 ? VAR_3 : VAR_4;
    if (VAR_0)
        FUNC_5(&VAR_8->dsp, VAR_6->comp[0].depth);

    return 0;
}
