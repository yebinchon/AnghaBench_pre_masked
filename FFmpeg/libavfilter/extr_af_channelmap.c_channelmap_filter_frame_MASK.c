
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int source_planes ;
struct TYPE_15__ {TYPE_2__* priv; TYPE_4__** outputs; } ;
struct TYPE_14__ {int channels; int channel_layout; TYPE_5__* dst; } ;
struct TYPE_13__ {int channels; int channel_layout; int ** data; int ** extended_data; } ;
struct TYPE_12__ {int nch; TYPE_1__* map; } ;
struct TYPE_11__ {size_t out_channel_idx; size_t in_channel_idx; } ;
typedef TYPE_2__ ChannelMapContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const,int const) ;
 int const FUNC_2 (int **) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (int **) ;
 int ** FUNC_5 (int const,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (int **,int **,int const) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    const ChannelMapContext *VAR_6 = VAR_4->priv;
    const int VAR_7 = VAR_2->channels;
    const int VAR_8 = VAR_6->nch;
    int VAR_9;
    uint8_t *VAR_10[VAR_1];

    FUNC_7(VAR_10, VAR_3->extended_data,
           VAR_7 * sizeof(VAR_10[0]));

    if (VAR_8 > VAR_7) {
        if (VAR_8 > FUNC_2(VAR_3->data)) {
            uint8_t **VAR_11 =
                FUNC_5(VAR_8, sizeof(*VAR_3->extended_data));
            if (!VAR_11) {
                FUNC_3(&VAR_3);
                return FUNC_0(VAR_0);
            }
            if (VAR_3->extended_data == VAR_3->data) {
                VAR_3->extended_data = VAR_11;
            } else {
                FUNC_4(VAR_3->extended_data);
                VAR_3->extended_data = VAR_11;
            }
        } else if (VAR_3->extended_data != VAR_3->data) {
            FUNC_4(VAR_3->extended_data);
            VAR_3->extended_data = VAR_3->data;
        }
    }

    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        VAR_3->extended_data[VAR_6->map[VAR_9].out_channel_idx] =
            VAR_10[VAR_6->map[VAR_9].in_channel_idx];
    }

    if (VAR_3->data != VAR_3->extended_data)
        FUNC_7(VAR_3->data, VAR_3->extended_data,
           FUNC_1(FUNC_2(VAR_3->data), VAR_8) * sizeof(VAR_3->data[0]));

    VAR_3->channel_layout = VAR_5->channel_layout;
    VAR_3->channels = VAR_5->channels;

    return FUNC_6(VAR_5, VAR_3);
}
