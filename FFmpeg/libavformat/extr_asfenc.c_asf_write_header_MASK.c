
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nb_index_memory_alloc; int packet_timestamp_start; int packet_timestamp_end; int packet_buf; int pb; scalar_t__ packet_nb_payloads; int index_ptr; scalar_t__ maximum_packet; scalar_t__ nb_packets; int packet_size; } ;
struct TYPE_6__ {int nb_streams; int avoid_negative_ts; int packet_size; int pb; scalar_t__ max_interleave_delta; TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;
typedef int ASFIndex ;
typedef TYPE_2__ ASFContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ,int,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_5)
{
    ASFContext *VAR_6 = VAR_5->priv_data;

    VAR_5->packet_size = VAR_6->packet_size;
    VAR_5->max_interleave_delta = 0;
    VAR_6->nb_packets = 0;

    if (VAR_5->nb_streams > 127) {
        FUNC_3(VAR_5, VAR_1, "ASF can only handle 127 streams\n");
        return FUNC_0(VAR_3);
    }

    VAR_6->index_ptr = FUNC_4(sizeof(ASFIndex) * VAR_0);
    if (!VAR_6->index_ptr)
        return FUNC_0(VAR_4);
    VAR_6->nb_index_memory_alloc = VAR_0;
    VAR_6->maximum_packet = 0;




    if (FUNC_1(VAR_5, 0, VAR_2) < 0) {

        FUNC_2(&VAR_6->index_ptr);
        return -1;
    }

    FUNC_5(VAR_5->pb);

    VAR_6->packet_nb_payloads = 0;
    VAR_6->packet_timestamp_start = -1;
    VAR_6->packet_timestamp_end = -1;
    FUNC_6(&VAR_6->pb, VAR_6->packet_buf, VAR_5->packet_size, 1,
                      ((void*)0), ((void*)0), ((void*)0), ((void*)0));

    if (VAR_5->avoid_negative_ts < 0)
        VAR_5->avoid_negative_ts = 1;

    return 0;
}
