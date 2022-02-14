
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_tls_t ;
typedef int esp_tls_cfg_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int,int,int const*,int *) ;

esp_tls_t *FUNC_4(const char *VAR_1, int VAR_2, int VAR_3, const esp_tls_cfg_t *VAR_4)
{
    esp_tls_t *VAR_5 = (esp_tls_t *)FUNC_1(1, sizeof(esp_tls_t));
    if (!VAR_5) {
        return ((void*)0);
    }


    while (1) {
        int VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
        if (VAR_6 == 1) {
            return VAR_5;
        } else if (VAR_6 == -1) {
            FUNC_2(VAR_5);
            FUNC_0(VAR_0, "Failed to open new connection");
            return ((void*)0);
        }
    }
    return ((void*)0);
}
