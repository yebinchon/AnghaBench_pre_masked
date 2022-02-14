
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {TYPE_1__* priv; int ** outputs; int ** inputs; } ;
struct TYPE_9__ {scalar_t__ pts; int nb_samples; scalar_t__ extended_data; } ;
struct TYPE_8__ {int eof; scalar_t__ buf_size; scalar_t__ pts; int fifo; } ;
typedef TYPE_1__ AudioSurroundContext ;
typedef TYPE_2__ AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,void**,int ) ;
 int FUNC_4 (TYPE_2__**) ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int *,int*,int *) ;
 int FUNC_7 (int *,TYPE_2__**) ;
 int FUNC_8 (int *,int,scalar_t__) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_3)
{
    AVFilterLink *VAR_4 = VAR_3->inputs[0];
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AudioSurroundContext *VAR_6 = VAR_3->priv;
    AVFrame *VAR_7 = ((void*)0);
    int VAR_8 = 0, VAR_9;
    int64_t VAR_10;

    FUNC_0(VAR_5, VAR_4);

    if (!VAR_6->eof && FUNC_2(VAR_6->fifo) < VAR_6->buf_size) {
        VAR_8 = FUNC_7(VAR_4, &VAR_7);
        if (VAR_8 < 0)
            return VAR_8;

        if (VAR_8 > 0) {
            VAR_8 = FUNC_3(VAR_6->fifo, (void **)VAR_7->extended_data,
                                      VAR_7->nb_samples);
            if (VAR_8 >= 0 && VAR_6->pts == VAR_1)
                VAR_6->pts = VAR_7->pts;

            FUNC_4(&VAR_7);
            if (VAR_8 < 0)
                return VAR_8;
        }
    }

    if ((FUNC_2(VAR_6->fifo) >= VAR_6->buf_size) ||
        (FUNC_2(VAR_6->fifo) > 0 && VAR_6->eof)) {
        VAR_8 = FUNC_9(VAR_4);
        if (FUNC_2(VAR_6->fifo) >= VAR_6->buf_size)
            FUNC_5(VAR_3, 100);
        return VAR_8;
    }

    if (!VAR_6->eof && FUNC_6(VAR_4, &VAR_9, &VAR_10)) {
        if (VAR_9 == VAR_0) {
            VAR_6->eof = 1;
            if (FUNC_2(VAR_6->fifo) >= 0) {
                FUNC_5(VAR_3, 100);
                return 0;
            }
        }
    }

    if (VAR_6->eof && FUNC_2(VAR_6->fifo) <= 0) {
        FUNC_8(VAR_5, VAR_0, VAR_6->pts);
        return 0;
    }

    if (!VAR_6->eof)
        FUNC_1(VAR_5, VAR_4);

    return VAR_2;
}
