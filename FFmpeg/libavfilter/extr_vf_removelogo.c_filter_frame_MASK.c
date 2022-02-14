
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int w; int h; TYPE_1__* dst; } ;
struct TYPE_17__ {int * linesize; int * data; } ;
struct TYPE_16__ {int half_mask_bbox; int half_mask_data; int mask; int full_mask_bbox; int full_mask_data; } ;
struct TYPE_15__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ RemovelogoContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int,int,int,int,int *) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,int,int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    RemovelogoContext *VAR_3 = VAR_1->dst->priv;
    AVFilterLink *VAR_4 = VAR_1->dst->outputs[0];
    AVFrame *VAR_5;
    int VAR_6 = 0;

    if (FUNC_3(VAR_2)) {
        VAR_6 = 1;
        VAR_5 = VAR_2;
    } else {
        VAR_5 = FUNC_6(VAR_4, VAR_4->w, VAR_4->h);
        if (!VAR_5) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_5, VAR_2);
    }

    FUNC_4(VAR_3->mask,
               VAR_2 ->data[0], VAR_2 ->linesize[0],
               VAR_5->data[0], VAR_5->linesize[0],
               VAR_3->full_mask_data, VAR_1->w,
               VAR_1->w, VAR_1->h, VAR_6, &VAR_3->full_mask_bbox);
    FUNC_4(VAR_3->mask,
               VAR_2 ->data[1], VAR_2 ->linesize[1],
               VAR_5->data[1], VAR_5->linesize[1],
               VAR_3->half_mask_data, VAR_1->w/2,
               VAR_1->w/2, VAR_1->h/2, VAR_6, &VAR_3->half_mask_bbox);
    FUNC_4(VAR_3->mask,
               VAR_2 ->data[2], VAR_2 ->linesize[2],
               VAR_5->data[2], VAR_5->linesize[2],
               VAR_3->half_mask_data, VAR_1->w/2,
               VAR_1->w/2, VAR_1->h/2, VAR_6, &VAR_3->half_mask_bbox);

    if (!VAR_6)
        FUNC_2(&VAR_2);

    return FUNC_5(VAR_4, VAR_5);
}
