
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int filename ;
typedef int command ;
struct TYPE_13__ {char* filename; TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_15__ {int nb_streamid; int * nb_prev_pkt; int * prev_pkt; int out_chunk_size; int stream; int state; } ;
struct TYPE_14__ {int size; int * data; int member_0; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMPContext ;
typedef int GetByteContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,double*) ;
 int FUNC_5 (int *,char*,int,int*) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int **,double) ;
 int FUNC_8 (int **,char*) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,TYPE_2__*,int ,int *,int *) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,TYPE_2__*,char*,char*) ;

__attribute__((used)) static int FUNC_16(URLContext *VAR_9, RTMPPacket *VAR_10)
{
    RTMPContext *VAR_11 = VAR_9->priv_data;
    double VAR_12;
    char VAR_13[128];
    char VAR_14[64];
    int VAR_15;
    char *VAR_16;
    const uint8_t *VAR_17 = VAR_10->data;
    uint8_t *VAR_18 = ((void*)0);
    RTMPPacket VAR_19 = { 0 };
    GetByteContext VAR_20;
    int VAR_21;

    FUNC_2(&VAR_20, VAR_17, VAR_10->size);
    if (FUNC_5(&VAR_20, VAR_14, sizeof(VAR_14),
                           &VAR_15)) {
        FUNC_1(VAR_9, VAR_1, "Error in PT_INVOKE\n");
        return VAR_0;
    }

    VAR_21 = FUNC_4(&VAR_20, &VAR_12);
    if (VAR_21)
        return VAR_21;
    VAR_21 = FUNC_3(&VAR_20);
    if (VAR_21)
        return VAR_21;
    if (!FUNC_12(VAR_14, "FCPublish") ||
        !FUNC_12(VAR_14, "publish")) {
        VAR_21 = FUNC_5(&VAR_20, VAR_13,
                                 sizeof(VAR_13), &VAR_15);
        if (VAR_21) {
            if (VAR_21 == FUNC_0(VAR_3))
                FUNC_1(VAR_9, VAR_1, "Unable to parse stream name - name too long?\n");
            else
                FUNC_1(VAR_9, VAR_1, "Unable to parse stream name\n");
            return VAR_21;
        }

        if (VAR_9->filename) {
            VAR_16 = FUNC_13(VAR_9->filename, '/');
            if (!VAR_16) {
                FUNC_1(VAR_9, VAR_2,
                       "Unable to find / in url %s, bad format\n",
                       VAR_9->filename);
                VAR_16 = VAR_9->filename;
            }
            VAR_16++;
            if (FUNC_12(VAR_16, VAR_13))
                FUNC_1(VAR_9, VAR_2, "Unexpected stream %s, expecting"
                       " %s\n", VAR_13, VAR_16);
        }
        VAR_11->state = VAR_7;
    }

    if (!FUNC_12(VAR_14, "FCPublish")) {
        if ((VAR_21 = FUNC_9(&VAR_19, VAR_6,
                                         VAR_5, 0,
                                         VAR_4)) < 0) {
            FUNC_1(VAR_9, VAR_1, "Unable to create response packet\n");
            return VAR_21;
        }
        VAR_18 = VAR_19.data;
        FUNC_8(&VAR_18, "onFCPublish");
    } else if (!FUNC_12(VAR_14, "publish")) {
        VAR_21 = FUNC_14(VAR_9);
        if (VAR_21 < 0)
            return VAR_21;


        return FUNC_15(VAR_9, VAR_10, "NetStream.Publish.Start",
                           VAR_13);
    } else if (!FUNC_12(VAR_14, "play")) {
        VAR_21 = FUNC_14(VAR_9);
        if (VAR_21 < 0)
            return VAR_21;
        VAR_11->state = VAR_8;
        return FUNC_15(VAR_9, VAR_10, "NetStream.Play.Start",
                            VAR_13);
    } else {
        if ((VAR_21 = FUNC_9(&VAR_19, VAR_6,
                                         VAR_5, 0,
                                         VAR_4)) < 0) {
            FUNC_1(VAR_9, VAR_1, "Unable to create response packet\n");
            return VAR_21;
        }
        VAR_18 = VAR_19.data;
        FUNC_8(&VAR_18, "_result");
        FUNC_7(&VAR_18, VAR_12);
        FUNC_6(&VAR_18);
        if (!FUNC_12(VAR_14, "createStream")) {
            VAR_11->nb_streamid++;
            if (VAR_11->nb_streamid == 0 || VAR_11->nb_streamid == 2)
                VAR_11->nb_streamid++;
            FUNC_7(&VAR_18, VAR_11->nb_streamid);



        }
    }
    VAR_19.size = VAR_18 - VAR_19.data;
    VAR_21 = FUNC_11(VAR_11->stream, &VAR_19, VAR_11->out_chunk_size,
                               &VAR_11->prev_pkt[1], &VAR_11->nb_prev_pkt[1]);
    FUNC_10(&VAR_19);
    return VAR_21;
}
