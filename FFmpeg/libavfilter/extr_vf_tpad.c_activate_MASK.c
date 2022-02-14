
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_27__ {TYPE_1__* priv; TYPE_3__** outputs; TYPE_3__** inputs; } ;
struct TYPE_26__ {int time_base; int frame_rate; int h; int w; } ;
struct TYPE_25__ {scalar_t__ pts; int height; int width; int linesize; int data; } ;
struct TYPE_24__ {int start_mode; scalar_t__ pad_start; int eof; int stop_mode; scalar_t__ pad_stop; scalar_t__ pts; TYPE_2__* cache_stop; int color; int draw; TYPE_2__* cache_start; } ;
typedef TYPE_1__ TPadContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 void* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int *,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int*,scalar_t__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_2__**) ;
 TYPE_2__* FUNC_12 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_16(AVFilterContext *VAR_3)
{
    AVFilterLink *VAR_4 = VAR_3->inputs[0];
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    TPadContext *VAR_6 = VAR_3->priv;
    AVFrame *VAR_7 = ((void*)0);
    int VAR_8, VAR_9;
    int64_t VAR_10;

    FUNC_1(VAR_5, VAR_4);

    if (VAR_6->start_mode == 0 && VAR_6->pad_start > 0 && FUNC_14(VAR_5)) {
        VAR_7 = FUNC_9(VAR_5, VAR_5->w, VAR_5->h);
        if (!VAR_7)
            return FUNC_0(VAR_1);
        FUNC_7(&VAR_6->draw, &VAR_6->color,
                          VAR_7->data, VAR_7->linesize,
                          0, 0, VAR_7->width, VAR_7->height);
        VAR_7->pts = VAR_6->pts;
        VAR_6->pts += FUNC_6(1, FUNC_5(VAR_5->frame_rate), VAR_5->time_base);
        VAR_6->pad_start--;
        return FUNC_8(VAR_5, VAR_7);
    }

    if (VAR_6->start_mode == 1 && VAR_6->pad_start > 0) {
        if (!VAR_6->cache_start && FUNC_13(VAR_4)) {
            VAR_6->cache_start = FUNC_12(VAR_4, 0);
        } else if (!VAR_6->cache_start) {
            FUNC_2(VAR_5, VAR_4);
        }
        VAR_7 = FUNC_3(VAR_6->cache_start);
        if (!VAR_7)
            return FUNC_0(VAR_1);
        VAR_7->pts = VAR_6->pts;
        VAR_6->pts += FUNC_6(1, FUNC_5(VAR_5->frame_rate), VAR_5->time_base);
        VAR_6->pad_start--;
        if (VAR_6->pad_start == 0)
            VAR_6->cache_start = ((void*)0);
        return FUNC_8(VAR_5, VAR_7);
    }

    if (!VAR_6->eof && !VAR_6->pad_start) {
        VAR_8 = FUNC_11(VAR_4, &VAR_7);
        if (VAR_8 < 0)
            return VAR_8;
        if (VAR_8 > 0) {
            if (VAR_6->stop_mode == 1 && VAR_6->pad_stop != 0) {
                FUNC_4(&VAR_6->cache_stop);
                VAR_6->cache_stop = FUNC_3(VAR_7);
            }
            VAR_7->pts += VAR_6->pts;
            return FUNC_8(VAR_5, VAR_7);
        }
    }

    if (!VAR_6->eof && FUNC_10(VAR_4, &VAR_9, &VAR_10)) {
        if (VAR_9 == VAR_0) {
            if (!VAR_6->pad_stop) {
                FUNC_15(VAR_5, VAR_9, VAR_10);
                return 0;
            }
            VAR_6->eof = 1;
            VAR_6->pts += VAR_10;
        }
    }

    if (VAR_6->eof) {
        if (!VAR_6->pad_stop) {
            FUNC_15(VAR_5, VAR_0, VAR_6->pts);
            return 0;
        }
        if (VAR_6->stop_mode == 0) {
            VAR_7 = FUNC_9(VAR_5, VAR_5->w, VAR_5->h);
            if (!VAR_7)
                return FUNC_0(VAR_1);
            FUNC_7(&VAR_6->draw, &VAR_6->color,
                              VAR_7->data, VAR_7->linesize,
                              0, 0, VAR_7->width, VAR_7->height);
        } else if (VAR_6->stop_mode == 1) {
            VAR_7 = FUNC_3(VAR_6->cache_stop);
            if (!VAR_7)
                return FUNC_0(VAR_1);
        }
        VAR_7->pts = VAR_6->pts;
        VAR_6->pts += FUNC_6(1, FUNC_5(VAR_5->frame_rate), VAR_5->time_base);
        if (VAR_6->pad_stop > 0)
            VAR_6->pad_stop--;
        return FUNC_8(VAR_5, VAR_7);
    }

    if (!VAR_6->pad_start)
        FUNC_2(VAR_5, VAR_4);

    return VAR_2;
}
