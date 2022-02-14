
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int payload_type; int seq; int octet_count; int packet_count; int ssrc; int timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int const*,int) ;

void FUNC_6(AVFormatContext *VAR_2, const uint8_t *VAR_3, int VAR_4, int VAR_5)
{
    RTPMuxContext *VAR_6 = VAR_2->priv_data;

    FUNC_0(VAR_2, VAR_0, "rtp_send_data size=%d\n", VAR_4);


    FUNC_2(VAR_2->pb, VAR_1 << 6);
    FUNC_2(VAR_2->pb, (VAR_6->payload_type & 0x7f) | ((VAR_5 & 0x01) << 7));
    FUNC_3(VAR_2->pb, VAR_6->seq);
    FUNC_4(VAR_2->pb, VAR_6->timestamp);
    FUNC_4(VAR_2->pb, VAR_6->ssrc);

    FUNC_5(VAR_2->pb, VAR_3, VAR_4);
    FUNC_1(VAR_2->pb);

    VAR_6->seq = (VAR_6->seq + 1) & 0xffff;
    VAR_6->octet_count += VAR_4;
    VAR_6->packet_count++;
}
