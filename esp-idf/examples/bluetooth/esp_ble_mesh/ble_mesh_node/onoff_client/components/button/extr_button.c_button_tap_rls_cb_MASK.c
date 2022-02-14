
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int arg; int (* cb ) (int ) ;int * tmr; } ;
struct TYPE_7__ {int arg; int (* cb ) (int ) ;} ;
struct TYPE_6__ {int * tmr; } ;
struct TYPE_9__ {scalar_t__ active_level; scalar_t__ state; TYPE_3__ tap_rls_cb; TYPE_2__ tap_short_cb; TYPE_1__ press_serial_cb; TYPE_5__* cb_head; int io_num; } ;
typedef TYPE_4__ button_dev_t ;
struct TYPE_10__ {struct TYPE_10__* next_cb; int * tmr; TYPE_4__* pbtn; } ;
typedef TYPE_5__ button_cb_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void* VAR_2)
{

    button_cb_t* VAR_3 = (button_cb_t*) FUNC_2(VAR_2);



    button_dev_t* VAR_4 = VAR_3->pbtn;
    FUNC_0(VAR_4->tap_rls_cb.tmr);

    if (VAR_4->active_level == FUNC_1(VAR_4->io_num)) {

    } else {

        button_cb_t *VAR_5 = VAR_4->cb_head;
        while (VAR_5 != ((void*)0)) {
            if (VAR_5->tmr != ((void*)0)) {
                FUNC_0(VAR_5->tmr);
            }
            VAR_5 = VAR_5->next_cb;
        }
        if (VAR_4->press_serial_cb.tmr && VAR_4->press_serial_cb.tmr != ((void*)0)) {
            FUNC_0(VAR_4->press_serial_cb.tmr);
        }
        if (VAR_4->tap_short_cb.cb && VAR_4->state == VAR_1) {
            VAR_4->tap_short_cb.cb(VAR_4->tap_short_cb.arg);
        }
        if(VAR_4->tap_rls_cb.cb && VAR_4->state != VAR_0) {
            VAR_4->tap_rls_cb.cb(VAR_4->tap_rls_cb.arg);
        }
        VAR_4->state = VAR_0;
    }
}
