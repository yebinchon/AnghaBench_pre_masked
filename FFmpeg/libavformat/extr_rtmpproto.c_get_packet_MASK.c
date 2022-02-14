
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_21__ {scalar_t__ state; scalar_t__ bytes_read; scalar_t__ last_bytes_read; scalar_t__ receive_report_size; int is_input; scalar_t__ do_reconnect; scalar_t__ last_timestamp; int * nb_prev_pkt; int * prev_pkt; int in_chunk_size; int stream; } ;
struct TYPE_20__ {scalar_t__ type; int size; scalar_t__ timestamp; int member_0; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*,int ,int *,int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_14, int VAR_15)
{
    RTMPContext *VAR_16 = VAR_14->priv_data;
    int VAR_17;

    if (VAR_16->state == VAR_13)
        return VAR_0;

    for (;;) {
        RTMPPacket VAR_18 = { 0 };
        if ((VAR_17 = FUNC_4(VAR_16->stream, &VAR_18,
                                       VAR_16->in_chunk_size, &VAR_16->prev_pkt[0],
                                       &VAR_16->nb_prev_pkt[0])) <= 0) {
            if (VAR_17 == 0) {
                return FUNC_0(VAR_2);
            } else {
                return FUNC_0(VAR_3);
            }
        }


        VAR_16->last_timestamp = VAR_18.timestamp;

        VAR_16->bytes_read += VAR_17;
        if (VAR_16->bytes_read - VAR_16->last_bytes_read > VAR_16->receive_report_size) {
            FUNC_2(VAR_14, VAR_1, "Sending bytes read report\n");
            if ((VAR_17 = FUNC_5(VAR_14, VAR_16, VAR_18.timestamp + 1)) < 0) {
                FUNC_3(&VAR_18);
                return VAR_17;
            }
            VAR_16->last_bytes_read = VAR_16->bytes_read;
        }

        VAR_17 = FUNC_8(VAR_14, VAR_16, &VAR_18);




        if (VAR_16->state == VAR_11) {
            FUNC_3(&VAR_18);


            continue;
        }

        if (VAR_17 < 0) {
            FUNC_3(&VAR_18);
            return VAR_17;
        }
        if (VAR_16->do_reconnect && VAR_15) {
            FUNC_3(&VAR_18);
            return 0;
        }
        if (VAR_16->state == VAR_13) {
            FUNC_3(&VAR_18);
            return VAR_0;
        }
        if (VAR_15 && (VAR_16->state == VAR_8 ||
                           VAR_16->state == VAR_9 ||
                           VAR_16->state == VAR_12 ||
                           VAR_16->state == VAR_10)) {
            FUNC_3(&VAR_18);
            return 0;
        }
        if (!VAR_18.size || !VAR_16->is_input) {
            FUNC_3(&VAR_18);
            continue;
        }
        if (VAR_18.type == VAR_7 || VAR_18.type == VAR_4) {
            VAR_17 = FUNC_1(VAR_16, &VAR_18, 0);
            FUNC_3(&VAR_18);
            return VAR_17;
        } else if (VAR_18.type == VAR_6) {
            VAR_17 = FUNC_7(VAR_14, &VAR_18);
            FUNC_3(&VAR_18);
            return VAR_17;
        } else if (VAR_18.type == VAR_5) {
            VAR_17 = FUNC_6(VAR_16, &VAR_18);
            FUNC_3(&VAR_18);
            return VAR_17;
        }
        FUNC_3(&VAR_18);
    }
}
