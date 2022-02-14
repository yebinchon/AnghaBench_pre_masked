
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {TYPE_2__* out; TYPE_2__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_8__ {int * priv; } ;
struct TYPE_7__ {int width; int height; int* linesize; scalar_t__* data; } ;
typedef int SignalstatsContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*,TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    ThreadData *VAR_4 = VAR_1;
    const SignalstatsContext *VAR_5 = VAR_0->priv;
    const AVFrame *VAR_6 = VAR_4->in;
    AVFrame *VAR_7 = VAR_4->out;
    const int VAR_8 = VAR_6->width;
    const int VAR_9 = VAR_6->height;
    const int VAR_10 = (VAR_9 * VAR_2 ) / VAR_3;
    const int VAR_11 = (VAR_9 * (VAR_2+1)) / VAR_3;
    const uint16_t *VAR_12 = (uint16_t *)VAR_6->data[0];
    int VAR_13 = VAR_6->linesize[0] / 2;
    int VAR_14, VAR_15, VAR_16 = 0, VAR_17;

    for (VAR_15 = VAR_10; VAR_15 < VAR_11; VAR_15++) {

        if (VAR_15 - 1 < 0 || VAR_15 + 1 >= VAR_9)
            continue;




        if (VAR_15 - 2 >= 0 && VAR_15 + 2 < VAR_9) {
            for (VAR_14 = 1; VAR_14 < VAR_8 - 1; VAR_14++) {
                VAR_17 = FUNC_0(2) && FUNC_0(1);
                VAR_16 += VAR_17;
                if (VAR_17 && VAR_7)
                    FUNC_1(VAR_5, VAR_7, VAR_14, VAR_15);
            }
        } else {
            for (VAR_14 = 1; VAR_14 < VAR_8 - 1; VAR_14++) {
                VAR_17 = FUNC_0(1);
                VAR_16 += VAR_17;
                if (VAR_17 && VAR_7)
                    FUNC_1(VAR_5, VAR_7, VAR_14, VAR_15);
            }
        }
    }
    return VAR_16;
}
