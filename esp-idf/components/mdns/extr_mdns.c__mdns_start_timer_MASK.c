
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int dispatch_method; int * arg; int callback; } ;
typedef TYPE_1__ esp_timer_create_args_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_5__ {int timer_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static esp_err_t FUNC_2(void){
    esp_timer_create_args_t VAR_4 = {
        .callback = VAR_3,
        .arg = ((void*)0),
        .dispatch_method = VAR_0,
        .name = "mdns_timer"
    };
    esp_err_t VAR_5 = FUNC_0(&VAR_4, &(VAR_2->timer_handle));
    if (VAR_5) {
        return VAR_5;
    }
    return FUNC_1(VAR_2->timer_handle, VAR_1);
}
