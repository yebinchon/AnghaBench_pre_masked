
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_2__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_14__ {int state; int first_line_prepared; int parser; int is_async; TYPE_1__* response; int is_chunk_complete; int post_len; scalar_t__ process_again; } ;
struct TYPE_13__ {int content_length; int data_process; int is_chunked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_11 (int ) ;

esp_err_t FUNC_12(esp_http_client_handle_t VAR_8)
{
    esp_err_t VAR_9;
    do {
        if (VAR_8->process_again) {
            FUNC_7(VAR_8);
        }
        switch (VAR_8->state) {




            case 131:
                if ((VAR_9 = FUNC_4(VAR_8)) != VAR_4) {
                    if (VAR_8->is_async && VAR_9 == VAR_1) {
                        return VAR_2;
                    }
                    return VAR_9;
                }

            case 132:
                if ((VAR_9 = FUNC_8(VAR_8, VAR_8->post_len)) != VAR_4) {
                    if (VAR_8->is_async && VAR_7 == VAR_0) {
                        return VAR_2;
                    }
                    return VAR_9;
                }

            case 129:
                if ((VAR_9 = FUNC_9(VAR_8)) != VAR_4) {
                    if (VAR_8->is_async && VAR_7 == VAR_0) {
                        return VAR_2;
                    }
                    return VAR_9;
                }

            case 130:
                if (FUNC_5(VAR_8) < 0) {
                    if (VAR_8->is_async && VAR_7 == VAR_0) {
                        return VAR_2;
                    }
                    return VAR_3;
                }

            case 128:
                if ((VAR_9 = FUNC_2(VAR_8)) != VAR_4) {
                    FUNC_1(VAR_6, "Error response");
                    return VAR_9;
                }
                while (VAR_8->response->is_chunked && !VAR_8->is_chunk_complete) {
                    if (FUNC_6(VAR_8) <= 0) {
                        if (VAR_8->is_async && VAR_7 == VAR_0) {
                            return VAR_2;
                        }
                        FUNC_0(VAR_6, "Read finish or server requests close");
                        break;
                    }
                }
                while (VAR_8->response->data_process < VAR_8->response->content_length) {
                    if (FUNC_6(VAR_8) <= 0) {
                        if (VAR_8->is_async && VAR_7 == VAR_0) {
                            return VAR_2;
                        }
                        FUNC_0(VAR_6, "Read finish or server requests close");
                        break;
                    }
                }
                FUNC_10(VAR_8, VAR_5, ((void*)0), 0);

                if (!FUNC_11(VAR_8->parser)) {
                    FUNC_0(VAR_6, "Close connection");
                    FUNC_3(VAR_8);
                } else {
                    if (VAR_8->state > 132) {
                        VAR_8->state = 132;
                        VAR_8->first_line_prepared = 0;
                    }
                }
                break;
                default:
                break;
        }
    } while (VAR_8->process_again);
    return VAR_4;
}
