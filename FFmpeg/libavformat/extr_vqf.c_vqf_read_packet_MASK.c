
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int frame_bit_len; int remaining_bits; int last_frame_bits; } ;
typedef TYPE_1__ VqfContext ;
struct TYPE_10__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int duration; int* data; scalar_t__ stream_index; int pos; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    VqfContext *VAR_3 = VAR_1->priv_data;
    int VAR_4;
    int VAR_5 = (VAR_3->frame_bit_len - VAR_3->remaining_bits + 7)>>3;

    if (FUNC_1(VAR_2, VAR_5+2) < 0)
        return FUNC_0(VAR_0);

    VAR_2->pos = FUNC_4(VAR_1->pb);
    VAR_2->stream_index = 0;
    VAR_2->duration = 1;

    VAR_2->data[0] = 8 - VAR_3->remaining_bits;
    VAR_2->data[1] = VAR_3->last_frame_bits;
    VAR_4 = FUNC_3(VAR_1->pb, VAR_2->data+2, VAR_5);

    if (VAR_4 != VAR_5) {
        FUNC_2(VAR_2);
        return FUNC_0(VAR_0);
    }

    VAR_3->last_frame_bits = VAR_2->data[VAR_5+1];
    VAR_3->remaining_bits = (VAR_5 << 3) - VAR_3->frame_bit_len + VAR_3->remaining_bits;

    return VAR_5+2;
}
