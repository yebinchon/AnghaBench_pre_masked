
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_tls_t ;
typedef int esp_tls_cfg_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int,int,int const*,int *) ;

int FUNC_2(const char *VAR_1, int VAR_2, int VAR_3, const esp_tls_cfg_t *VAR_4, esp_tls_t *VAR_5)
{


    while (1) {
        int VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
        if (VAR_6 == 1) {
            return VAR_6;
        } else if (VAR_6 == -1) {
            FUNC_0(VAR_0, "Failed to open new connection");
            return -1;
        }
    }
    return 0;
}
