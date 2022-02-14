
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {unsigned int nb_frames; unsigned int overlap; unsigned int current; TYPE_9__* out_ref; int draw; TYPE_1__* prev_out_ref; scalar_t__ init_padding; int blank; scalar_t__ padding; scalar_t__ margin; } ;
typedef TYPE_2__ TileContext ;
struct TYPE_20__ {int linesize; int data; int height; int width; } ;
struct TYPE_19__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
struct TYPE_18__ {int h; int w; TYPE_5__* dst; } ;
struct TYPE_17__ {int linesize; int data; } ;
struct TYPE_15__ {int linesize; int data; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_9__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,unsigned int,unsigned int,unsigned int,unsigned int,int ,int ) ;
 int FUNC_5 (int *,int *,int ,int ,int ,int ,int ,int ) ;
 TYPE_9__* FUNC_6 (TYPE_4__*,int ,int ) ;
 int FUNC_7 (TYPE_5__*,unsigned int*,unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    TileContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    unsigned VAR_6, VAR_7;

    if (!VAR_4->out_ref) {
        VAR_4->out_ref = FUNC_6(VAR_5, VAR_5->w, VAR_5->h);
        if (!VAR_4->out_ref) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_4->out_ref, VAR_2);
        VAR_4->out_ref->width = VAR_5->w;
        VAR_4->out_ref->height = VAR_5->h;


        if (VAR_4->margin || VAR_4->padding || VAR_4->init_padding)
            FUNC_5(&VAR_4->draw, &VAR_4->blank,
                              VAR_4->out_ref->data,
                              VAR_4->out_ref->linesize,
                              0, 0, VAR_5->w, VAR_5->h);
        VAR_4->init_padding = 0;
    }

    if (VAR_4->prev_out_ref) {
        unsigned VAR_8, VAR_9, VAR_10;

        for (VAR_10 = VAR_4->nb_frames - VAR_4->overlap; VAR_10 < VAR_4->nb_frames; VAR_10++) {
            FUNC_7(VAR_3, &VAR_8, &VAR_9, VAR_10);
            FUNC_7(VAR_3, &VAR_6, &VAR_7, VAR_10 - (VAR_4->nb_frames - VAR_4->overlap));
            FUNC_4(&VAR_4->draw,
                               VAR_4->out_ref->data, VAR_4->out_ref->linesize,
                               VAR_4->prev_out_ref->data, VAR_4->prev_out_ref->linesize,
                               VAR_6, VAR_7, VAR_8, VAR_9, VAR_1->w, VAR_1->h);

        }
    }

    FUNC_7(VAR_3, &VAR_6, &VAR_7, VAR_4->current);
    FUNC_4(&VAR_4->draw,
                       VAR_4->out_ref->data, VAR_4->out_ref->linesize,
                       VAR_2->data, VAR_2->linesize,
                       VAR_6, VAR_7, 0, 0, VAR_1->w, VAR_1->h);

    FUNC_2(&VAR_2);
    if (++VAR_4->current == VAR_4->nb_frames)
        return FUNC_3(VAR_3);

    return 0;
}
