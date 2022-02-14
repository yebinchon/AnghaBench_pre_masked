
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ portBASE_TYPE ;
struct TYPE_6__ {int interval; int * tmr; } ;
struct TYPE_5__ {int interval; int * tmr; } ;
struct TYPE_7__ {int active_level; TYPE_2__ tap_rls_cb; TYPE_4__* cb_head; TYPE_1__ tap_psh_cb; int io_num; } ;
typedef TYPE_3__ button_dev_t ;
struct TYPE_8__ {int interval; struct TYPE_8__* next_cb; int * tmr; } ;
typedef TYPE_4__ button_cb_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (int *,scalar_t__*) ;

__attribute__((used)) static void FUNC_6(void* VAR_3)
{
    button_dev_t* VAR_4 = (button_dev_t*) VAR_3;
    portBASE_TYPE VAR_5 = VAR_0;
    int VAR_6 = FUNC_2(VAR_4->io_num);
    if (VAR_6 == VAR_4->active_level) {
        if (VAR_4->tap_psh_cb.tmr) {

            FUNC_5(VAR_4->tap_psh_cb.tmr, &VAR_5);
            FUNC_4(VAR_4->tap_psh_cb.tmr, &VAR_5);




        }

        button_cb_t *VAR_7 = VAR_4->cb_head;
        while (VAR_7 != ((void*)0)) {
            if (VAR_7->tmr != ((void*)0)) {

                FUNC_5(VAR_7->tmr, &VAR_5);
                FUNC_4(VAR_7->tmr, &VAR_5);




            }
            VAR_7 = VAR_7->next_cb;
        }
    } else {

        if (VAR_4->tap_rls_cb.tmr) {

            FUNC_5(VAR_4->tap_rls_cb.tmr, &VAR_5);
            FUNC_4(VAR_4->tap_rls_cb.tmr, &VAR_5);




        }
    }
    if(VAR_5 == VAR_1) {
        FUNC_3();
    }
}
