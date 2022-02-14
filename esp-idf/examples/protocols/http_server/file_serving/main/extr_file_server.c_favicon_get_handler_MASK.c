
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int httpd_req_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,size_t const) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static esp_err_t FUNC_2(httpd_req_t *VAR_1)
{
    extern const unsigned char VAR_2[] asm("_binary_favicon_ico_start");
    extern const unsigned char VAR_3[] asm("_binary_favicon_ico_end");
    const size_t VAR_4 = (VAR_3 - VAR_2);
    FUNC_1(VAR_1, "image/x-icon");
    FUNC_0(VAR_1, (const char *)VAR_2, VAR_4);
    return VAR_0;
}
