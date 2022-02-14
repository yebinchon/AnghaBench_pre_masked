
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wavesynth_context {scalar_t__ cur_ts; scalar_t__ next_ts; } ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_10__ {int channels; struct wavesynth_context* priv_data; } ;
struct TYPE_9__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_8__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (struct wavesynth_context*,scalar_t__) ;
 int FUNC_6 (struct wavesynth_context*,scalar_t__) ;
 int FUNC_7 (struct wavesynth_context*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_3, void *VAR_4, int *VAR_5,
                            AVPacket *VAR_6)
{
    struct wavesynth_context *VAR_7 = VAR_3->priv_data;
    AVFrame *VAR_8 = VAR_4;
    int64_t VAR_9;
    int VAR_10;
    int VAR_11, VAR_12, VAR_13;
    int16_t *VAR_14;
    int32_t VAR_15[VAR_2];

    *VAR_5 = 0;
    if (VAR_6->size != 12)
        return VAR_0;
    VAR_9 = FUNC_2(VAR_6->data);
    if (VAR_9 != VAR_7->cur_ts)
        FUNC_6(VAR_7, VAR_9);
    VAR_10 = FUNC_1(VAR_6->data + 8);
    if (VAR_10 <= 0)
        return FUNC_0(VAR_1);
    VAR_8->nb_samples = VAR_10;
    VAR_13 = FUNC_3(VAR_3, VAR_8, 0);
    if (VAR_13 < 0)
        return VAR_13;
    VAR_14 = (int16_t *)VAR_8->data[0];
    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++, VAR_9++) {
        FUNC_4(VAR_15, 0, VAR_3->channels * sizeof(*VAR_15));
        if (VAR_9 >= VAR_7->next_ts)
            FUNC_5(VAR_7, VAR_9);
        FUNC_7(VAR_7, VAR_9, VAR_15);
        for (VAR_12 = 0; VAR_12 < VAR_3->channels; VAR_12++)
            *(VAR_14++) = VAR_15[VAR_12] >> 16;
    }
    VAR_7->cur_ts += VAR_10;
    *VAR_5 = 1;
    return VAR_6->size;
}
