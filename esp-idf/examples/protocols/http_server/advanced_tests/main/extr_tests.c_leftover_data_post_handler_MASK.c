
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int httpd_req_t ;
typedef int esp_err_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static esp_err_t FUNC_5(httpd_req_t *VAR_4)
{



    char VAR_5[11];
    int VAR_6;


    VAR_6 = FUNC_1(VAR_4, VAR_5, sizeof(VAR_5) - 1);
    if (VAR_6 <= 0) {
        if (VAR_6 == VAR_2) {
            FUNC_3(VAR_4);
        }
        return VAR_0;
    }

    VAR_5[VAR_6] = '\0';
    FUNC_0(VAR_3, "leftover data handler read %s", VAR_5);
    FUNC_2(VAR_4, VAR_5, FUNC_4(VAR_5));
    return VAR_1;
}
