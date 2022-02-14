
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_5__ {int * priv; } ;
struct TYPE_4__ {int format; int channels; scalar_t__ sample_rate; TYPE_2__* dst; } ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;
typedef int ATempoContext ;


 int FUNC_0 (int *,int,int,int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    ATempoContext *VAR_2 = VAR_1->priv;

    enum AVSampleFormat VAR_3 = VAR_0->format;
    int VAR_4 = (int)VAR_0->sample_rate;

    return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0->channels);
}
