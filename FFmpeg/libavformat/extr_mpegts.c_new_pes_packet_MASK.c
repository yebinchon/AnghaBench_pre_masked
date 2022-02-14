
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
struct TYPE_15__ {scalar_t__ data; scalar_t__ size; int flags; int pos; int dts; int pts; int stream_index; TYPE_3__* buf; } ;
struct TYPE_14__ {scalar_t__ data_index; scalar_t__ total_size; scalar_t__ pes_header_size; int stream_type; int extended_stream_id; int stream_id; TYPE_3__* buffer; int flags; int ts_packet_pos; int dts; int pts; TYPE_2__* st; TYPE_1__* sub_st; int stream; } ;
struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_12__ {int index; } ;
struct TYPE_11__ {int index; } ;
typedef TYPE_4__ PESContext ;
typedef TYPE_5__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ,char*) ;
 int * FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(PESContext *VAR_7, AVPacket *VAR_8)
{
    uint8_t *VAR_9;

    FUNC_1(VAR_8);

    VAR_8->buf = VAR_7->buffer;
    VAR_8->data = VAR_7->buffer->data;
    VAR_8->size = VAR_7->data_index;

    if (VAR_7->total_size != VAR_5 &&
        VAR_7->pes_header_size + VAR_7->data_index != VAR_7->total_size +
        VAR_6) {
        FUNC_2(VAR_7->stream, VAR_1, "PES packet size mismatch\n");
        VAR_7->flags |= VAR_3;
    }
    FUNC_4(VAR_8->data + VAR_8->size, 0, VAR_0);


    if (VAR_7->sub_st && VAR_7->stream_type == 0x83 && VAR_7->extended_stream_id == 0x76)
        VAR_8->stream_index = VAR_7->sub_st->index;
    else
        VAR_8->stream_index = VAR_7->st->index;
    VAR_8->pts = VAR_7->pts;
    VAR_8->dts = VAR_7->dts;

    VAR_8->pos = VAR_7->ts_packet_pos;
    VAR_8->flags = VAR_7->flags;

    VAR_7->buffer = ((void*)0);
    FUNC_5(VAR_7);

    VAR_9 = FUNC_3(VAR_8, VAR_2, 1);
    if (!VAR_9)
        return FUNC_0(VAR_4);
    *VAR_9 = VAR_7->stream_id;

    return 0;
}
