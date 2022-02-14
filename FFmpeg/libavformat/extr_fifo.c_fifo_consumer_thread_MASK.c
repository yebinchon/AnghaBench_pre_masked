
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {TYPE_4__* priv_data; } ;
struct TYPE_17__ {int write_trailer_ret; int overflow_flag_lock; scalar_t__ overflow_flag; scalar_t__ restart_with_keyframe; int * queue; } ;
struct TYPE_14__ {int member_0; } ;
struct TYPE_16__ {TYPE_1__ member_1; int member_0; } ;
struct TYPE_15__ {scalar_t__ recovery_nr; int drop_until_keyframe; TYPE_5__* avf; } ;
typedef TYPE_2__ FifoThreadContext ;
typedef TYPE_3__ FifoMessage ;
typedef TYPE_4__ FifoContext ;
typedef int AVThreadMessageQueue ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void *FUNC_10(void *VAR_2)
{
    AVFormatContext *VAR_3 = VAR_2;
    FifoContext *VAR_4 = VAR_3->priv_data;
    AVThreadMessageQueue *VAR_5 = VAR_4->queue;
    FifoMessage VAR_6 = {VAR_1, 0};
    int VAR_7;

    FifoThreadContext VAR_8;
    FUNC_7(&VAR_8, 0, sizeof(FifoThreadContext));
    VAR_8.avf = VAR_3;

    while (1) {
        uint8_t VAR_9 = 0;

        if (!VAR_8.recovery_nr)
            VAR_7 = FUNC_4(&VAR_8, &VAR_6);

        if (VAR_7 < 0 || VAR_8.recovery_nr > 0) {
            int VAR_10 = FUNC_5(&VAR_8, &VAR_6, VAR_7);
            if (VAR_10 < 0) {
                FUNC_3(VAR_5, VAR_10);
                break;
            }
        }






        FUNC_8(&VAR_4->overflow_flag_lock);
        if (VAR_4->overflow_flag) {
            FUNC_1(VAR_5);
            if (VAR_4->restart_with_keyframe)
                VAR_8.drop_until_keyframe = 1;
            VAR_4->overflow_flag = 0;
            VAR_9 = 1;
        }
        FUNC_9(&VAR_4->overflow_flag_lock);

        if (VAR_9)
            FUNC_0(VAR_3, VAR_0, "FIFO queue flushed\n");

        VAR_7 = FUNC_2(VAR_5, &VAR_6, 0);
        if (VAR_7 < 0) {
            FUNC_3(VAR_5, VAR_7);
            break;
        }
    }

    VAR_4->write_trailer_ret = FUNC_6(&VAR_8);

    return ((void*)0);
}
