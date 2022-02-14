
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * priv; } ;
typedef TYPE_1__ protocomm_t ;
typedef int httpd_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

esp_err_t FUNC_2(protocomm_t *VAR_6)
{
    if ((VAR_6 != ((void*)0)) && (VAR_6 == VAR_4)) {
        if (!VAR_3) {
            httpd_handle_t *VAR_7 = (httpd_handle_t *) VAR_4->priv;
            FUNC_1(*VAR_7);
            FUNC_0(VAR_7);
        } else {
            VAR_3 = 0;
        }
        VAR_4->priv = ((void*)0);
        VAR_4 = ((void*)0);
        VAR_5 = VAR_2;
        return VAR_1;
    }
    return VAR_0;
}
