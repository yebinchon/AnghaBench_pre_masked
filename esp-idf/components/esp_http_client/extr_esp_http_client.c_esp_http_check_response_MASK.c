
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_7__ {scalar_t__ redirect_counter; scalar_t__ max_redirection_count; int process_again; TYPE_1__* response; scalar_t__ disable_auto_redirect; } ;
struct TYPE_6__ {int status_code; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static esp_err_t FUNC_3(esp_http_client_handle_t VAR_3)
{
    if (VAR_3->redirect_counter >= VAR_3->max_redirection_count || VAR_3->disable_auto_redirect) {
        FUNC_0(VAR_2, "Error, reach max_redirection_count count=%d", VAR_3->redirect_counter);
        return VAR_0;
    }
    switch (VAR_3->response->status_code) {
        case 129:
        case 130:
            FUNC_2(VAR_3);
            VAR_3->redirect_counter ++;
            VAR_3->process_again = 1;
            break;
        case 128:
            FUNC_1(VAR_3);
    }
    return VAR_1;
}
