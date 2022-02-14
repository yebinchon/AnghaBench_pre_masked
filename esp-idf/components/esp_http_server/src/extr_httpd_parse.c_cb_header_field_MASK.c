
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct httpd_req_aux {char const* scratch; int req_hdrs_count; } ;
struct httpd_req {struct httpd_req_aux* aux; } ;
struct TYPE_7__ {char const* at; int length; } ;
struct TYPE_8__ {scalar_t__ status; TYPE_1__ last; void* error; struct httpd_req* req; } ;
typedef TYPE_2__ parser_data_t ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_3__ http_parser ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,...) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (char*) ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,char,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,char const*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static esp_err_t FUNC_6(http_parser *VAR_8, const char *VAR_9, size_t VAR_10)
{
    parser_data_t *VAR_11 = (parser_data_t *) VAR_8->data;
    struct httpd_req *VAR_12 = VAR_11->req;
    struct httpd_req_aux *VAR_13 = VAR_12->aux;


    if (VAR_11->status == VAR_6) {
        if (FUNC_5(VAR_8) != VAR_1) {



            VAR_11->status = VAR_3;
            return VAR_0;
        }

        FUNC_0(VAR_7, FUNC_2("headers begin"));


        VAR_11->last.at = VAR_13->scratch;
        VAR_11->last.length = 0;
        VAR_11->status = VAR_4;


        if (FUNC_4(VAR_8, VAR_9) != VAR_1) {
            VAR_11->error = VAR_2;
            VAR_11->status = VAR_3;
            return VAR_0;
        }
    } else if (VAR_11->status == VAR_5) {


        char *VAR_14 = (char *)VAR_11->last.at + VAR_11->last.length;
        FUNC_3(VAR_14, '\0', VAR_9 - VAR_14);


        VAR_11->last.at = VAR_9;
        VAR_11->last.length = 0;
        VAR_11->status = VAR_4;


        VAR_13->req_hdrs_count++;
    } else if (VAR_11->status != VAR_4) {
        FUNC_1(VAR_7, FUNC_2("unexpected state transition"));
        VAR_11->error = VAR_2;
        VAR_11->status = VAR_3;
        return VAR_0;
    }

    FUNC_0(VAR_7, FUNC_2("processing field = %.*s"), VAR_10, VAR_9);


    VAR_11->last.length += VAR_10;
    return VAR_1;
}
