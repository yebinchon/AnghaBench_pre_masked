
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_22__ {int nb_samples; int * linesize; } ;
struct TYPE_21__ {int in_sample_rate; scalar_t__ out_sample_rate; } ;
typedef TYPE_1__ SwrContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,TYPE_2__ const*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,TYPE_2__ const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,TYPE_2__ const*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(SwrContext *VAR_0,
                      AVFrame *VAR_1, const AVFrame *VAR_2)
{
    int VAR_3, VAR_4 = 0;

    if (!FUNC_8(VAR_0)) {
        if ((VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2)) < 0)
            return VAR_3;
        if ((VAR_3 = FUNC_7(VAR_0)) < 0)
            return VAR_3;
        VAR_4 = 1;
    } else {

        if ((VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2)))
            return VAR_3;
    }

    if (VAR_1) {
        if (!VAR_1->linesize[0]) {
            VAR_1->nb_samples = FUNC_6(VAR_0, VAR_0->out_sample_rate) + 3;
            if (VAR_2) {
                VAR_1->nb_samples += VAR_2->nb_samples*(int64_t)VAR_0->out_sample_rate / VAR_0->in_sample_rate;
            }
            if ((VAR_3 = FUNC_0(VAR_1, 0)) < 0) {
                if (VAR_4)
                    FUNC_4(VAR_0);
                return VAR_3;
            }
        } else {
            if (!VAR_1->nb_samples)
                VAR_1->nb_samples = FUNC_1(VAR_1);
        }
    }

    return FUNC_3(VAR_0, VAR_1, VAR_2);
}
