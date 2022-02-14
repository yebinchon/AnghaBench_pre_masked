
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char const* cacert_pem; int cacert_len; unsigned char const* prvtkey_pem; int prvtkey_len; } ;
typedef TYPE_1__ httpd_ssl_config_t ;
typedef int * httpd_handle_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int **,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static httpd_handle_t FUNC_4(void)
{
    httpd_handle_t VAR_3 = ((void*)0);


    FUNC_0(VAR_1, "Starting server");

    httpd_ssl_config_t VAR_4 = FUNC_1();

    extern const unsigned char VAR_5[] asm("_binary_cacert_pem_start");
    extern const unsigned char VAR_6[] asm("_binary_cacert_pem_end");
    VAR_4.cacert_pem = VAR_5;
    VAR_4.cacert_len = VAR_6 - VAR_5;

    extern const unsigned char VAR_7[] asm("_binary_prvtkey_pem_start");
    extern const unsigned char VAR_8[] asm("_binary_prvtkey_pem_end");
    VAR_4.prvtkey_pem = VAR_7;
    VAR_4.prvtkey_len = VAR_8 - VAR_7;

    esp_err_t VAR_9 = FUNC_3(&VAR_3, &VAR_4);
    if (VAR_0 != VAR_9) {
        FUNC_0(VAR_1, "Error starting server!");
        return ((void*)0);
    }


    FUNC_0(VAR_1, "Registering URI handlers");
    FUNC_2(VAR_3, &VAR_2);
    return VAR_3;
}
