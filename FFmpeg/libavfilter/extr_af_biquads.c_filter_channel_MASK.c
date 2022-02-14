
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* out; TYPE_4__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_14__ {int is_disabled; TYPE_3__* priv; TYPE_5__** inputs; } ;
struct TYPE_13__ {int channel_layout; } ;
struct TYPE_12__ {int channels; int nb_samples; int * extended_data; } ;
struct TYPE_11__ {int channels; int block_align; TYPE_1__* cache; int a2; int a1; int b2; int b1; int b0; int (* filter ) (TYPE_3__*,int ,int ,int,int *,int *,int *,int *,int ,int ,int ,int ,int ,int *,int ) ;} ;
struct TYPE_9__ {int clippings; int o2; int o1; int i2; int i1; } ;
typedef TYPE_3__ BiquadsContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int,int *,int *,int *,int *,int ,int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    AVFilterLink *VAR_4 = VAR_0->inputs[0];
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->in;
    AVFrame *VAR_7 = VAR_5->out;
    BiquadsContext *VAR_8 = VAR_0->priv;
    const int VAR_9 = (VAR_6->channels * VAR_2) / VAR_3;
    const int VAR_10 = (VAR_6->channels * (VAR_2+1)) / VAR_3;
    int VAR_11;

    for (VAR_11 = VAR_9; VAR_11 < VAR_10; VAR_11++) {
        if (!((FUNC_0(VAR_4->channel_layout, VAR_11) & VAR_8->channels))) {
            if (VAR_6 != VAR_7)
                FUNC_1(VAR_7->extended_data[VAR_11], VAR_6->extended_data[VAR_11],
                       VAR_6->nb_samples * VAR_8->block_align);
            continue;
        }

        VAR_8->filter(VAR_8, VAR_6->extended_data[VAR_11], VAR_7->extended_data[VAR_11], VAR_6->nb_samples,
                  &VAR_8->cache[VAR_11].i1, &VAR_8->cache[VAR_11].i2, &VAR_8->cache[VAR_11].o1, &VAR_8->cache[VAR_11].o2,
                  VAR_8->b0, VAR_8->b1, VAR_8->b2, VAR_8->a1, VAR_8->a2, &VAR_8->cache[VAR_11].clippings, VAR_0->is_disabled);
    }

    return 0;
}
