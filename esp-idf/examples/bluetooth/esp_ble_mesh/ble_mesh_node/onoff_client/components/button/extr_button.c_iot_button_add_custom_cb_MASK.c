
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {char* name; int dispatch_method; int callback; TYPE_2__* arg; } ;
typedef TYPE_1__ esp_timer_create_args_t ;
typedef int esp_err_t ;
typedef TYPE_2__* button_handle_t ;
struct TYPE_11__ {TYPE_2__* cb_head; } ;
typedef TYPE_3__ button_dev_t ;
struct TYPE_10__ {int interval; struct TYPE_10__* next_cb; int tmr; TYPE_3__* pbtn; int cb; void* arg; } ;
typedef TYPE_2__ button_cb_t ;
typedef int button_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*,int,int ,TYPE_2__*,int ) ;

esp_err_t FUNC_5(button_handle_t VAR_8, uint32_t VAR_9, button_cb VAR_10, void* VAR_11)
{
    FUNC_1(VAR_4, VAR_8, VAR_0);
    FUNC_0(VAR_4, VAR_9 != 0, VAR_0);
    button_dev_t* VAR_12 = (button_dev_t*) VAR_8;
    button_cb_t* VAR_13 = (button_cb_t*) FUNC_2(1, sizeof(button_cb_t));
    FUNC_1(VAR_4, VAR_13, VAR_1);
    VAR_13->arg = VAR_11;
    VAR_13->cb = VAR_10;
    VAR_13->interval = VAR_9 * 1000 / VAR_7;
    VAR_13->pbtn = VAR_12;

    VAR_13->tmr = FUNC_4("btn_press_tmr", VAR_13->interval, VAR_6, VAR_13, VAR_5);
    VAR_13->next_cb = VAR_12->cb_head;
    VAR_12->cb_head = VAR_13;
    return VAR_2;
}
