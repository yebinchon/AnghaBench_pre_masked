
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ stream_index; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;
 char* FUNC_3 (int) ;
 int * FUNC_4 () ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_16 (int ,char*,char*,...) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 char* VAR_11 ;
 int FUNC_20 (int *) ;
 int VAR_12 ;

int FUNC_21(int VAR_13, char **VAR_14)
{
    int VAR_15;
    AVPacket VAR_16;
    AVFrame *VAR_17 = FUNC_4();
    AVFrame *VAR_18 = FUNC_4();

    if (!VAR_17 || !VAR_18) {
        FUNC_19("Could not allocate frame");
        FUNC_15(1);
    }
    if (VAR_13 != 2) {
        FUNC_16(VAR_12, "Usage: %s file | %s\n", VAR_14[0], VAR_11);
        FUNC_15(1);
    }

    if ((VAR_15 = FUNC_18(VAR_14[1])) < 0)
        goto end;
    if ((VAR_15 = FUNC_17(VAR_8)) < 0)
        goto end;


    while (1) {
        if ((VAR_15 = FUNC_9(VAR_10, &VAR_16)) < 0)
            break;

        if (VAR_16.stream_index == VAR_4) {
            VAR_15 = FUNC_12(VAR_7, &VAR_16);
            if (VAR_15 < 0) {
                FUNC_7(((void*)0), VAR_2, "Error while sending a packet to the decoder\n");
                break;
            }

            while (VAR_15 >= 0) {
                VAR_15 = FUNC_11(VAR_7, VAR_17);
                if (VAR_15 == FUNC_0(VAR_3) || VAR_15 == VAR_0) {
                    break;
                } else if (VAR_15 < 0) {
                    FUNC_7(((void*)0), VAR_2, "Error while receiving a frame from the decoder\n");
                    goto end;
                }

                if (VAR_15 >= 0) {

                    if (FUNC_2(VAR_6, VAR_17, VAR_1) < 0) {
                        FUNC_7(((void*)0), VAR_2, "Error while feeding the audio filtergraph\n");
                        break;
                    }


                    while (1) {
                        VAR_15 = FUNC_1(VAR_5, VAR_18);
                        if (VAR_15 == FUNC_0(VAR_3) || VAR_15 == VAR_0)
                            break;
                        if (VAR_15 < 0)
                            goto end;
                        FUNC_20(VAR_18);
                        FUNC_6(VAR_18);
                    }
                    FUNC_6(VAR_17);
                }
            }
        }
        FUNC_8(&VAR_16);
    }
end:
    FUNC_13(&VAR_9);
    FUNC_10(&VAR_7);
    FUNC_14(&VAR_10);
    FUNC_5(&VAR_17);
    FUNC_5(&VAR_18);

    if (VAR_15 < 0 && VAR_15 != VAR_0) {
        FUNC_16(VAR_12, "Error occurred: %s\n", FUNC_3(VAR_15));
        FUNC_15(1);
    }

    FUNC_15(0);
}
