
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_14__ {TYPE_1__* priv_data; } ;
struct TYPE_13__ {int channels; int nb_samples; int ** data; int format; } ;
struct TYPE_12__ {int size; int * data; } ;
struct TYPE_11__ {int block_size; } ;
typedef TYPE_1__ AptXContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int**) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_4, void *VAR_5,
                             int *VAR_6, AVPacket *VAR_7)
{
    AptXContext *VAR_8 = VAR_4->priv_data;
    AVFrame *VAR_9 = VAR_5;
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

    if (VAR_7->size < VAR_8->block_size) {
        FUNC_2(VAR_4, VAR_1, "Packet is too small\n");
        return VAR_0;
    }


    VAR_9->channels = VAR_3;
    VAR_9->format = VAR_2;
    VAR_9->nb_samples = 4 * VAR_7->size / VAR_8->block_size;
    if ((VAR_14 = FUNC_3(VAR_4, VAR_9, 0)) < 0)
        return VAR_14;

    for (VAR_10 = 0, VAR_11 = 0; VAR_11 < VAR_9->nb_samples; VAR_10 += VAR_8->block_size, VAR_11 += 4) {
        int32_t VAR_15[VAR_3][4];

        if (FUNC_1(VAR_8, &VAR_7->data[VAR_10], VAR_15)) {
            FUNC_2(VAR_4, VAR_1, "Synchronization error\n");
            return VAR_0;
        }

        for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
            for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
                FUNC_0(&VAR_9->data[VAR_12][4*(VAR_11+VAR_13)],
                         VAR_15[VAR_12][VAR_13] * 256);
    }

    *VAR_6 = 1;
    return VAR_8->block_size * VAR_9->nb_samples / 4;
}
