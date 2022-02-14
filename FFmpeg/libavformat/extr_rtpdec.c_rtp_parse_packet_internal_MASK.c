
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_15__ {int stream_index; int data; } ;
struct TYPE_14__ {int index; } ;
struct TYPE_13__ {unsigned int ssrc; int payload_type; int seq; TYPE_3__* st; int dynamic_protocol_context; int ic; TYPE_1__* handler; int statistics; } ;
struct TYPE_12__ {int (* parse_packet ) (int ,int ,TYPE_3__*,TYPE_4__*,void**,int const*,int,int,int) ;} ;
typedef TYPE_2__ RTPDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 void* FUNC_2 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,char*,int,int,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*,void*) ;
 int FUNC_6 (int ,int const*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ,int ,TYPE_3__*,TYPE_4__*,void**,int const*,int,int,int) ;

__attribute__((used)) static int FUNC_9(RTPDemuxContext *VAR_4, AVPacket *VAR_5,
                                     const uint8_t *VAR_6, int VAR_7)
{
    unsigned int VAR_8;
    int VAR_9, VAR_10, VAR_11 = 0;
    int VAR_12, VAR_13;
    AVStream *VAR_14;
    uint32_t VAR_15;
    int VAR_16 = 0;

    VAR_13 = VAR_6[0] & 0x0f;
    VAR_12 = VAR_6[0] & 0x10;
    VAR_9 = VAR_6[1] & 0x7f;
    if (VAR_6[1] & 0x80)
        VAR_11 |= VAR_3;
    VAR_10 = FUNC_1(VAR_6 + 2);
    VAR_15 = FUNC_2(VAR_6 + 4);
    VAR_8 = FUNC_2(VAR_6 + 8);

    VAR_4->ssrc = VAR_8;


    if (VAR_4->payload_type != VAR_9)
        return -1;

    VAR_14 = VAR_4->st;

    if (!FUNC_7(&VAR_4->statistics, VAR_10)) {
        FUNC_3(VAR_4->ic, VAR_1,
               "RTP: PT=%02x: bad cseq %04x expected=%04x\n",
               VAR_9, VAR_10, ((VAR_4->seq + 1) & 0xffff));
        return -1;
    }

    if (VAR_6[0] & 0x20) {
        int VAR_17 = VAR_6[VAR_7 - 1];
        if (VAR_7 >= 12 + VAR_17)
            VAR_7 -= VAR_17;
    }

    VAR_4->seq = VAR_10;
    VAR_7 -= 12;
    VAR_6 += 12;

    VAR_7 -= 4 * VAR_13;
    VAR_6 += 4 * VAR_13;
    if (VAR_7 < 0)
        return VAR_0;


    if (VAR_12) {
        if (VAR_7 < 4)
            return -1;


        VAR_12 = (FUNC_1(VAR_6 + 2) + 1) << 2;

        if (VAR_7 < VAR_12)
            return -1;

        VAR_7 -= VAR_12;
        VAR_6 += VAR_12;
    }

    if (VAR_4->handler && VAR_4->handler->parse_packet) {
        VAR_16 = VAR_4->handler->parse_packet(VAR_4->ic, VAR_4->dynamic_protocol_context,
                                      VAR_4->st, VAR_5, &VAR_15, VAR_6, VAR_7, VAR_10,
                                      VAR_11);
    } else if (VAR_14) {
        if ((VAR_16 = FUNC_4(VAR_5, VAR_7)) < 0)
            return VAR_16;
        FUNC_6(VAR_5->data, VAR_6, VAR_7);
        VAR_5->stream_index = VAR_14->index;
    } else {
        return FUNC_0(VAR_2);
    }


    FUNC_5(VAR_4, VAR_5, VAR_15);

    return VAR_16;
}
