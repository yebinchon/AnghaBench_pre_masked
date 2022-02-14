
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int avg_frame_size; int frame_log2; int * block; TYPE_1__* block_config; int frame_count; } ;
struct TYPE_15__ {int block_align; TYPE_5__* priv_data; } ;
struct TYPE_14__ {int nb_samples; } ;
struct TYPE_13__ {int size; int data; } ;
struct TYPE_12__ {int count; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ ATRAC9Context ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*,int *,int *,TYPE_3__*,int,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_0, void *VAR_1,
                               int *VAR_2, AVPacket *VAR_3)
{
    int VAR_4;
    GetBitContext VAR_5;
    AVFrame *VAR_6 = VAR_1;
    ATRAC9Context *VAR_7 = VAR_0->priv_data;
    const int VAR_8 = FUNC_0(VAR_3->size / VAR_7->avg_frame_size, VAR_7->frame_count);

    VAR_6->nb_samples = (1 << VAR_7->frame_log2) * VAR_8;
    VAR_4 = FUNC_3(VAR_0, VAR_6, 0);
    if (VAR_4 < 0)
        return VAR_4;

    FUNC_4(&VAR_5, VAR_3->data, VAR_3->size);

    for (int VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        for (int VAR_10 = 0; VAR_10 < VAR_7->block_config->count; VAR_10++) {
            VAR_4 = FUNC_2(VAR_7, &VAR_5, &VAR_7->block[VAR_10], VAR_6, VAR_9, VAR_10);
            if (VAR_4)
                return VAR_4;
            FUNC_1(&VAR_5);
        }
    }

    *VAR_2 = 1;

    return VAR_0->block_align;
}
