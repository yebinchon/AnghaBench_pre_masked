
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct httpd_data {int hd_req; } ;
struct TYPE_3__ {scalar_t__ status; int raw_datalen; int error; } ;
typedef TYPE_1__ parser_data_t ;
typedef int httpd_req_t ;
typedef int http_parser ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct httpd_data*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int *,TYPE_1__*) ;
 int FUNC_6 (int *,int,int ) ;

__attribute__((used)) static esp_err_t FUNC_7(struct httpd_data *VAR_5)
{
    httpd_req_t *VAR_6 = &VAR_5->hd_req;
    int VAR_7, VAR_8;
    http_parser VAR_9;
    parser_data_t VAR_10;


    FUNC_5(VAR_6, &VAR_9, &VAR_10);


    VAR_8 = 0;
    do {

        if ((VAR_7 = FUNC_6(VAR_6, VAR_8, VAR_2)) < 0) {
            if (VAR_7 == VAR_1) {




                continue;
            }



            return VAR_0;
        }



        VAR_10.raw_datalen = VAR_7 + VAR_8;


        if ((VAR_8 = FUNC_4(&VAR_9, VAR_8, VAR_7)) < 0) {



            return FUNC_2(VAR_6, VAR_10.error);
        }
    } while (VAR_10.status != VAR_3);

    FUNC_0(VAR_4, FUNC_1("parsing complete"));
    return FUNC_3(VAR_5);
}
