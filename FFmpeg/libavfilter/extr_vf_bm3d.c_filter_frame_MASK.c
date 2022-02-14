
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int plane; int ref_linesize; int ref; int src_linesize; int src; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_23__ {TYPE_1__* internal; scalar_t__ is_disabled; TYPE_5__** outputs; TYPE_3__* priv; } ;
struct TYPE_22__ {int h; int w; } ;
struct TYPE_21__ {int * linesize; int * data; } ;
struct TYPE_20__ {int nb_planes; int* planeheight; int block_size; int planes; int (* do_output ) (TYPE_3__*,int ,int ,int,int const) ;int * planewidth; int nb_threads; } ;
struct TYPE_18__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int const) ;} ;
typedef TYPE_3__ BM3DContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int) ;
 TYPE_4__* FUNC_5 (TYPE_5__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_6__*,int ,TYPE_2__*,int *,int const) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int,int const) ;

__attribute__((used)) static int FUNC_8(AVFilterContext *VAR_2, AVFrame **VAR_3, AVFrame *VAR_4, AVFrame *VAR_5)
{
    BM3DContext *VAR_6 = VAR_2->priv;
    AVFilterLink *VAR_7 = VAR_2->outputs[0];
    int VAR_8;

    *VAR_3 = FUNC_5(VAR_7, VAR_7->w, VAR_7->h);
    if (!*VAR_3)
        return FUNC_0(VAR_0);
    FUNC_3(*VAR_3, VAR_4);

    for (VAR_8 = 0; VAR_8 < VAR_6->nb_planes; VAR_8++) {
        const int VAR_9 = FUNC_1(1, FUNC_2(VAR_6->nb_threads, VAR_6->planeheight[VAR_8] / VAR_6->block_size));
        ThreadData VAR_10;

        if (!((1 << VAR_8) & VAR_6->planes) || VAR_2->is_disabled) {
            FUNC_4((*VAR_3)->data[VAR_8], (*VAR_3)->linesize[VAR_8],
                                VAR_4->data[VAR_8], VAR_4->linesize[VAR_8],
                                VAR_6->planewidth[VAR_8], VAR_6->planeheight[VAR_8]);
            continue;
        }

        VAR_10.src = VAR_4->data[VAR_8];
        VAR_10.src_linesize = VAR_4->linesize[VAR_8];
        VAR_10.ref = VAR_5->data[VAR_8];
        VAR_10.ref_linesize = VAR_5->linesize[VAR_8];
        VAR_10.plane = VAR_8;
        VAR_2->internal->execute(VAR_2, VAR_1, &VAR_10, ((void*)0), VAR_9);

        VAR_6->do_output(VAR_6, (*VAR_3)->data[VAR_8], (*VAR_3)->linesize[VAR_8], VAR_8, VAR_9);
    }

    return 0;
}
