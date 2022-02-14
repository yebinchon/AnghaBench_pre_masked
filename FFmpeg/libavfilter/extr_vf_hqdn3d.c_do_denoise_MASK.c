
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int direct; TYPE_3__* in; TYPE_3__* out; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_10__ {TYPE_2__* priv; } ;
struct TYPE_9__ {int * linesize; int height; int width; int * data; } ;
struct TYPE_8__ {int hsub; int vsub; int * coefs; int * frame_prev; int * line; } ;
typedef TYPE_2__ HQDN3DContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int *,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_4, void *VAR_5, int VAR_6, int VAR_7)
{
    HQDN3DContext *VAR_8 = VAR_4->priv;
    const ThreadData *VAR_9 = VAR_5;
    AVFrame *VAR_10 = VAR_9->out;
    AVFrame *VAR_11 = VAR_9->in;
    int VAR_12 = VAR_9->direct;

    FUNC_1(VAR_8, VAR_11->data[VAR_6], VAR_10->data[VAR_6],
                VAR_8->line[VAR_6], &VAR_8->frame_prev[VAR_6],
                FUNC_0(VAR_11->width, (!!VAR_6 * VAR_8->hsub)),
                FUNC_0(VAR_11->height, (!!VAR_6 * VAR_8->vsub)),
                VAR_11->linesize[VAR_6], VAR_10->linesize[VAR_6],
                VAR_8->coefs[VAR_6 ? VAR_0 : VAR_2],
                VAR_8->coefs[VAR_6 ? VAR_1 : VAR_3]);

    return 0;
}
