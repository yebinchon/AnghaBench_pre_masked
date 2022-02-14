
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int channels; scalar_t__ frame_number; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int nb_samples; int * data; } ;
struct TYPE_11__ {int size; scalar_t__* data; } ;
struct TYPE_10__ {size_t data_idx; int data_size; int table; scalar_t__* fib_acc; int ** data; } ;
typedef TYPE_1__ EightSvxContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int,scalar_t__*,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_7 (int *,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_5, void *VAR_6,
                                 int *VAR_7, AVPacket *VAR_8)
{
    EightSvxContext *VAR_9 = VAR_5->priv_data;
    AVFrame *VAR_10 = VAR_6;
    int VAR_11;
    int VAR_12, VAR_13;
    int VAR_14 = 2;


    if (!VAR_9->data[0] && VAR_8) {
        int VAR_15 = VAR_8->size / VAR_5->channels - VAR_14;

        if (VAR_8->size % VAR_5->channels) {
            FUNC_3(VAR_5, VAR_2, "Packet with odd size, ignoring last byte\n");
        }
        if (VAR_8->size < (VAR_14 + 1) * VAR_5->channels) {
            FUNC_3(VAR_5, VAR_1, "packet size is too small\n");
            return VAR_0;
        }

        VAR_9->fib_acc[0] = VAR_8->data[1] + 128;
        if (VAR_5->channels == 2)
            VAR_9->fib_acc[1] = VAR_8->data[2+VAR_15+1] + 128;

        VAR_9->data_idx = 0;
        VAR_9->data_size = VAR_15;
        if (!(VAR_9->data[0] = FUNC_4(VAR_15)))
            return FUNC_0(VAR_3);
        if (VAR_5->channels == 2) {
            if (!(VAR_9->data[1] = FUNC_4(VAR_15))) {
                FUNC_2(&VAR_9->data[0]);
                return FUNC_0(VAR_3);
            }
        }
        FUNC_7(VAR_9->data[0], &VAR_8->data[VAR_14], VAR_15);
        if (VAR_5->channels == 2)
            FUNC_7(VAR_9->data[1], &VAR_8->data[2*VAR_14+VAR_15], VAR_15);
    }
    if (!VAR_9->data[0]) {
        FUNC_3(VAR_5, VAR_1, "unexpected empty packet\n");
        return VAR_0;
    }


    VAR_11 = FUNC_1(VAR_4, VAR_9->data_size - VAR_9->data_idx);
    if (VAR_11 <= 0) {
        *VAR_7 = 0;
        return VAR_8->size;
    }


    VAR_10->nb_samples = VAR_11 * 2;
    if ((VAR_13 = FUNC_6(VAR_5, VAR_10, 0)) < 0)
        return VAR_13;

    for (VAR_12 = 0; VAR_12 < VAR_5->channels; VAR_12++) {
        FUNC_5(VAR_10->data[VAR_12], &VAR_9->data[VAR_12][VAR_9->data_idx],
                     VAR_11, &VAR_9->fib_acc[VAR_12], VAR_9->table);
    }

    VAR_9->data_idx += VAR_11;

    *VAR_7 = 1;

    return ((VAR_5->frame_number == 0)*VAR_14 + VAR_11)*VAR_5->channels;
}
