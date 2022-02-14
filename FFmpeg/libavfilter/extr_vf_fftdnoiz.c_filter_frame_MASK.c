
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_26__ {scalar_t__ is_disabled; TYPE_4__** outputs; TYPE_2__* priv; } ;
struct TYPE_25__ {int h; int w; TYPE_5__* dst; } ;
struct TYPE_24__ {int * linesize; int * data; } ;
struct TYPE_23__ {scalar_t__ nb_next; scalar_t__ nb_prev; int nb_planes; int planesf; TYPE_3__* cur; TYPE_3__* prev; TYPE_3__* next; TYPE_1__* planes; } ;
struct TYPE_22__ {int buffer_linesize; int * buffer; int planeheight; int planewidth; } ;
typedef TYPE_1__ PlaneContext ;
typedef TYPE_2__ FFTdnoizContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__**) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ,int ,int) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_8 (TYPE_4__*,int ,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int,int ) ;
 int FUNC_11 (TYPE_2__*,int,int ,int ) ;
 int FUNC_12 (TYPE_2__*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_13(AVFilterLink *VAR_4, AVFrame *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_4->dst;
    FFTdnoizContext *VAR_7 = VAR_6->priv;
    AVFilterLink *VAR_8 = VAR_6->outputs[0];
    int VAR_9, VAR_10;
    AVFrame *VAR_11;

    if (VAR_7->nb_next > 0 && VAR_7->nb_prev > 0) {
        FUNC_3(&VAR_7->prev);
        VAR_7->prev = VAR_7->cur;
        VAR_7->cur = VAR_7->next;
        VAR_7->next = VAR_5;

        if (!VAR_7->prev && VAR_7->cur) {
            VAR_7->prev = FUNC_1(VAR_7->cur);
            if (!VAR_7->prev)
                return FUNC_0(VAR_1);
        }
        if (!VAR_7->cur)
            return 0;
    } else if (VAR_7->nb_next > 0) {
        FUNC_3(&VAR_7->cur);
        VAR_7->cur = VAR_7->next;
        VAR_7->next = VAR_5;

        if (!VAR_7->cur)
            return 0;
    } else if (VAR_7->nb_prev > 0) {
        FUNC_3(&VAR_7->prev);
        VAR_7->prev = VAR_7->cur;
        VAR_7->cur = VAR_5;

        if (!VAR_7->prev)
            VAR_7->prev = FUNC_1(VAR_7->cur);
        if (!VAR_7->prev)
            return FUNC_0(VAR_1);
    } else {
        VAR_7->cur = VAR_5;
    }

    if (FUNC_4(VAR_5) && VAR_7->nb_next == 0 && VAR_7->nb_prev == 0) {
        VAR_9 = 1;
        VAR_11 = VAR_5;
    } else {
        VAR_9 = 0;
        VAR_11 = FUNC_8(VAR_8, VAR_8->w, VAR_8->h);
        if (!VAR_11)
            return FUNC_0(VAR_1);
        FUNC_2(VAR_11, VAR_7->cur);
    }

    for (VAR_10 = 0; VAR_10 < VAR_7->nb_planes; VAR_10++) {
        PlaneContext *VAR_12 = &VAR_7->planes[VAR_10];

        if (!((1 << VAR_10) & VAR_7->planesf) || VAR_6->is_disabled) {
            if (!VAR_9)
                FUNC_5(VAR_11->data[VAR_10], VAR_11->linesize[VAR_10],
                                    VAR_7->cur->data[VAR_10], VAR_7->cur->linesize[VAR_10],
                                    VAR_12->planewidth, VAR_12->planeheight);
            continue;
        }

        if (VAR_7->next) {
            FUNC_12(VAR_7, VAR_7->next->data[VAR_10], VAR_7->next->linesize[VAR_10],
                         VAR_12->buffer[VAR_2], VAR_12->buffer_linesize, VAR_10);
        }

        if (VAR_7->prev) {
            FUNC_12(VAR_7, VAR_7->prev->data[VAR_10], VAR_7->prev->linesize[VAR_10],
                         VAR_12->buffer[VAR_3], VAR_12->buffer_linesize, VAR_10);
        }

        FUNC_12(VAR_7, VAR_7->cur->data[VAR_10], VAR_7->cur->linesize[VAR_10],
                     VAR_12->buffer[VAR_0], VAR_12->buffer_linesize, VAR_10);

        if (VAR_7->next && VAR_7->prev) {
            FUNC_11(VAR_7, VAR_10, VAR_12->buffer[VAR_3], VAR_12->buffer[VAR_2]);
        } else if (VAR_7->next) {
            FUNC_10(VAR_7, VAR_10, VAR_12->buffer[VAR_2]);
        } else if (VAR_7->prev) {
            FUNC_10(VAR_7, VAR_10, VAR_12->buffer[VAR_3]);
        } else {
            FUNC_9(VAR_7, VAR_10);
        }

        FUNC_6(VAR_7, VAR_11->data[VAR_10], VAR_11->linesize[VAR_10],
                     VAR_12->buffer[VAR_0], VAR_12->buffer_linesize, VAR_10);
    }

    if (VAR_7->nb_next == 0 && VAR_7->nb_prev == 0) {
        if (VAR_9) {
            VAR_7->cur = ((void*)0);
        } else {
            FUNC_3(&VAR_7->cur);
        }
    }
    return FUNC_7(VAR_8, VAR_11);
}
