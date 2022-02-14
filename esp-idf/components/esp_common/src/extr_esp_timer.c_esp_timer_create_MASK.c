
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* esp_timer_handle_t ;
struct TYPE_7__ {int name; int arg; int * callback; } ;
typedef TYPE_2__ esp_timer_create_args_t ;
typedef int esp_err_t ;
struct TYPE_6__ {int name; int arg; int * callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

esp_err_t FUNC_3(const esp_timer_create_args_t* VAR_4,
                           esp_timer_handle_t* VAR_5)
{
    if (!FUNC_1()) {
        return VAR_1;
    }
    if (VAR_4 == ((void*)0) || VAR_4->callback == ((void*)0) || VAR_5 == ((void*)0)) {
        return VAR_0;
    }
    esp_timer_handle_t VAR_6 = (esp_timer_handle_t) FUNC_0(1, sizeof(*VAR_6));
    if (VAR_6 == ((void*)0)) {
        return VAR_2;
    }
    VAR_6->callback = VAR_4->callback;
    VAR_6->arg = VAR_4->arg;




    *VAR_5 = VAR_6;
    return VAR_3;
}
