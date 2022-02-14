
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int httpd_handle_t ;
typedef int esp_tls_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,size_t) ;
 int * FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(httpd_handle_t VAR_0, int VAR_1, const char *VAR_2, size_t VAR_3, int VAR_4)
{
    esp_tls_t *VAR_5 = FUNC_2(VAR_0, VAR_1);
    FUNC_0(VAR_5 != ((void*)0));
    return FUNC_1(VAR_5, VAR_2, VAR_3);
}
