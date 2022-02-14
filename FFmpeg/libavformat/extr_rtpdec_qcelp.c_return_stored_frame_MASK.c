
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_15__ {int stream_index; scalar_t__* data; } ;
struct TYPE_14__ {int index; } ;
struct TYPE_13__ {size_t size; size_t pos; size_t* data; } ;
struct TYPE_12__ {size_t interleave_index; int group_finished; scalar_t__ next_size; size_t interleave_size; int next_data; int next_timestamp; TYPE_2__* group; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ InterleavePacket ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVFormatContext ;


 int VAR_0 ;
 size_t FUNC_0 (int*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int* VAR_1 ;
 int FUNC_2 (scalar_t__*,size_t*,int) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_3__*,TYPE_4__*,int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2, PayloadContext *VAR_3,
                               AVStream *VAR_4, AVPacket *VAR_5, uint32_t *VAR_6,
                               const uint8_t *VAR_7, int VAR_8)
{
    InterleavePacket* VAR_9 = &VAR_3->group[VAR_3->interleave_index];
    int VAR_10, VAR_11;

    if (VAR_3->group_finished && VAR_3->interleave_index == 0) {
        *VAR_6 = VAR_3->next_timestamp;
        VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_3->next_data,
                           VAR_3->next_size);
        VAR_3->next_size = 0;
        return VAR_11;
    }

    if (VAR_9->size == 0) {

        if ((VAR_11 = FUNC_1(VAR_5, 1)) < 0)
            return VAR_11;
        VAR_5->data[0] = 0;
    } else {
        if (VAR_9->pos >= VAR_9->size)
            return VAR_0;
        if (VAR_9->data[VAR_9->pos] >= FUNC_0(VAR_1))
            return VAR_0;
        VAR_10 = VAR_1[VAR_9->data[VAR_9->pos]];
        if (VAR_9->pos + VAR_10 > VAR_9->size)
            return VAR_0;

        if ((VAR_11 = FUNC_1(VAR_5, VAR_10)) < 0)
            return VAR_11;
        FUNC_2(VAR_5->data, &VAR_9->data[VAR_9->pos], VAR_10);

        VAR_9->pos += VAR_10;
        VAR_3->group_finished = VAR_9->pos >= VAR_9->size;
    }
    VAR_5->stream_index = VAR_4->index;

    if (VAR_3->interleave_index == VAR_3->interleave_size) {
        VAR_3->interleave_index = 0;
        if (!VAR_3->group_finished)
            return 1;
        else
            return VAR_3->next_size > 0;
    } else {
        VAR_3->interleave_index++;
        return 1;
    }
}
