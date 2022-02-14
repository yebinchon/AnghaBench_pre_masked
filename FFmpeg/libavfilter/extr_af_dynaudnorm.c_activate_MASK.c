
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {TYPE_1__* priv; int ** outputs; int ** inputs; } ;
struct TYPE_5__ {int eof; scalar_t__ frame_len; scalar_t__ delay; int pts; } ;
typedef TYPE_1__ DynamicAudioNormalizerContext ;
typedef int AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int *,int*,int *) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,int **) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_2)
{
    AVFilterLink *VAR_3 = VAR_2->inputs[0];
    AVFilterLink *VAR_4 = VAR_2->outputs[0];
    DynamicAudioNormalizerContext *VAR_5 = VAR_2->priv;
    AVFrame *VAR_6 = ((void*)0);
    int VAR_7 = 0, VAR_8;
    int64_t VAR_9;

    FUNC_0(VAR_4, VAR_3);

    if (!VAR_5->eof) {
        VAR_7 = FUNC_4(VAR_3, VAR_5->frame_len, VAR_5->frame_len, &VAR_6);
        if (VAR_7 < 0)
            return VAR_7;
        if (VAR_7 > 0) {
            VAR_7 = FUNC_7(VAR_3, VAR_6);
            if (VAR_7 <= 0)
                return VAR_7;
        }

        if (FUNC_5(VAR_3) >= VAR_5->frame_len) {
            FUNC_2(VAR_2, 10);
            return 0;
        }
    }

    if (!VAR_5->eof && FUNC_3(VAR_3, &VAR_8, &VAR_9)) {
        if (VAR_8 == VAR_0)
            VAR_5->eof = 1;
    }

    if (VAR_5->eof && VAR_5->delay > 0)
        return FUNC_8(VAR_4);

    if (VAR_5->eof && VAR_5->delay <= 0) {
        FUNC_6(VAR_4, VAR_0, VAR_5->pts);
        return 0;
    }

    if (!VAR_5->eof)
        FUNC_1(VAR_4, VAR_3);

    return VAR_1;
}
