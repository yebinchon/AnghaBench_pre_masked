
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int nb_samples; scalar_t__ extended_data; } ;
typedef int SwrContext ;
typedef TYPE_1__ AVFrame ;
typedef int AVFormatContext ;
typedef int AVCodecContext ;
typedef int AVAudioFifo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int **,int ) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int const**,int **,int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int *,int*,int*) ;
 int FUNC_5 (int **) ;
 scalar_t__ FUNC_6 (int ***,int *,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__**) ;

__attribute__((used)) static int FUNC_8(AVAudioFifo *VAR_1,
                                         AVFormatContext *VAR_2,
                                         AVCodecContext *VAR_3,
                                         AVCodecContext *VAR_4,
                                         SwrContext *VAR_5,
                                         int *VAR_6)
{

    AVFrame *VAR_7 = ((void*)0);

    uint8_t **VAR_8 = ((void*)0);
    int VAR_9 = 0;
    int VAR_10 = VAR_0;


    if (FUNC_7(&VAR_7))
        goto cleanup;

    if (FUNC_4(VAR_7, VAR_2,
                           VAR_3, &VAR_9, VAR_6))
        goto cleanup;



    if (*VAR_6) {
        VAR_10 = 0;
        goto cleanup;
    }

    if (VAR_9) {

        if (FUNC_6(&VAR_8, VAR_4,
                                   VAR_7->nb_samples))
            goto cleanup;



        if (FUNC_3((const uint8_t**)VAR_7->extended_data, VAR_8,
                            VAR_7->nb_samples, VAR_5))
            goto cleanup;


        if (FUNC_0(VAR_1, VAR_8,
                                VAR_7->nb_samples))
            goto cleanup;
        VAR_10 = 0;
    }
    VAR_10 = 0;

cleanup:
    if (VAR_8) {
        FUNC_2(&VAR_8[0]);
        FUNC_5(VAR_8);
    }
    FUNC_1(&VAR_7);

    return VAR_10;
}
