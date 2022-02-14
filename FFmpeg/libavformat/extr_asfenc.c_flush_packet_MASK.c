
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int packet_timestamp_end; int packet_timestamp_start; int packet_size_left; int packet_size; scalar_t__ packet_buf; int pb; scalar_t__ packet_nb_payloads; int nb_packets; scalar_t__ is_streamed; } ;
struct TYPE_6__ {scalar_t__ packet_size; int pb; TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__,int,int *,int *,int *,int *) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (TYPE_1__*,int,scalar_t__,int ) ;
 int FUNC_6 (TYPE_1__*,int,int,scalar_t__,int) ;

__attribute__((used)) static void FUNC_7(AVFormatContext *VAR_0)
{
    ASFContext *VAR_1 = VAR_0->priv_data;
    int VAR_2, VAR_3;

    FUNC_0(VAR_1->packet_timestamp_end >= VAR_1->packet_timestamp_start);

    if (VAR_1->is_streamed)
        FUNC_5(VAR_0, 0x4424, VAR_0->packet_size, 0);

    VAR_2 = FUNC_6(VAR_0,
                                               VAR_1->packet_timestamp_start,
                                               VAR_1->packet_timestamp_end - VAR_1->packet_timestamp_start,
                                               VAR_1->packet_nb_payloads,
                                               VAR_1->packet_size_left);

    VAR_3 = VAR_1->packet_size - VAR_1->packet_size_left;
    FUNC_0(VAR_2 <= VAR_1->packet_size_left);
    FUNC_4(VAR_1->packet_buf + VAR_3, 0, VAR_1->packet_size_left);

    FUNC_2(VAR_0->pb, VAR_1->packet_buf, VAR_0->packet_size - VAR_2);

    FUNC_1(VAR_0->pb);
    VAR_1->nb_packets++;
    VAR_1->packet_nb_payloads = 0;
    VAR_1->packet_timestamp_start = -1;
    VAR_1->packet_timestamp_end = -1;
    FUNC_3(&VAR_1->pb, VAR_1->packet_buf, VAR_0->packet_size, 1,
                      ((void*)0), ((void*)0), ((void*)0), ((void*)0));
}
