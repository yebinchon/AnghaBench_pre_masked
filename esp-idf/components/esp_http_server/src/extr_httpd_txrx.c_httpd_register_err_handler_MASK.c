
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpd_data {int * err_handler_fns; } ;
typedef int * httpd_handle_t ;
typedef int httpd_err_handler_func_t ;
typedef size_t httpd_err_code_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

esp_err_t FUNC_0(httpd_handle_t VAR_3,
                                     httpd_err_code_t VAR_4,
                                     httpd_err_handler_func_t VAR_5)
{
    if (VAR_3 == ((void*)0) || VAR_4 >= VAR_2) {
        return VAR_0;
    }

    struct httpd_data *VAR_6 = (struct httpd_data *) VAR_3;
    VAR_6->err_handler_fns[VAR_4] = VAR_5;
    return VAR_1;
}
