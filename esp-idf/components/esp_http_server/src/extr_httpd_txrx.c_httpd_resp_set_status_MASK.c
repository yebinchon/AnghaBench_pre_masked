
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct httpd_req_aux {char* status; } ;
struct TYPE_4__ {struct httpd_req_aux* aux; } ;
typedef TYPE_1__ httpd_req_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

esp_err_t FUNC_1(httpd_req_t *VAR_3, const char *VAR_4)
{
    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
        return VAR_1;
    }

    if (!FUNC_0(VAR_3)) {
        return VAR_0;
    }

    struct httpd_req_aux *VAR_5 = VAR_3->aux;
    VAR_5->status = (char *)VAR_4;
    return VAR_2;
}
