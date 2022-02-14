
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int esp_err_t ;
typedef scalar_t__ button_handle_t ;
struct TYPE_11__ {int tmr; } ;
struct TYPE_10__ {int tmr; } ;
struct TYPE_9__ {int tmr; } ;
struct TYPE_8__ {int tmr; } ;
struct TYPE_12__ {int tmr; struct TYPE_12__* next_cb; struct TYPE_12__* cb_head; TYPE_4__ press_serial_cb; TYPE_3__ tap_short_cb; TYPE_2__ tap_psh_cb; TYPE_1__ tap_rls_cb; int io_num; } ;
typedef TYPE_5__ button_dev_t ;
typedef TYPE_5__ button_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

esp_err_t FUNC_5(button_handle_t VAR_4)
{
    FUNC_0(VAR_3, VAR_4, VAR_0);
    button_dev_t* VAR_5 = (button_dev_t*) VAR_4;
    FUNC_4(VAR_5->io_num, VAR_2);
    FUNC_3(VAR_5->io_num);

    FUNC_1(&VAR_5->tap_rls_cb.tmr);
    FUNC_1(&VAR_5->tap_psh_cb.tmr);
    FUNC_1(&VAR_5->tap_short_cb.tmr);
    FUNC_1(&VAR_5->press_serial_cb.tmr);

    button_cb_t *VAR_6 = VAR_5->cb_head;
    while (VAR_6 != ((void*)0)) {
        button_cb_t *VAR_7 = VAR_6->next_cb;
        FUNC_1(&VAR_6->tmr);
        FUNC_2(VAR_6);
        VAR_6 = VAR_7;
    }
    FUNC_2(VAR_5);
    return VAR_1;
}
