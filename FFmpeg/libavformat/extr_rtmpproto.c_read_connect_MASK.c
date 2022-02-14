
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef char uint8_t ;
typedef int tmpstr ;
typedef int command ;
typedef int URLContext ;
struct TYPE_19__ {scalar_t__ buffer; } ;
struct TYPE_18__ {char* app; int * nb_prev_pkt; int * prev_pkt; int out_chunk_size; int stream; int max_sent_unacked; int in_chunk_size; } ;
struct TYPE_17__ {scalar_t__ type; char* data; int size; int member_0; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMPContext ;
typedef TYPE_3__ GetByteContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int ,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,char const*,int) ;
 int FUNC_3 (char**,int ) ;
 int FUNC_4 (char**,int ) ;
 int FUNC_5 (char**,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,char*,char*,int) ;
 int FUNC_7 (TYPE_3__*,double*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,char*,int,int*) ;
 int FUNC_9 (char**,char*) ;
 int FUNC_10 (char**) ;
 int FUNC_11 (char**,int) ;
 int FUNC_12 (char**) ;
 int FUNC_13 (char**) ;
 int FUNC_14 (char**,char*) ;
 int FUNC_15 (TYPE_1__*,int ,scalar_t__,int ,int) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *,TYPE_1__*) ;
 int FUNC_18 (int ,TYPE_1__*,int ,int *,int *) ;
 int FUNC_19 (int ,TYPE_1__*,int ,int *,int *) ;
 int FUNC_20 (int *,TYPE_1__*) ;
 int FUNC_21 (int *,TYPE_1__*) ;
 int FUNC_22 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_23 (char*,char*) ;

