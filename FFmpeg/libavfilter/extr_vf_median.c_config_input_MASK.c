
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* priv; } ;
struct TYPE_12__ {int w; int h; TYPE_5__* dst; int format; } ;
struct TYPE_11__ {int log2_chroma_h; int log2_chroma_w; TYPE_1__* comp; } ;
struct TYPE_10__ {int depth; int* planewidth; int* planeheight; int radiusV; int radius; int nb_planes; int t; int planes; int nb_threads; int bins; int fine_size; int coarse_size; int filter_plane; int hmuladd; int hsub; int hadd; void** fine; void** coarse; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_2__ MedianContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_5__*,int ,char*,int,int,int) ;
 void* FUNC_6 (int,int) ;
 int FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_12)
{
    const AVPixFmtDescriptor *VAR_13 = FUNC_8(VAR_12->format);
    MedianContext *VAR_14 = VAR_12->dst->priv;

    VAR_14->depth = VAR_13->comp[0].depth;
    VAR_14->planewidth[1] = VAR_14->planewidth[2] = FUNC_1(VAR_12->w, VAR_13->log2_chroma_w);
    VAR_14->planewidth[0] = VAR_14->planewidth[3] = VAR_12->w;
    VAR_14->planeheight[1] = VAR_14->planeheight[2] = FUNC_1(VAR_12->h, VAR_13->log2_chroma_h);
    VAR_14->planeheight[0] = VAR_14->planeheight[3] = VAR_12->h;

    VAR_14->radiusV = !VAR_14->radiusV ? VAR_14->radius : VAR_14->radiusV;
    VAR_14->nb_planes = FUNC_7(VAR_12->format);
    VAR_14->t = 2 * VAR_14->radius * VAR_14->radiusV + 2 * VAR_14->radius;

    for (int VAR_15 = 0; VAR_15 < VAR_14->nb_planes; VAR_15++) {
        if (!(VAR_14->planes & (1 << VAR_15)))
            continue;

        if (VAR_14->planewidth[VAR_15] < VAR_14->radius * 2 + 1) {
            FUNC_5(VAR_12->dst, VAR_0, "The %d plane width %d must be not less than %d\n", VAR_15, VAR_14->planewidth[VAR_15], VAR_14->radius * 2 + 1);
            return FUNC_0(VAR_1);
        }

        if (VAR_14->planeheight[VAR_15] < VAR_14->radiusV * 2 + 1) {
            FUNC_5(VAR_12->dst, VAR_0, "The %d plane height %d must be not less than %d\n", VAR_15, VAR_14->planeheight[VAR_15], VAR_14->radiusV * 2 + 1);
            return FUNC_0(VAR_1);
        }
    }

    VAR_14->nb_threads = FUNC_2(1, FUNC_3(VAR_14->planeheight[1] / (VAR_14->radiusV + 1), FUNC_9(VAR_12->dst)));
    VAR_14->bins = 1 << ((VAR_14->depth + 1) / 2);
    VAR_14->fine_size = VAR_14->bins * VAR_14->bins * VAR_12->w;
    VAR_14->coarse_size = VAR_14->bins * VAR_12->w;
    VAR_14->coarse = FUNC_4(VAR_14->nb_threads, sizeof(*VAR_14->coarse));
    VAR_14->fine = FUNC_4(VAR_14->nb_threads, sizeof(*VAR_14->fine));
    if (!VAR_14->coarse || !VAR_14->fine)
        return FUNC_0(VAR_2);
    for (int VAR_16 = 0; VAR_16 < VAR_14->nb_threads; VAR_16++) {
        VAR_14->coarse[VAR_16] = FUNC_6(VAR_14->coarse_size, sizeof(**VAR_14->coarse));
        VAR_14->fine[VAR_16] = FUNC_6(VAR_14->fine_size, sizeof(**VAR_14->fine));
        if (!VAR_14->coarse[VAR_16] || !VAR_14->fine[VAR_16])
            return FUNC_0(VAR_2);
    }

    VAR_14->hadd = VAR_9;
    VAR_14->hsub = VAR_11;
    VAR_14->hmuladd = VAR_10;

    switch (VAR_14->depth) {
    case 8: VAR_14->filter_plane = VAR_7; break;
    case 9: VAR_14->filter_plane = VAR_8; break;
    case 10: VAR_14->filter_plane = VAR_3; break;
    case 12: VAR_14->filter_plane = VAR_4; break;
    case 14: VAR_14->filter_plane = VAR_5; break;
    case 16: VAR_14->filter_plane = VAR_6; break;
    }

    return 0;
}
