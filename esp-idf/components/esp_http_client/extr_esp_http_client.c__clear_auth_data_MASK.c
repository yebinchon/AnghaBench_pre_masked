
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* esp_http_client_handle_t ;
typedef int esp_http_auth_data_t ;
typedef int esp_err_t ;
struct TYPE_5__ {int opaque; int nonce; int qop; int algorithm; int realm; int method; } ;
struct TYPE_4__ {TYPE_2__* auth_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static esp_err_t FUNC_2(esp_http_client_handle_t VAR_2)
{
    if (VAR_2->auth_data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_0(VAR_2->auth_data->method);
    FUNC_0(VAR_2->auth_data->realm);
    FUNC_0(VAR_2->auth_data->algorithm);
    FUNC_0(VAR_2->auth_data->qop);
    FUNC_0(VAR_2->auth_data->nonce);
    FUNC_0(VAR_2->auth_data->opaque);
    FUNC_1(VAR_2->auth_data, 0, sizeof(esp_http_auth_data_t));
    return VAR_1;
}
