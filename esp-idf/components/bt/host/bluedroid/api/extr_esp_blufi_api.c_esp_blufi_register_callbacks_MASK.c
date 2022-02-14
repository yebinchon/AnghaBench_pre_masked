
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_4__ {int event_cb; } ;
typedef TYPE_1__ esp_blufi_callbacks_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 () ;

esp_err_t FUNC_3(esp_blufi_callbacks_t *VAR_5)
{
    if (FUNC_2() == VAR_1) {
        return VAR_2;
    }

    if (VAR_5 == ((void*)0)) {
        return VAR_3;
    }

    FUNC_0(VAR_5);
    return (FUNC_1(VAR_0, VAR_5->event_cb) == 0 ? VAR_4 : VAR_3);
}
