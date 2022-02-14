
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct httpd_req_aux {scalar_t__ remaining_len; } ;
struct TYPE_4__ {struct httpd_req_aux* aux; } ;
struct httpd_data {TYPE_1__ hd_req; } ;
typedef TYPE_1__ httpd_req_t ;
typedef int esp_err_t ;
typedef int dummy ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;

esp_err_t FUNC_6(struct httpd_data *VAR_5)
{
    httpd_req_t *VAR_6 = &VAR_5->hd_req;
    struct httpd_req_aux *VAR_7 = VAR_6->aux;


    while (VAR_7->remaining_len) {


        char VAR_8[VAR_0];
        int VAR_9 = FUNC_3(sizeof(VAR_8), VAR_7->remaining_len);
        VAR_9 = FUNC_5(VAR_6, VAR_8, VAR_9);
        if (VAR_9 < 0) {
            FUNC_4(VAR_6);
            return VAR_1;
        }

        FUNC_0(VAR_4, FUNC_2("purging data size : %d bytes"), VAR_9);
    }

    FUNC_4(VAR_6);
    return VAR_3;
}
