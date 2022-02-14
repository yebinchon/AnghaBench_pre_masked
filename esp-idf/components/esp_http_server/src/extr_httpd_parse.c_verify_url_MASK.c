
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct http_parser_url {int dummy; } ;
struct httpd_req_aux {struct http_parser_url url_parse_res; } ;
struct httpd_req {scalar_t__ method; scalar_t__ uri; struct httpd_req_aux* aux; } ;
struct TYPE_5__ {char* at; size_t length; } ;
struct TYPE_6__ {int error; TYPE_1__ last; struct httpd_req* req; } ;
typedef TYPE_2__ parser_data_t ;
struct TYPE_7__ {scalar_t__ method; int http_major; int http_minor; int http_errno; scalar_t__ data; } ;
typedef TYPE_3__ http_parser ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int,struct http_parser_url*) ;
 int FUNC_4 (struct http_parser_url*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static esp_err_t FUNC_7 (http_parser *VAR_8)
{
    parser_data_t *VAR_9 = (parser_data_t *) VAR_8->data;
    struct httpd_req *VAR_10 = VAR_9->req;
    struct httpd_req_aux *VAR_11 = VAR_10->aux;
    struct http_parser_url *VAR_12 = &VAR_11->url_parse_res;


    const char *VAR_13 = VAR_9->last.at;
    size_t VAR_14 = VAR_9->last.length;

    if ((VAR_10->method = VAR_8->method) < 0) {
        FUNC_1(VAR_7, FUNC_2("HTTP Operation not supported"));
        VAR_9->error = VAR_4;
        return VAR_0;
    }

    if (sizeof(VAR_10->uri) < (VAR_14 + 1)) {
        FUNC_1(VAR_7, FUNC_2("URI length (%d) greater than supported (%d)"),
                 VAR_14, sizeof(VAR_10->uri));
        VAR_9->error = VAR_3;
        return VAR_0;
    }




    FUNC_5((char *)VAR_10->uri, VAR_13, (VAR_14 + 1));
    FUNC_0(VAR_7, FUNC_2("received URI = %s"), VAR_10->uri);


    if ((VAR_8->http_major != 1) && (VAR_8->http_minor != 1)) {
        FUNC_1(VAR_7, FUNC_2("unsupported HTTP version = %d.%d"),
                 VAR_8->http_major, VAR_8->http_minor);
        VAR_9->error = VAR_5;
        return VAR_0;
    }


    FUNC_4(VAR_12);
    if (FUNC_3(VAR_10->uri, FUNC_6(VAR_10->uri),
                              VAR_10->method == VAR_6, VAR_12)) {
        FUNC_1(VAR_7, FUNC_2("http_parser_parse_url failed with errno = %d"),
                              VAR_8->http_errno);
        VAR_9->error = VAR_2;
        return VAR_0;
    }
    return VAR_1;
}
