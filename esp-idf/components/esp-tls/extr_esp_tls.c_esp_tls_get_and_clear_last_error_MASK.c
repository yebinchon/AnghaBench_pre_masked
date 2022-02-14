
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_tls_last_error_t ;
typedef TYPE_1__* esp_tls_error_handle_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int esp_tls_error_code; int esp_tls_flags; int last_error; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

esp_err_t FUNC_1(esp_tls_error_handle_t VAR_1, int *VAR_2, int *VAR_3)
{
    if (!VAR_1) {
        return VAR_0;
    }
    esp_err_t VAR_4 = VAR_1->last_error;
    if (VAR_2) {
        *VAR_2 = VAR_1->esp_tls_error_code;
    }
    if (VAR_3) {
        *VAR_3 = VAR_1->esp_tls_flags;
    }
    FUNC_0(VAR_1, 0, sizeof(esp_tls_last_error_t));
    return VAR_4;
}
