
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int content_len; } ;
typedef TYPE_1__ httpd_req_t ;
typedef int esp_err_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;

__attribute__((used)) static esp_err_t FUNC_4(httpd_req_t *VAR_4)
{
    char VAR_5[100];
    int VAR_6, VAR_7 = VAR_4->content_len;

    while (VAR_7 > 0) {

        if ((VAR_6 = FUNC_2(VAR_4, VAR_5,
                        FUNC_1(VAR_7, sizeof(VAR_5)))) <= 0) {
            if (VAR_6 == VAR_2) {

                continue;
            }
            return VAR_0;
        }


        FUNC_3(VAR_4, VAR_5, VAR_6);
        VAR_7 -= VAR_6;


        FUNC_0(VAR_3, "=========== RECEIVED DATA ==========");
        FUNC_0(VAR_3, "%.*s", VAR_6, VAR_5);
        FUNC_0(VAR_3, "====================================");
    }


    FUNC_3(VAR_4, ((void*)0), 0);
    return VAR_1;
}
