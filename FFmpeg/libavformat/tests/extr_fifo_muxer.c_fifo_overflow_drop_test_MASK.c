
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int FailingMuxerPacketData ;
typedef int AVPacket ;
typedef int AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int *,int const*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_3, AVDictionary **VAR_4,
                                   const FailingMuxerPacketData *VAR_5)
{
    int VAR_6 = 0, VAR_7;
    int64_t VAR_8, VAR_9, VAR_10;
    AVPacket VAR_11;

    FUNC_2(&VAR_11);

    VAR_6 = FUNC_6(VAR_3, VAR_4);
    if (VAR_6) {
        FUNC_7(VAR_2, "Unexpected write_header failure: %s\n",
                FUNC_0(VAR_6));
        return VAR_6;
    }

    VAR_8 = FUNC_1();
    for (VAR_7 = 0; VAR_7 < 6; VAR_7++ ) {
        VAR_6 = FUNC_8(&VAR_11, VAR_5, VAR_7);
        if (VAR_6 < 0) {
            FUNC_7(VAR_2, "Failed to prepare test packet: %s\n",
                    FUNC_0(VAR_6));
            goto fail;
        }
        VAR_6 = FUNC_4(VAR_3, &VAR_11);
        FUNC_3(&VAR_11);
        if (VAR_6 < 0) {
            break;
        }
    }
    VAR_9 = FUNC_1();
    VAR_10 = VAR_9 - VAR_8;
    if (VAR_10 > (VAR_1*6)/2) {
        FUNC_7(VAR_2, "Writing packets to fifo muxer took too much time while testing"
                        "buffer overflow with drop_pkts_on_overflow was on.\n");
        VAR_6 = VAR_0;
        goto fail;
    }

    if (VAR_6) {
        FUNC_7(VAR_2, "Unexpected write_packet error: %s\n", FUNC_0(VAR_6));
        goto fail;
    }

    VAR_6 = FUNC_5(VAR_3);
    if (VAR_6 < 0)
        FUNC_7(VAR_2, "Unexpected write_trailer error: %s\n", FUNC_0(VAR_6));

    return VAR_6;
fail:
    FUNC_5(VAR_3);
    return VAR_6;
}
