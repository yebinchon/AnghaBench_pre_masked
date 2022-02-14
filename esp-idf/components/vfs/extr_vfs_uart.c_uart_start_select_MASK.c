
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void** readfds; void** writefds; void** errorfds; int select_sem; void* readfds_orig; void* errorfds_orig; void* writefds_orig; } ;
typedef TYPE_1__ uart_select_args_t ;
typedef void* fd_set ;
typedef int esp_vfs_select_sem_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,void**) ;
 int FUNC_1 (int,void**) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (int,size_t*) ;
 int FUNC_11 () ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static esp_err_t FUNC_13(int VAR_4, fd_set *VAR_5, fd_set *VAR_6, fd_set *VAR_7,
        esp_vfs_select_sem_t VAR_8, void **VAR_9)
{
    const int VAR_10 = FUNC_3(VAR_4, VAR_2);
    *VAR_9 = ((void*)0);

    uart_select_args_t *VAR_11 = FUNC_6(sizeof(uart_select_args_t));

    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    VAR_11->select_sem = VAR_8;
    VAR_11->readfds = VAR_5;
    VAR_11->writefds = VAR_6;
    VAR_11->errorfds = VAR_7;
    VAR_11->readfds_orig = *VAR_5;
    VAR_11->writefds_orig = *VAR_6;
    VAR_11->errorfds_orig = *VAR_7;
    FUNC_2(VAR_5);
    FUNC_2(VAR_6);
    FUNC_2(VAR_7);

    FUNC_7(FUNC_11());


    for (int VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12) {
        if (FUNC_0(VAR_12, &VAR_11->readfds_orig) || FUNC_0(VAR_12, &VAR_11->writefds_orig) || FUNC_0(VAR_12, &VAR_11->errorfds_orig)) {
            FUNC_12(VAR_12, VAR_3);
        }
    }

    for (int VAR_13 = 0; VAR_13 < VAR_10; ++VAR_13) {
        if (FUNC_0(VAR_13, &VAR_11->readfds_orig)) {
            size_t VAR_14;
            if (FUNC_10(VAR_13, &VAR_14) == VAR_1 && VAR_14 > 0) {

                FUNC_1(VAR_13, VAR_5);
                FUNC_4(VAR_11->select_sem);
            }
        }
    }

    esp_err_t VAR_15 = FUNC_9(VAR_11);
    if (VAR_15 != VAR_1) {
        FUNC_8(FUNC_11());
        FUNC_5(VAR_11);
        return VAR_15;
    }

    FUNC_8(FUNC_11());

    *VAR_9 = VAR_11;
    return VAR_1;
}
