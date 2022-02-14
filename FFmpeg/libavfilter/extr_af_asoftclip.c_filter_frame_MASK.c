
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int (* filter ) (TYPE_4__*,void**,void const**,int,int) ;} ;
struct TYPE_18__ {TYPE_4__* priv; TYPE_2__** outputs; } ;
struct TYPE_17__ {TYPE_3__* dst; } ;
struct TYPE_16__ {int nb_samples; int channels; scalar_t__ extended_data; int format; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;
typedef TYPE_4__ ASoftClipContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_4__*,void**,void const**,int,int) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    ASoftClipContext *VAR_5 = VAR_3->priv;
    int VAR_6, VAR_7;
    AVFrame *VAR_8;

    if (FUNC_3(VAR_2)) {
        VAR_8 = VAR_2;
    } else {
        VAR_8 = FUNC_6(VAR_4, VAR_2->nb_samples);
        if (!VAR_8) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_8, VAR_2);
    }

    if (FUNC_4(VAR_2->format)) {
        VAR_6 = VAR_2->nb_samples;
        VAR_7 = VAR_2->channels;
    } else {
        VAR_6 = VAR_2->channels * VAR_2->nb_samples;
        VAR_7 = 1;
    }

    VAR_5->filter(VAR_5, (void **)VAR_8->extended_data, (const void **)VAR_2->extended_data,
              VAR_6, VAR_7);

    if (VAR_8 != VAR_2)
        FUNC_2(&VAR_2);

    return FUNC_5(VAR_4, VAR_8);
}
