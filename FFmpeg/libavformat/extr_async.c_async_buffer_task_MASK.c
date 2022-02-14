
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int io_eof_reached; scalar_t__ io_error; int seek_completed; scalar_t__ inner_io_error; int mutex; int cond_wakeup_main; int cond_wakeup_background; scalar_t__ seek_request; scalar_t__ seek_ret; int seek_whence; int seek_pos; int inner; int ring; } ;
typedef int RingBuffer ;
typedef TYPE_2__ Context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,void*,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_10(void *VAR_2)
{
    URLContext *VAR_3 = VAR_2;
    Context *VAR_4 = VAR_3->priv_data;
    RingBuffer *VAR_5 = &VAR_4->ring;
    int VAR_6 = 0;
    int64_t VAR_7;

    while (1) {
        int VAR_8, VAR_9;

        FUNC_5(&VAR_4->mutex);
        if (FUNC_1(VAR_3)) {
            VAR_4->io_eof_reached = 1;
            VAR_4->io_error = VAR_0;
            FUNC_3(&VAR_4->cond_wakeup_main);
            FUNC_6(&VAR_4->mutex);
            break;
        }

        if (VAR_4->seek_request) {
            VAR_7 = FUNC_2(VAR_4->inner, VAR_4->seek_pos, VAR_4->seek_whence);
            if (VAR_7 >= 0) {
                VAR_4->io_eof_reached = 0;
                VAR_4->io_error = 0;
                FUNC_8(VAR_5);
            }

            VAR_4->seek_completed = 1;
            VAR_4->seek_ret = VAR_7;
            VAR_4->seek_request = 0;


            FUNC_3(&VAR_4->cond_wakeup_main);
            FUNC_6(&VAR_4->mutex);
            continue;
        }

        VAR_8 = FUNC_9(VAR_5);
        if (VAR_4->io_eof_reached || VAR_8 <= 0) {
            FUNC_3(&VAR_4->cond_wakeup_main);
            FUNC_4(&VAR_4->cond_wakeup_background, &VAR_4->mutex);
            FUNC_6(&VAR_4->mutex);
            continue;
        }
        FUNC_6(&VAR_4->mutex);

        VAR_9 = FUNC_0(4096, VAR_8);
        VAR_6 = FUNC_7(VAR_5, (void *)VAR_3, VAR_9, VAR_1);

        FUNC_5(&VAR_4->mutex);
        if (VAR_6 <= 0) {
            VAR_4->io_eof_reached = 1;
            if (VAR_4->inner_io_error < 0)
                VAR_4->io_error = VAR_4->inner_io_error;
        }

        FUNC_3(&VAR_4->cond_wakeup_main);
        FUNC_6(&VAR_4->mutex);
    }

    return ((void*)0);
}
