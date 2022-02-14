
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_21__ {TYPE_1__** inputs; TYPE_6__** outputs; TYPE_3__* priv; } ;
struct TYPE_18__ {int member_0; int den; int member_1; } ;
struct TYPE_20__ {TYPE_4__ time_base; int format; int channels; } ;
struct TYPE_19__ {scalar_t__ pts; int extended_data; } ;
struct TYPE_17__ {TYPE_2__* in; scalar_t__ delta_ts; } ;
struct TYPE_16__ {scalar_t__ pts; } ;
struct TYPE_15__ {int sample_rate; } ;
typedef TYPE_3__ ConcatContext ;
typedef TYPE_4__ AVRational ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_4__,TYPE_4__) ;
 int FUNC_4 (int ,int ,int,int ,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 TYPE_5__* FUNC_6 (TYPE_6__*,int) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_2, unsigned VAR_3, unsigned VAR_4,
                        int64_t VAR_5)
{
    ConcatContext *VAR_6 = VAR_2->priv;
    AVFilterLink *VAR_7 = VAR_2->outputs[VAR_4];
    int64_t VAR_8 = VAR_6->in[VAR_3].pts + VAR_6->delta_ts - VAR_5;
    int64_t VAR_9, VAR_10 = 0;
    int VAR_11, VAR_12;
    AVRational VAR_13 = { 1, VAR_2->inputs[VAR_3]->sample_rate };
    AVFrame *VAR_14;

    if (!VAR_13.den)
        return VAR_0;
    VAR_9 = FUNC_3(VAR_5 - VAR_6->in[VAR_3].pts,
                              VAR_7->time_base, VAR_13);
    VAR_11 = FUNC_1(9600, VAR_13.den / 5);
    while (VAR_9) {
        VAR_11 = FUNC_2(VAR_11, VAR_9);
        VAR_14 = FUNC_6(VAR_7, VAR_11);
        if (!VAR_14)
            return FUNC_0(VAR_1);
        FUNC_4(VAR_14->extended_data, 0, VAR_11,
                               VAR_7->channels, VAR_7->format);
        VAR_14->pts = VAR_8 + FUNC_3(VAR_10, VAR_13, VAR_7->time_base);
        VAR_12 = FUNC_5(VAR_7, VAR_14);
        if (VAR_12 < 0)
            return VAR_12;
        VAR_10 += VAR_11;
        VAR_9 -= VAR_11;
    }
    return 0;
}
