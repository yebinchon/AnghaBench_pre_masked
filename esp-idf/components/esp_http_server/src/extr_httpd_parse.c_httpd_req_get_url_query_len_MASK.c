
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct http_parser_url {int field_set; TYPE_1__* field_data; } ;
struct httpd_req_aux {struct http_parser_url url_parse_res; } ;
struct TYPE_6__ {struct httpd_req_aux* aux; } ;
typedef TYPE_2__ httpd_req_t ;
struct TYPE_5__ {size_t len; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

size_t FUNC_1(httpd_req_t *VAR_1)
{
    if (VAR_1 == ((void*)0)) {
        return 0;
    }

    if (!FUNC_0(VAR_1)) {
        return 0;
    }

    struct httpd_req_aux *VAR_2 = VAR_1->aux;
    struct http_parser_url *VAR_3 = &VAR_2->url_parse_res;


    if (VAR_3->field_set & (1 << VAR_0)) {
        return VAR_3->field_data[VAR_0].len;
    }
    return 0;
}
