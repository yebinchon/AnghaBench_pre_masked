
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVPacket ;
typedef int AVFrame ;
typedef int AVFormatContext ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(AVFrame *VAR_3,
                              AVFormatContext *VAR_4,
                              AVCodecContext *VAR_5,
                              int *VAR_6, int *VAR_7)
{

    AVPacket VAR_8;
    int VAR_9;
    FUNC_7(&VAR_8);


    if ((VAR_9 = FUNC_3(VAR_4, &VAR_8)) < 0) {

        if (VAR_9 == VAR_0)
            *VAR_7 = 1;
        else {
            FUNC_6(VAR_2, "Could not read frame (error '%s')\n",
                    FUNC_1(VAR_9));
            return VAR_9;
        }
    }



    if ((VAR_9 = FUNC_5(VAR_5, &VAR_8)) < 0) {
        FUNC_6(VAR_2, "Could not send packet for decoding (error '%s')\n",
                FUNC_1(VAR_9));
        return VAR_9;
    }


    VAR_9 = FUNC_4(VAR_5, VAR_3);


    if (VAR_9 == FUNC_0(VAR_1)) {
        VAR_9 = 0;
        goto cleanup;

    } else if (VAR_9 == VAR_0) {
        *VAR_7 = 1;
        VAR_9 = 0;
        goto cleanup;
    } else if (VAR_9 < 0) {
        FUNC_6(VAR_2, "Could not decode frame (error '%s')\n",
                FUNC_1(VAR_9));
        goto cleanup;

    } else {
        *VAR_6 = 1;
        goto cleanup;
    }

cleanup:
    FUNC_2(&VAR_8);
    return VAR_9;
}
