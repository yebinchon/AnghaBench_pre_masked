
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 unsigned char* VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_2 (char const*,unsigned int const) ;

esp_err_t FUNC_3(const unsigned char *VAR_6, const unsigned int VAR_7)
{
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_3, "cacert_pem_buf is null");
        return VAR_0;
    }
    if (VAR_4 != ((void*)0)) {
        FUNC_1();
    }

    VAR_4 = (unsigned char *)FUNC_2((const char *)VAR_6, VAR_7);
    if (!VAR_4) {
        return VAR_1;
    }

    VAR_5 = VAR_7;

    return VAR_2;
}