__attribute__((used)) static int FUNC_24(URLContext *VAR_15, RTMPContext *VAR_16)
{
    RTMPPacket VAR_17 = { 0 };
    uint8_t *VAR_18;
    const uint8_t *VAR_19;
    int VAR_20;
    char VAR_21[64];
    int VAR_22;
    double VAR_23;
    uint8_t VAR_24[256];
    GetByteContext VAR_25;


    for (;;) {
        if ((VAR_20 = FUNC_18(VAR_16->stream, &VAR_17, VAR_16->in_chunk_size,
                                       &VAR_16->prev_pkt[0], &VAR_16->nb_prev_pkt[0])) < 0)
            return VAR_20;



        if (VAR_17.type == VAR_9) {
            if ((VAR_20 = FUNC_20(VAR_15, &VAR_17)) < 0) {
                FUNC_16(&VAR_17);
                return VAR_20;
            }
        } else if (VAR_17.type == VAR_5) {
            FUNC_0(VAR_15, VAR_2, "received abort message\n");
            FUNC_16(&VAR_17);
            return VAR_1;
        } else if (VAR_17.type == VAR_8) {
            FUNC_0(VAR_15, VAR_3, "received acknowledgement\n");
        } else if (VAR_17.type == VAR_13) {
            if ((VAR_20 = FUNC_22(VAR_15, &VAR_17)) < 0) {
                FUNC_16(&VAR_17);
                return VAR_20;
            }
        } else if (VAR_17.type == VAR_11) {
            if ((VAR_20 = FUNC_21(VAR_15, &VAR_17)) < 0) {
                FUNC_16(&VAR_17);
                return VAR_20;
            }
        } else if (VAR_17.type == VAR_10) {

            break;
        } else {
            FUNC_0(VAR_15, VAR_2, "Unknown control message type (%d)\n", VAR_17.type);
        }
        FUNC_16(&VAR_17);
    }

    VAR_19 = VAR_17.data;
    FUNC_2(&VAR_25, VAR_19, VAR_17.size);
    if (FUNC_8(&VAR_25, VAR_21, sizeof(VAR_21), &VAR_22)) {
        FUNC_0(VAR_15, VAR_2, "Unable to read command string\n");
        FUNC_16(&VAR_17);
        return VAR_0;
    }
    if (FUNC_23(VAR_21, "connect")) {
        FUNC_0(VAR_15, VAR_2, "Expecting connect, got %s\n", VAR_21);
        FUNC_16(&VAR_17);
        return VAR_0;
    }
    VAR_20 = FUNC_7(&VAR_25, &VAR_23);
    if (VAR_20)
        FUNC_0(VAR_15, VAR_4, "SeqNum not found\n");

    VAR_20 = FUNC_6(VAR_25.buffer,
                                 VAR_25.buffer + FUNC_1(&VAR_25),
                                 "app", VAR_24, sizeof(VAR_24));
    if (VAR_20)
        FUNC_0(VAR_15, VAR_4, "App field not found in connect\n");
    if (!VAR_20 && FUNC_23(VAR_24, VAR_16->app))
        FUNC_0(VAR_15, VAR_4, "App field don't match up: %s <-> %s\n",
               VAR_24, VAR_16->app);
    FUNC_16(&VAR_17);


    if ((VAR_20 = FUNC_15(&VAR_17, VAR_6,
                                     VAR_13, 0, 4)) < 0)
        return VAR_20;
    VAR_18 = VAR_17.data;


    FUNC_4(&VAR_18, VAR_16->max_sent_unacked);
    VAR_17.size = VAR_18 - VAR_17.data;
    VAR_20 = FUNC_19(VAR_16->stream, &VAR_17, VAR_16->out_chunk_size,
                               &VAR_16->prev_pkt[1], &VAR_16->nb_prev_pkt[1]);
    FUNC_16(&VAR_17);
    if (VAR_20 < 0)
        return VAR_20;

    if ((VAR_20 = FUNC_15(&VAR_17, VAR_6,
                                     VAR_11, 0, 5)) < 0)
        return VAR_20;
    VAR_18 = VAR_17.data;


    FUNC_4(&VAR_18, VAR_16->max_sent_unacked);
    FUNC_5(&VAR_18, 2);
    VAR_17.size = VAR_18 - VAR_17.data;
    VAR_20 = FUNC_19(VAR_16->stream, &VAR_17, VAR_16->out_chunk_size,
                               &VAR_16->prev_pkt[1], &VAR_16->nb_prev_pkt[1]);
    FUNC_16(&VAR_17);
    if (VAR_20 < 0)
        return VAR_20;


    if ((VAR_20 = FUNC_15(&VAR_17, VAR_6,
                                     VAR_12, 0, 6)) < 0)
        return VAR_20;

    VAR_18 = VAR_17.data;
    FUNC_3(&VAR_18, 0);
    FUNC_4(&VAR_18, 0);
    VAR_20 = FUNC_19(VAR_16->stream, &VAR_17, VAR_16->out_chunk_size,
                               &VAR_16->prev_pkt[1], &VAR_16->nb_prev_pkt[1]);
    FUNC_16(&VAR_17);
    if (VAR_20 < 0)
        return VAR_20;


    if ((VAR_20 = FUNC_15(&VAR_17, VAR_6,
                                     VAR_9, 0, 4)) < 0)
        return VAR_20;

    VAR_18 = VAR_17.data;
    FUNC_4(&VAR_18, VAR_16->out_chunk_size);
    VAR_20 = FUNC_19(VAR_16->stream, &VAR_17, VAR_16->out_chunk_size,
                               &VAR_16->prev_pkt[1], &VAR_16->nb_prev_pkt[1]);
    FUNC_16(&VAR_17);
    if (VAR_20 < 0)
        return VAR_20;


    if ((VAR_20 = FUNC_15(&VAR_17, VAR_14,
                                     VAR_10, 0,
                                     VAR_7)) < 0)
        return VAR_20;

    VAR_18 = VAR_17.data;
    FUNC_14(&VAR_18, "_result");
    FUNC_11(&VAR_18, VAR_23);

    FUNC_13(&VAR_18);
    FUNC_9(&VAR_18, "fmsVer");
    FUNC_14(&VAR_18, "FMS/3,0,1,123");
    FUNC_9(&VAR_18, "capabilities");
    FUNC_11(&VAR_18, 31);
    FUNC_12(&VAR_18);

    FUNC_13(&VAR_18);
    FUNC_9(&VAR_18, "level");
    FUNC_14(&VAR_18, "status");
    FUNC_9(&VAR_18, "code");
    FUNC_14(&VAR_18, "NetConnection.Connect.Success");
    FUNC_9(&VAR_18, "description");
    FUNC_14(&VAR_18, "Connection succeeded.");
    FUNC_9(&VAR_18, "objectEncoding");
    FUNC_11(&VAR_18, 0);
    FUNC_12(&VAR_18);

    VAR_17.size = VAR_18 - VAR_17.data;
    VAR_20 = FUNC_19(VAR_16->stream, &VAR_17, VAR_16->out_chunk_size,
                               &VAR_16->prev_pkt[1], &VAR_16->nb_prev_pkt[1]);
    FUNC_16(&VAR_17);
    if (VAR_20 < 0)
        return VAR_20;

    if ((VAR_20 = FUNC_15(&VAR_17, VAR_14,
                                     VAR_10, 0, 30)) < 0)
        return VAR_20;
    VAR_18 = VAR_17.data;
    FUNC_14(&VAR_18, "onBWDone");
    FUNC_11(&VAR_18, 0);
    FUNC_10(&VAR_18);
    FUNC_11(&VAR_18, 8192);
    VAR_17.size = VAR_18 - VAR_17.data;
    VAR_20 = FUNC_19(VAR_16->stream, &VAR_17, VAR_16->out_chunk_size,
                               &VAR_16->prev_pkt[1], &VAR_16->nb_prev_pkt[1]);
    FUNC_16(&VAR_17);

    return VAR_20;
}
