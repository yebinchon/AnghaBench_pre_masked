
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * httpd_handle_t ;
typedef int esp_tls_t ;
typedef int esp_tls_cfg_server_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,int,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static esp_err_t FUNC_12(httpd_handle_t VAR_8, int VAR_9)
{
    FUNC_3(VAR_8 != ((void*)0));


    esp_tls_cfg_server_t *VAR_10 = FUNC_7(VAR_8);
    FUNC_3(VAR_10 != ((void*)0));

    esp_tls_t *VAR_11 = (esp_tls_t *)FUNC_4(1, sizeof(esp_tls_t));
    if (!VAR_11) {
        return VAR_0;
    }
    FUNC_2(VAR_3, "performing session handshake");
    int VAR_12 = FUNC_5(VAR_10, VAR_9, VAR_11);
    if (VAR_12 != 0) {
        FUNC_1(VAR_3, "esp_tls_create_server_session failed");
        goto fail;
    }


    FUNC_11(VAR_8, VAR_9, VAR_11, VAR_4);


    FUNC_10(VAR_8, VAR_9, VAR_7);
    FUNC_9(VAR_8, VAR_9, VAR_6);
    FUNC_8(VAR_8, VAR_9, VAR_5);



    FUNC_0(VAR_3, "Secure socket open");

    return VAR_2;
fail:
    FUNC_6(VAR_11);
    return VAR_1;
}
