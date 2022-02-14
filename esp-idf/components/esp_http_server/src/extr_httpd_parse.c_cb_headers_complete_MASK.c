
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct httpd_req_aux {char* scratch; scalar_t__ remaining_len; int req_hdrs_count; } ;
struct httpd_req {scalar_t__ content_len; struct httpd_req_aux* aux; } ;
typedef int ssize_t ;
struct TYPE_6__ {char* at; int length; } ;
struct TYPE_7__ {scalar_t__ status; int raw_datalen; void* error; TYPE_1__ last; struct httpd_req* req; } ;
typedef TYPE_2__ parser_data_t ;
struct TYPE_8__ {scalar_t__ upgrade; scalar_t__ nread; scalar_t__ content_length; scalar_t__ data; } ;
typedef TYPE_3__ http_parser ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static esp_err_t FUNC_5(http_parser *VAR_9)
{
    parser_data_t *VAR_10 = (parser_data_t *) VAR_9->data;
    struct httpd_req *VAR_11 = VAR_10->req;
    struct httpd_req_aux *VAR_12 = VAR_11->aux;


    if (VAR_10->status == VAR_7) {
        FUNC_0(VAR_8, FUNC_3("no headers"));
        if (FUNC_4(VAR_9) != VAR_1) {



            VAR_10->status = VAR_5;
            return VAR_0;
        }
    } else if (VAR_10->status == VAR_6) {

        char *VAR_13 = (char *)VAR_10->last.at + VAR_10->last.length;



        ssize_t VAR_14 = VAR_10->raw_datalen - (VAR_13 - VAR_12->scratch);
        if (VAR_14 < 2) {
            FUNC_1(VAR_8, FUNC_3("invalid length of data remaining to be parsed"));
            VAR_10->error = VAR_3;
            VAR_10->status = VAR_5;
            return VAR_0;
        }
        unsigned short VAR_15 = 2;
        while (VAR_14-- && VAR_15) {
            if (*VAR_13 == '\n') {
                VAR_15--;
            }

            *(VAR_13++) = '\0';
        }
        if (VAR_15) {
            FUNC_1(VAR_8, FUNC_3("incomplete termination of headers"));
            VAR_10->error = VAR_2;
            VAR_10->status = VAR_5;
            return VAR_0;
        }


        VAR_10->last.at = VAR_13;


        VAR_12->req_hdrs_count++;
    } else {
        FUNC_1(VAR_8, FUNC_3("unexpected state transition"));
        VAR_10->error = VAR_3;
        VAR_10->status = VAR_5;
        return VAR_0;
    }


    VAR_11->content_len = ((int)VAR_9->content_length != -1 ?
                      VAR_9->content_length : 0);

    FUNC_0(VAR_8, FUNC_3("bytes read     = %d"), VAR_9->nread);
    FUNC_0(VAR_8, FUNC_3("content length = %zu"), VAR_11->content_len);

    if (VAR_9->upgrade) {
        FUNC_2(VAR_8, FUNC_3("upgrade from HTTP not supported"));


        VAR_10->error = VAR_2;
        VAR_10->status = VAR_5;
        return VAR_0;
    }

    VAR_10->status = VAR_4;
    VAR_12->remaining_len = VAR_11->content_len;
    return VAR_1;
}
