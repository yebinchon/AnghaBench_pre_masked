
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct httpd_req_aux {char const* scratch; } ;
struct httpd_req {struct httpd_req_aux* aux; } ;
typedef int ssize_t ;
struct TYPE_5__ {int raw_datalen; int pre_parsed; int paused; struct httpd_req* req; } ;
typedef TYPE_1__ parser_data_t ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_2__ http_parser ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (struct httpd_req*,char const*,int) ;

__attribute__((used)) static esp_err_t FUNC_5(http_parser *VAR_4, const char* VAR_5)
{
    parser_data_t *VAR_6 = (parser_data_t *) VAR_4->data;
    struct httpd_req *VAR_7 = VAR_6->req;
    struct httpd_req_aux *VAR_8 = VAR_7->aux;



    ssize_t VAR_9 = VAR_6->raw_datalen - (VAR_5 - VAR_8->scratch);
    if (VAR_9 < 0) {
        FUNC_1(VAR_3, FUNC_2("parsing beyond valid data = %d"), -VAR_9);
        return VAR_0;
    }




    if (VAR_9 && (VAR_9 != FUNC_4(VAR_7, VAR_5, VAR_9))) {
        FUNC_1(VAR_3, FUNC_2("data too large for un-recv = %d"), VAR_9);
        return VAR_1;
    }






    VAR_6->pre_parsed = VAR_9;
    FUNC_3(VAR_4, 1);
    VAR_6->paused = 1;
    FUNC_0(VAR_3, FUNC_2("paused"));
    return VAR_2;
}
