
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int64_t ;
typedef int int16_t ;
struct TYPE_12__ {int time_base; } ;
struct TYPE_11__ {scalar_t__ prev_ret; scalar_t__ seq; int queue_size; int queue_len; int ic; int queue; int statistics; TYPE_3__* st; int dynamic_protocol_context; TYPE_1__* handler; } ;
struct TYPE_10__ {int (* parse_packet ) (int ,int ,TYPE_3__*,int *,int *,int *,int ,int ,int) ;} ;
typedef TYPE_2__ RTPDemuxContext ;
typedef int AVPacket ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int*,int) ;
 int FUNC_7 (TYPE_2__*,int *,int ) ;
 int FUNC_8 (TYPE_2__*,int*,int) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int *,int*,int) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (int ,int ,TYPE_3__*,int *,int *,int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_13(RTPDemuxContext *VAR_4, AVPacket *VAR_5,
                                uint8_t **VAR_6, int VAR_7)
{
    uint8_t *VAR_8 = VAR_6 ? *VAR_6 : ((void*)0);
    int VAR_9 = 0;
    uint32_t VAR_10;
    int VAR_11 = 0;

    if (!VAR_8) {



        if (VAR_4->prev_ret <= 0)
            return FUNC_11(VAR_4, VAR_5);

        if (VAR_4->handler && VAR_4->handler->parse_packet) {


            VAR_10 = VAR_2;
            VAR_11 = VAR_4->handler->parse_packet(VAR_4->ic, VAR_4->dynamic_protocol_context,
                                                 VAR_4->st, VAR_5, &VAR_10, ((void*)0), 0, 0,
                                                 VAR_9);
            FUNC_7(VAR_4, VAR_5, VAR_10);
            return VAR_11;
        }
    }

    if (VAR_7 < 12)
        return -1;

    if ((VAR_8[0] & 0xc0) != (VAR_3 << 6))
        return -1;
    if (FUNC_2(VAR_8[1])) {
        return FUNC_8(VAR_4, VAR_8, VAR_7);
    }

    if (VAR_4->st) {
        int64_t VAR_12 = FUNC_3();
        uint32_t VAR_13 = FUNC_5(VAR_12, VAR_1,
                                           VAR_4->st->time_base);
        VAR_10 = FUNC_1(VAR_8 + 4);


        FUNC_9(&VAR_4->statistics, VAR_10, VAR_13);
    }

    if ((VAR_4->seq == 0 && !VAR_4->queue) || VAR_4->queue_size <= 1) {

        return FUNC_10(VAR_4, VAR_5, VAR_8, VAR_7);
    } else {
        uint16_t VAR_14 = FUNC_0(VAR_8 + 2);
        int16_t VAR_15 = VAR_14 - VAR_4->seq;
        if (VAR_15 < 0) {

            FUNC_4(VAR_4->ic, VAR_0,
                   "RTP: dropping old packet received too late\n");
            return -1;
        } else if (VAR_15 <= 1) {

            VAR_11 = FUNC_10(VAR_4, VAR_5, VAR_8, VAR_7);
            return VAR_11;
        } else {

            VAR_11 = FUNC_6(VAR_4, VAR_8, VAR_7);
            if (VAR_11 < 0)
                return VAR_11;
            *VAR_6 = ((void*)0);


            if (VAR_4->queue_len >= VAR_4->queue_size) {
                FUNC_4(VAR_4->ic, VAR_0, "jitter buffer full\n");
                return FUNC_11(VAR_4, VAR_5);
            }
            return -1;
        }
    }
}
