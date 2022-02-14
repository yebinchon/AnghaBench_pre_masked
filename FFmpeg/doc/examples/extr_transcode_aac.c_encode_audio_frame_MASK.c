
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nb_samples; int pts; } ;
typedef int AVPacket ;
typedef TYPE_1__ AVFrame ;
typedef int AVFormatContext ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(AVFrame *VAR_4,
                              AVFormatContext *VAR_5,
                              AVCodecContext *VAR_6,
                              int *VAR_7)
{

    AVPacket VAR_8;
    int VAR_9;
    FUNC_7(&VAR_8);


    if (VAR_4) {
        VAR_4->pts = VAR_2;
        VAR_2 += VAR_4->nb_samples;
    }



    VAR_9 = FUNC_5(VAR_6, VAR_4);

    if (VAR_9 == VAR_0) {
        VAR_9 = 0;
        goto cleanup;
    } else if (VAR_9 < 0) {
        FUNC_6(VAR_3, "Could not send packet for encoding (error '%s')\n",
                FUNC_1(VAR_9));
        return VAR_9;
    }


    VAR_9 = FUNC_4(VAR_6, &VAR_8);


    if (VAR_9 == FUNC_0(VAR_1)) {
        VAR_9 = 0;
        goto cleanup;

    } else if (VAR_9 == VAR_0) {
        VAR_9 = 0;
        goto cleanup;
    } else if (VAR_9 < 0) {
        FUNC_6(VAR_3, "Could not encode frame (error '%s')\n",
                FUNC_1(VAR_9));
        goto cleanup;

    } else {
        *VAR_7 = 1;
    }


    if (*VAR_7 &&
        (VAR_9 = FUNC_3(VAR_5, &VAR_8)) < 0) {
        FUNC_6(VAR_3, "Could not write frame (error '%s')\n",
                FUNC_1(VAR_9));
        goto cleanup;
    }

cleanup:
    FUNC_2(&VAR_8);
    return VAR_9;
}
