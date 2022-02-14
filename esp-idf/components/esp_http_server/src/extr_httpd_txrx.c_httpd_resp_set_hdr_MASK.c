
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct httpd_req_aux {size_t resp_hdrs_count; TYPE_2__* resp_hdrs; } ;
struct TYPE_6__ {size_t max_resp_headers; } ;
struct httpd_data {TYPE_1__ config; } ;
struct TYPE_8__ {scalar_t__ handle; struct httpd_req_aux* aux; } ;
typedef TYPE_3__ httpd_req_t ;
typedef int esp_err_t ;
struct TYPE_7__ {char const* field; char const* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char const*,char const*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;

esp_err_t FUNC_3(httpd_req_t *VAR_5, const char *VAR_6, const char *VAR_7)
{
    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
        return VAR_2;
    }

    if (!FUNC_2(VAR_5)) {
        return VAR_0;
    }

    struct httpd_req_aux *VAR_8 = VAR_5->aux;
    struct httpd_data *VAR_9 = (struct httpd_data *) VAR_5->handle;


    if (VAR_8->resp_hdrs_count >= VAR_9->config.max_resp_headers) {
        return VAR_1;
    }


    VAR_8->resp_hdrs[VAR_8->resp_hdrs_count].field = VAR_6;
    VAR_8->resp_hdrs[VAR_8->resp_hdrs_count].value = VAR_7;
    VAR_8->resp_hdrs_count++;

    FUNC_0(VAR_4, FUNC_1("new header = %s: %s"), VAR_6, VAR_7);
    return VAR_3;
}
