
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_24__ {int frame_size; } ;
struct TYPE_23__ {int pb; } ;
typedef int SwrContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVCodecContext ;
typedef int AVAudioFifo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int const FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*,TYPE_2__*,int*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,char*) ;
 scalar_t__ FUNC_9 (int **,TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_2__*,int **) ;
 scalar_t__ FUNC_11 (int *,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_12 (char*,TYPE_1__**,TYPE_2__**) ;
 scalar_t__ FUNC_13 (char*,TYPE_2__*,TYPE_1__**,TYPE_2__**) ;
 scalar_t__ FUNC_14 (int *,TYPE_1__*,TYPE_2__*,TYPE_2__*,int *,int*) ;
 int VAR_1 ;
 int FUNC_15 (int **) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;

int FUNC_18(int VAR_2, char **VAR_3)
{
    AVFormatContext *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    AVCodecContext *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    SwrContext *VAR_8 = ((void*)0);
    AVAudioFifo *VAR_9 = ((void*)0);
    int VAR_10 = VAR_0;

    if (VAR_2 != 3) {
        FUNC_8(VAR_1, "Usage: %s <input file> <output file>\n", VAR_3[0]);
        FUNC_7(1);
    }


    if (FUNC_12(VAR_3[1], &VAR_4,
                        &VAR_6))
        goto cleanup;

    if (FUNC_13(VAR_3[2], VAR_6,
                         &VAR_5, &VAR_7))
        goto cleanup;

    if (FUNC_10(VAR_6, VAR_7,
                       &VAR_8))
        goto cleanup;

    if (FUNC_9(&VAR_9, VAR_7))
        goto cleanup;

    if (FUNC_16(VAR_5))
        goto cleanup;



    while (1) {

        const int VAR_11 = VAR_7->frame_size;
        int VAR_12 = 0;






        while (FUNC_1(VAR_9) < VAR_11) {


            if (FUNC_14(VAR_9, VAR_4,
                                              VAR_6,
                                              VAR_7,
                                              VAR_8, &VAR_12))
                goto cleanup;



            if (VAR_12)
                break;
        }




        while (FUNC_1(VAR_9) >= VAR_11 ||
               (VAR_12 && FUNC_1(VAR_9) > 0))


            if (FUNC_11(VAR_9, VAR_5,
                                      VAR_7))
                goto cleanup;



        if (VAR_12) {
            int VAR_13;

            do {
                VAR_13 = 0;
                if (FUNC_6(((void*)0), VAR_5,
                                       VAR_7, &VAR_13))
                    goto cleanup;
            } while (VAR_13);
            break;
        }
    }


    if (FUNC_17(VAR_5))
        goto cleanup;
    VAR_10 = 0;

cleanup:
    if (VAR_9)
        FUNC_0(VAR_9);
    FUNC_15(&VAR_8);
    if (VAR_7)
        FUNC_2(&VAR_7);
    if (VAR_5) {
        FUNC_5(&VAR_5->pb);
        FUNC_4(VAR_5);
    }
    if (VAR_6)
        FUNC_2(&VAR_6);
    if (VAR_4)
        FUNC_3(&VAR_4);

    return VAR_10;
}
