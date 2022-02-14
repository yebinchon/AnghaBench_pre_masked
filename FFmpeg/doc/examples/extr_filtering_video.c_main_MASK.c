
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_1__** inputs; } ;
struct TYPE_18__ {int best_effort_timestamp; int pts; } ;
struct TYPE_17__ {scalar_t__ stream_index; } ;
struct TYPE_16__ {int time_base; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,int ) ;
 char* FUNC_3 (int) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (TYPE_3__**) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,TYPE_3__*) ;
 int FUNC_12 (int ,TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 TYPE_5__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (int ,char*,char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

int FUNC_21(int VAR_12, char **VAR_13)
{
    int VAR_14;
    AVPacket VAR_15;
    AVFrame *VAR_16;
    AVFrame *VAR_17;

    if (VAR_12 != 2) {
        FUNC_17(VAR_10, "Usage: %s file\n", VAR_13[0]);
        FUNC_16(1);
    }

    VAR_16 = FUNC_4();
    VAR_17 = FUNC_4();
    if (!VAR_16 || !VAR_17) {
        FUNC_20("Could not allocate frame");
        FUNC_16(1);
    }

    if ((VAR_14 = FUNC_19(VAR_13[1])) < 0)
        goto end;
    if ((VAR_14 = FUNC_18(VAR_7)) < 0)
        goto end;


    while (1) {
        if ((VAR_14 = FUNC_9(VAR_9, &VAR_15)) < 0)
            break;

        if (VAR_15.stream_index == VAR_11) {
            VAR_14 = FUNC_12(VAR_6, &VAR_15);
            if (VAR_14 < 0) {
                FUNC_7(((void*)0), VAR_2, "Error while sending a packet to the decoder\n");
                break;
            }

            while (VAR_14 >= 0) {
                VAR_14 = FUNC_11(VAR_6, VAR_16);
                if (VAR_14 == FUNC_0(VAR_3) || VAR_14 == VAR_0) {
                    break;
                } else if (VAR_14 < 0) {
                    FUNC_7(((void*)0), VAR_2, "Error while receiving a frame from the decoder\n");
                    goto end;
                }

                VAR_16->pts = VAR_16->best_effort_timestamp;


                if (FUNC_2(VAR_5, VAR_16, VAR_1) < 0) {
                    FUNC_7(((void*)0), VAR_2, "Error while feeding the filtergraph\n");
                    break;
                }


                while (1) {
                    VAR_14 = FUNC_1(VAR_4, VAR_17);
                    if (VAR_14 == FUNC_0(VAR_3) || VAR_14 == VAR_0)
                        break;
                    if (VAR_14 < 0)
                        goto end;
                    FUNC_15(VAR_17, VAR_4->inputs[0]->time_base);
                    FUNC_6(VAR_17);
                }
                FUNC_6(VAR_16);
            }
        }
        FUNC_8(&VAR_15);
    }
end:
    FUNC_13(&VAR_8);
    FUNC_10(&VAR_6);
    FUNC_14(&VAR_9);
    FUNC_5(&VAR_16);
    FUNC_5(&VAR_17);

    if (VAR_14 < 0 && VAR_14 != VAR_0) {
        FUNC_17(VAR_10, "Error occurred: %s\n", FUNC_3(VAR_14));
        FUNC_16(1);
    }

    FUNC_16(0);
}
