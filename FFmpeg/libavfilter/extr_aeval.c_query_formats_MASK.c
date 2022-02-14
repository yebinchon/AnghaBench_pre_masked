
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int chlayout; int sample_rate; int nb_channels; } ;
typedef TYPE_1__ EvalContext ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int*) ;
 int * FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_1)
{
    EvalContext *VAR_2 = VAR_1->priv;
    static const enum AVSampleFormat VAR_3[] = { 129, 128 };
    int64_t VAR_4[] = { VAR_2->chlayout ? VAR_2->chlayout : FUNC_1(VAR_2->nb_channels) , -1 };
    int VAR_5[] = { VAR_2->sample_rate, -1 };
    AVFilterFormats *VAR_6;
    AVFilterChannelLayouts *VAR_7;
    int VAR_8;

    VAR_6 = FUNC_3(VAR_3);
    if (!VAR_6)
        return FUNC_0(VAR_0);
    VAR_8 = FUNC_5 (VAR_1, VAR_6);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_7 = FUNC_2(VAR_4);
    if (!VAR_7)
        return FUNC_0(VAR_0);
    VAR_8 = FUNC_4(VAR_1, VAR_7);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_6 = FUNC_3(VAR_5);
    if (!VAR_6)
        return FUNC_0(VAR_0);
    return FUNC_6(VAR_1, VAR_6);
}
