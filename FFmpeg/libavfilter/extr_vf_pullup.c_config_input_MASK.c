
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* priv; } ;
struct TYPE_12__ {int h; int w; int format; TYPE_4__* dst; } ;
struct TYPE_11__ {int log2_chroma_w; int log2_chroma_h; } ;
struct TYPE_10__ {int metric_plane; int nb_planes; int* planeheight; int* planewidth; int metric_w; int junk_left; int junk_right; int metric_h; int junk_top; int junk_bottom; int metric_offset; int metric_length; int var; int comb; int diff; int head; } ;
typedef TYPE_1__ PullupContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_8)
{
    AVFilterContext *VAR_9 = VAR_8->dst;
    PullupContext *VAR_10 = VAR_9->priv;
    const AVPixFmtDescriptor *VAR_11 = FUNC_4(VAR_8->format);
    int VAR_12 = VAR_10->metric_plane;

    VAR_10->nb_planes = FUNC_3(VAR_8->format);

    if (VAR_12 + 1 > VAR_10->nb_planes) {
        FUNC_2(VAR_9, VAR_2, "input format does not have such plane\n");
        return FUNC_0(VAR_3);
    }

    VAR_10->planeheight[1] = VAR_10->planeheight[2] = FUNC_1(VAR_8->h, VAR_11->log2_chroma_h);
    VAR_10->planeheight[0] = VAR_10->planeheight[3] = VAR_8->h;
    VAR_10->planewidth[1] = VAR_10->planewidth[2] = FUNC_1(VAR_8->w, VAR_11->log2_chroma_w);
    VAR_10->planewidth[0] = VAR_10->planewidth[3] = VAR_8->w;

    VAR_10->metric_w = (VAR_10->planewidth[VAR_12] - ((VAR_10->junk_left + VAR_10->junk_right) << 3)) >> 3;
    VAR_10->metric_h = (VAR_10->planeheight[VAR_12] - ((VAR_10->junk_top + VAR_10->junk_bottom) << 1)) >> 3;
    VAR_10->metric_offset = (VAR_10->junk_left << 3) + (VAR_10->junk_top << 1) * VAR_10->planewidth[VAR_12];
    VAR_10->metric_length = VAR_10->metric_w * VAR_10->metric_h;

    FUNC_2(VAR_9, VAR_1, "w: %d h: %d\n", VAR_10->metric_w, VAR_10->metric_h);
    FUNC_2(VAR_9, VAR_1, "offset: %d length: %d\n", VAR_10->metric_offset, VAR_10->metric_length);

    VAR_10->head = FUNC_6(VAR_10, 8);
    if (!VAR_10->head)
        return FUNC_0(VAR_4);

    VAR_10->diff = VAR_6;
    VAR_10->comb = VAR_5;
    VAR_10->var = VAR_7;

    if (VAR_0)
        FUNC_5(VAR_10);
    return 0;
}
