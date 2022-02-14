
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FailingMuxerPacketData ;
typedef int AVPacket ;
typedef int AVFormatContext ;
typedef int AVDictionary ;


 char* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int *,int const*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_1, AVDictionary **VAR_2,
                             const FailingMuxerPacketData *VAR_3)
{
    int VAR_4 = 0, VAR_5;
    AVPacket VAR_6;

    FUNC_1(&VAR_6);


    VAR_4 = FUNC_5(VAR_1, VAR_2);
    if (VAR_4) {
        FUNC_6(VAR_0, "Unexpected write_header failure: %s\n",
                FUNC_0(VAR_4));
        goto fail;
    }

    for (VAR_5 = 0; VAR_5 < 15; VAR_5++ ) {
        VAR_4 = FUNC_7(&VAR_6, VAR_3, VAR_5);
        if (VAR_4 < 0) {
            FUNC_6(VAR_0, "Failed to prepare test packet: %s\n",
                    FUNC_0(VAR_4));
            goto write_trailer_and_fail;
        }
        VAR_4 = FUNC_3(VAR_1, &VAR_6);
        FUNC_2(&VAR_6);
        if (VAR_4 < 0) {
            FUNC_6(VAR_0, "Unexpected write_frame error: %s\n",
                    FUNC_0(VAR_4));
            goto write_trailer_and_fail;
        }
    }

    VAR_4 = FUNC_3(VAR_1, ((void*)0));
    if (VAR_4 < 0) {
        FUNC_6(VAR_0, "Unexpected write_frame error during flushing: %s\n",
                FUNC_0(VAR_4));
        goto write_trailer_and_fail;
    }

    VAR_4 = FUNC_4(VAR_1);
    if (VAR_4 < 0) {
        FUNC_6(VAR_0, "Unexpected write_trailer error during flushing: %s\n",
                FUNC_0(VAR_4));
        goto fail;
    }

    return VAR_4;
write_trailer_and_fail:
    FUNC_4(VAR_1);
fail:
    return VAR_4;
}
