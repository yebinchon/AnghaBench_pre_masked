
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct http_parser_url {int field_set; TYPE_1__* field_data; } ;
struct httpd_req_aux {struct http_parser_url url_parse_res; } ;
struct TYPE_6__ {char* uri; struct httpd_req_aux* aux; } ;
typedef TYPE_2__ httpd_req_t ;
typedef int esp_err_t ;
struct TYPE_5__ {int off; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t,size_t) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,char const*,int ) ;

esp_err_t FUNC_3(httpd_req_t *VAR_6, char *VAR_7, size_t VAR_8)
{
    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
        return VAR_2;
    }

    if (!FUNC_1(VAR_6)) {
        return VAR_0;
    }

    struct httpd_req_aux *VAR_9 = VAR_6->aux;
    struct http_parser_url *VAR_10 = &VAR_9->url_parse_res;


    if (VAR_10->field_set & (1 << VAR_5)) {
        const char *VAR_11 = VAR_6->uri + VAR_10->field_data[VAR_5].off;



        size_t VAR_12 = VAR_10->field_data[VAR_5].len + 1;

        FUNC_2(VAR_7, VAR_11, FUNC_0(VAR_8, VAR_12));
        if (VAR_8 < VAR_12) {
            return VAR_1;
        }
        return VAR_4;
    }
    return VAR_3;
}
