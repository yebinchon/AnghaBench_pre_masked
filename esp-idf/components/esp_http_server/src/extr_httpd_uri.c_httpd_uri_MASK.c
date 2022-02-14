
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct http_parser_url {int field_set; TYPE_2__* field_data; } ;
struct TYPE_8__ {struct http_parser_url url_parse_res; } ;
struct TYPE_11__ {int user_ctx; int uri; int method; } ;
struct httpd_data {TYPE_1__ hd_req_aux; TYPE_4__ hd_req; } ;
struct TYPE_10__ {scalar_t__ (* handler ) (TYPE_4__*) ;int user_ctx; } ;
typedef TYPE_3__ httpd_uri_t ;
typedef TYPE_4__ httpd_req_t ;
typedef int httpd_err_code_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_9__ {int off; int len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,...) ;
 scalar_t__ VAR_1 ;


 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_3 (struct httpd_data*,int ,int ,int ,int*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int const) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;

esp_err_t FUNC_6(struct httpd_data *VAR_4)
{
    httpd_uri_t *VAR_5 = ((void*)0);
    httpd_req_t *VAR_6 = &VAR_4->hd_req;
    struct http_parser_url *VAR_7 = &VAR_4->hd_req_aux.url_parse_res;


    httpd_err_code_t VAR_8 = 0;

    FUNC_0(VAR_2, FUNC_2("request for %s with type %d"), VAR_6->uri, VAR_6->method);


    if (VAR_7->field_set & (1 << VAR_3)) {
        VAR_5 = FUNC_3(VAR_4, VAR_6->uri + VAR_7->field_data[VAR_3].off,
                                     VAR_7->field_data[VAR_3].len, VAR_6->method, &VAR_8);
    }


    if (VAR_5 == ((void*)0)) {
        switch (VAR_8) {
            case 129:
                FUNC_1(VAR_2, FUNC_2("URI '%s' not found"), VAR_6->uri);
                return FUNC_4(VAR_6, 129);
            case 128:
                FUNC_1(VAR_2, FUNC_2("Method '%d' not allowed for URI '%s'"),
                         VAR_6->method, VAR_6->uri);
                return FUNC_4(VAR_6, 128);
            default:
                return VAR_0;
        }
    }


    VAR_6->user_ctx = VAR_5->user_ctx;


    if (VAR_5->handler(VAR_6) != VAR_1) {

        FUNC_1(VAR_2, FUNC_2("uri handler execution failed"));
        return VAR_0;
    }
    return VAR_1;
}
