
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {scalar_t__ timer_handle; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static esp_err_t FUNC_2(void){
    esp_err_t VAR_2 = VAR_0;
    if (VAR_1->timer_handle) {
        VAR_2 = FUNC_1(VAR_1->timer_handle);
        if (VAR_2) {
            return VAR_2;
        }
        VAR_2 = FUNC_0(VAR_1->timer_handle);
    }
    return VAR_2;
}
