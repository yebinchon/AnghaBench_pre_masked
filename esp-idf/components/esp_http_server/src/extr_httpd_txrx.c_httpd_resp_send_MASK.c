
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct httpd_req_aux {char const* scratch; unsigned int resp_hdrs_count; TYPE_1__* resp_hdrs; int content_type; int status; scalar_t__ req_hdrs_count; } ;
typedef int ssize_t ;
struct TYPE_7__ {struct httpd_req_aux* aux; } ;
typedef TYPE_2__ httpd_req_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_6__ {char const* field; char const* value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*,char const*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char const*,int,char const*,int ,int ,int ) ;
 int FUNC_3 (char const*) ;

esp_err_t FUNC_4(httpd_req_t *VAR_6, const char *VAR_7, ssize_t VAR_8)
{
    if (VAR_6 == ((void*)0)) {
        return VAR_3;
    }

    if (!FUNC_1(VAR_6)) {
        return VAR_0;
    }

    struct httpd_req_aux *VAR_9 = VAR_6->aux;
    const char *VAR_10 = "HTTP/1.1 %s\r\nContent-Type: %s\r\nContent-Length: %d\r\n";
    const char *VAR_11 = ": ";
    const char *VAR_12 = "\r\n";

    if (VAR_8 == VAR_5) {
        VAR_8 = FUNC_3(VAR_7);
    }


    VAR_9->req_hdrs_count = 0;


    if (FUNC_2(VAR_9->scratch, sizeof(VAR_9->scratch), VAR_10,
                 VAR_9->status, VAR_9->content_type, VAR_8) >= sizeof(VAR_9->scratch)) {
        return VAR_1;
    }


    if (FUNC_0(VAR_6, VAR_9->scratch, FUNC_3(VAR_9->scratch)) != VAR_4) {
        return VAR_2;
    }


    for (unsigned VAR_13 = 0; VAR_13 < VAR_9->resp_hdrs_count; VAR_13++) {

        if (FUNC_0(VAR_6, VAR_9->resp_hdrs[VAR_13].field, FUNC_3(VAR_9->resp_hdrs[VAR_13].field)) != VAR_4) {
            return VAR_2;
        }

        if (FUNC_0(VAR_6, VAR_11, FUNC_3(VAR_11)) != VAR_4) {
            return VAR_2;
        }

        if (FUNC_0(VAR_6, VAR_9->resp_hdrs[VAR_13].value, FUNC_3(VAR_9->resp_hdrs[VAR_13].value)) != VAR_4) {
            return VAR_2;
        }

        if (FUNC_0(VAR_6, VAR_12, FUNC_3(VAR_12)) != VAR_4) {
            return VAR_2;
        }
    }


    if (FUNC_0(VAR_6, VAR_12, FUNC_3(VAR_12)) != VAR_4) {
        return VAR_2;
    }


    if (VAR_7 && VAR_8) {
        if (FUNC_0(VAR_6, VAR_7, VAR_8) != VAR_4) {
            return VAR_2;
        }
    }
    return VAR_4;
}
