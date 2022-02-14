
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
struct TYPE_15__ {int stream_index; int data; } ;
struct TYPE_14__ {int index; } ;
struct TYPE_13__ {int size; int data; scalar_t__ pos; } ;
struct TYPE_12__ {int interleave_size; int interleave_index; int group_finished; int next_size; TYPE_2__* group; int next_timestamp; int next_data; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ InterleavePacket ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int const FUNC_0 (int*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,int,...) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int* VAR_3 ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (int *,TYPE_1__*,TYPE_3__*,TYPE_4__*,int *,int const*,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_4, PayloadContext *VAR_5,
                        AVStream *VAR_6, AVPacket *VAR_7, uint32_t *VAR_8,
                        const uint8_t *VAR_9, int VAR_10)
{
    int VAR_11, VAR_12;
    int VAR_13, VAR_14;
    InterleavePacket* VAR_15;

    if (VAR_10 < 2)
        return VAR_0;

    VAR_11 = VAR_9[0] >> 3 & 7;
    VAR_12 = VAR_9[0] & 7;

    if (VAR_11 > 5) {
        FUNC_1(VAR_4, VAR_1, "Invalid interleave size %d\n",
                                   VAR_11);
        return VAR_0;
    }
    if (VAR_12 > VAR_11) {
        FUNC_1(VAR_4, VAR_1, "Invalid interleave index %d/%d\n",
                                   VAR_12, VAR_11);
        return VAR_0;
    }
    if (VAR_11 != VAR_5->interleave_size) {
        int VAR_16;

        VAR_5->interleave_size = VAR_11;
        VAR_5->interleave_index = 0;
        for (VAR_16 = 0; VAR_16 < 6; VAR_16++)
            VAR_5->group[VAR_16].size = 0;
    }

    if (VAR_12 < VAR_5->interleave_index) {

        if (VAR_5->group_finished) {


            VAR_5->interleave_index = 0;
        } else {


            for (; VAR_5->interleave_index <= VAR_11;
                 VAR_5->interleave_index++)
                VAR_5->group[VAR_5->interleave_index].size = 0;

            if (VAR_10 > sizeof(VAR_5->next_data))
                return VAR_0;
            FUNC_3(VAR_5->next_data, VAR_9, VAR_10);
            VAR_5->next_size = VAR_10;
            VAR_5->next_timestamp = *VAR_8;
            *VAR_8 = VAR_2;

            VAR_5->interleave_index = 0;
            return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
        }
    }
    if (VAR_12 > VAR_5->interleave_index) {

        for (; VAR_5->interleave_index < VAR_12;
             VAR_5->interleave_index++)
            VAR_5->group[VAR_5->interleave_index].size = 0;
    }
    VAR_5->interleave_index = VAR_12;

    if (VAR_9[1] >= FUNC_0(VAR_3))
        return VAR_0;
    VAR_13 = VAR_3[VAR_9[1]];
    if (1 + VAR_13 > VAR_10)
        return VAR_0;

    if (VAR_10 - 1 - VAR_13 > sizeof(VAR_5->group[0].data))
        return VAR_0;

    if ((VAR_14 = FUNC_2(VAR_7, VAR_13)) < 0)
        return VAR_14;
    FUNC_3(VAR_7->data, &VAR_9[1], VAR_13);
    VAR_7->stream_index = VAR_6->index;

    VAR_15 = &VAR_5->group[VAR_5->interleave_index];
    VAR_15->size = VAR_10 - 1 - VAR_13;
    VAR_15->pos = 0;
    FUNC_3(VAR_15->data, &VAR_9[1 + VAR_13], VAR_15->size);



    VAR_5->group_finished = VAR_15->size == 0;

    if (VAR_12 == VAR_11) {
        VAR_5->interleave_index = 0;
        return !VAR_5->group_finished;
    } else {
        VAR_5->interleave_index++;
        return 0;
    }
}
