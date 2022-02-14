
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {TYPE_2__* out; TYPE_2__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_8__ {int * priv; } ;
struct TYPE_7__ {int width; int height; int* linesize; scalar_t__** data; } ;
typedef int SignalstatsContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;
 int FUNC_1 (int const*,TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
    ThreadData *VAR_5 = VAR_2;
    const SignalstatsContext *VAR_6 = VAR_1->priv;
    const AVFrame *VAR_7 = VAR_5->in;
    AVFrame *VAR_8 = VAR_5->out;
    const int VAR_9 = VAR_7->width;
    const int VAR_10 = VAR_7->height;
    const int VAR_11 = (VAR_10 * VAR_3 ) / VAR_4;
    const int VAR_12 = (VAR_10 * (VAR_3+1)) / VAR_4;
    const uint8_t *VAR_13 = VAR_7->data[0];
    const int VAR_14 = VAR_7->linesize[0];
    int VAR_15, VAR_16, VAR_17 = 0;

    for (VAR_16 = VAR_11; VAR_16 < VAR_12; VAR_16++) {
        const int VAR_18 = (VAR_16 - VAR_0) * VAR_14;
        const int VAR_19 = VAR_16 * VAR_14;
        int VAR_20, VAR_21 = 0;

        if (VAR_16 < VAR_0)
            continue;

        for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
            VAR_21 += FUNC_0(VAR_13[VAR_18 + VAR_15] - VAR_13[VAR_19 + VAR_15]);
        VAR_20 = VAR_21 < VAR_9;

        VAR_17 += VAR_20;
        if (VAR_20 && VAR_8)
            for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
                FUNC_1(VAR_6, VAR_8, VAR_15, VAR_16);
    }
    return VAR_17 * VAR_9;
}
