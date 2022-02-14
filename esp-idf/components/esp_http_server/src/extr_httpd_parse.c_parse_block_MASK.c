
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct httpd_req_aux {scalar_t__ scratch; } ;
struct TYPE_7__ {int status; int error; int pre_parsed; scalar_t__ paused; int settings; TYPE_2__* req; } ;
typedef TYPE_1__ parser_data_t ;
struct TYPE_8__ {struct httpd_req_aux* aux; } ;
typedef TYPE_2__ httpd_req_t ;
struct TYPE_9__ {int http_errno; scalar_t__ data; } ;
typedef TYPE_3__ http_parser ;


 int FUNC_0 (int ,int ,size_t) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 void* VAR_4 ;



 int VAR_5 ;
 size_t FUNC_4 (TYPE_3__*,size_t) ;
 size_t FUNC_5 (TYPE_3__*,int *,scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_6(http_parser *VAR_6, size_t VAR_7, size_t VAR_8)
{
    parser_data_t *VAR_9 = (parser_data_t *)(VAR_6->data);
    httpd_req_t *VAR_10 = VAR_9->req;
    struct httpd_req_aux *VAR_11 = VAR_10->aux;
    size_t VAR_12 = 0;

    if (!VAR_8) {




        FUNC_2(VAR_5, FUNC_3("request URI/header too long"));
        switch (VAR_9->status) {
            case 128:
                VAR_9->error = VAR_1;
                break;
            case 130:
            case 129:
                VAR_9->error = VAR_2;
                break;
            default:
                FUNC_1(VAR_5, FUNC_3("unexpected state"));
                VAR_9->error = VAR_3;
                break;
        }
        VAR_9->status = VAR_4;
        return -1;
    }


    if (VAR_9->paused) {
        VAR_12 = FUNC_4(VAR_6, VAR_8);
        VAR_8 -= VAR_12;
        VAR_7 += VAR_12;
        if (!VAR_8) {
            return VAR_12;
        }
    }


    VAR_12 = FUNC_5(VAR_6, &VAR_9->settings,
                                  VAR_11->scratch + VAR_7, VAR_8);


    if (VAR_9->status == VAR_4) {


        FUNC_2(VAR_5, FUNC_3("parsing failed"));
        return -1;
    } else if (VAR_9->paused) {





        VAR_9->pre_parsed -= (VAR_8 - VAR_12);
        return 0;
    } else if (VAR_12 != VAR_8) {

        VAR_9->error = VAR_0;
        VAR_9->status = VAR_4;
        FUNC_2(VAR_5, FUNC_3("incomplete (%d/%d) with parser error = %d"),
                 VAR_12, VAR_8, VAR_6->http_errno);
        return -1;
    }



    FUNC_0(VAR_5, FUNC_3("parsed block size = %d"), VAR_7 + VAR_12);
    return VAR_7 + VAR_12;
}
