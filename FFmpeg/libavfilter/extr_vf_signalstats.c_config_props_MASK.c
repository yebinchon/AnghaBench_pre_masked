
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__** inputs; TYPE_2__* priv; } ;
struct TYPE_12__ {int w; int h; int format; TYPE_5__* src; } ;
struct TYPE_11__ {TYPE_1__* comp; int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_10__ {int depth; int chromaw; int chromah; int fs; int cfs; int nb_jobs; void* frame_hue; void* frame_sat; void* jobs_rets; int vsub; int hsub; void* histsat; void* histv; void* histu; void* histy; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_2__ SignalstatsContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 void* FUNC_4 (int ,int,int) ;
 void* FUNC_5 (int,int) ;
 TYPE_3__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->src;
    SignalstatsContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_3->src->inputs[0];
    const AVPixFmtDescriptor *VAR_7 = FUNC_6(VAR_3->format);
    VAR_5->hsub = VAR_7->log2_chroma_w;
    VAR_5->vsub = VAR_7->log2_chroma_h;
    VAR_5->depth = VAR_7->comp[0].depth;
    if (VAR_5->depth > 8) {
        VAR_5->histy = FUNC_5(1 << VAR_5->depth, sizeof(*VAR_5->histy));
        VAR_5->histu = FUNC_5(1 << VAR_5->depth, sizeof(*VAR_5->histu));
        VAR_5->histv = FUNC_5(1 << VAR_5->depth, sizeof(*VAR_5->histv));
        VAR_5->histsat = FUNC_5(1 << VAR_5->depth, sizeof(*VAR_5->histsat));

        if (!VAR_5->histy || !VAR_5->histu || !VAR_5->histv || !VAR_5->histsat)
            return FUNC_0(VAR_2);
    }

    VAR_3->w = VAR_6->w;
    VAR_3->h = VAR_6->h;

    VAR_5->chromaw = FUNC_1(VAR_6->w, VAR_5->hsub);
    VAR_5->chromah = FUNC_1(VAR_6->h, VAR_5->vsub);

    VAR_5->fs = VAR_6->w * VAR_6->h;
    VAR_5->cfs = VAR_5->chromaw * VAR_5->chromah;

    VAR_5->nb_jobs = FUNC_2(1, FUNC_3(VAR_6->h, FUNC_7(VAR_4)));
    VAR_5->jobs_rets = FUNC_5(VAR_5->nb_jobs, sizeof(*VAR_5->jobs_rets));
    if (!VAR_5->jobs_rets)
        return FUNC_0(VAR_2);

    VAR_5->frame_sat = FUNC_4(VAR_5->depth > 8 ? VAR_0 : VAR_1, VAR_6->w, VAR_6->h);
    VAR_5->frame_hue = FUNC_4(VAR_0, VAR_6->w, VAR_6->h);
    if (!VAR_5->frame_sat || !VAR_5->frame_hue)
        return FUNC_0(VAR_2);

    return 0;
}
