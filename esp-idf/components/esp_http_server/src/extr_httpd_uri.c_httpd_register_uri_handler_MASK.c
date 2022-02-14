
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int max_uri_handlers; } ;
struct httpd_data {TYPE_3__** hd_calls; TYPE_1__ config; } ;
struct TYPE_7__ {int * uri; int user_ctx; int handler; int method; } ;
typedef TYPE_2__ httpd_uri_t ;
typedef int * httpd_handle_t ;
typedef int esp_err_t ;
struct TYPE_8__ {int * uri; int user_ctx; int handler; int method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (int ,int ,...) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (int *,int *,int ,int ,int *) ;
 TYPE_3__* FUNC_5 (int) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

esp_err_t FUNC_8(httpd_handle_t VAR_6,
                                     const httpd_uri_t *VAR_7)
{
    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
        return VAR_3;
    }

    struct httpd_data *VAR_8 = (struct httpd_data *) VAR_6;





    if (FUNC_4(VAR_6, VAR_7->uri,
                               FUNC_7(VAR_7->uri),
                               VAR_7->method, ((void*)0)) != ((void*)0)) {
        FUNC_1(VAR_5, FUNC_2("handler %s with method %d already registered"),
                 VAR_7->uri, VAR_7->method);
        return VAR_2;
    }

    for (int VAR_9 = 0; VAR_9 < VAR_8->config.max_uri_handlers; VAR_9++) {
        if (VAR_8->hd_calls[VAR_9] == ((void*)0)) {
            VAR_8->hd_calls[VAR_9] = FUNC_5(sizeof(httpd_uri_t));
            if (VAR_8->hd_calls[VAR_9] == ((void*)0)) {

                return VAR_0;
            }


            VAR_8->hd_calls[VAR_9]->uri = FUNC_6(VAR_7->uri);
            if (VAR_8->hd_calls[VAR_9]->uri == ((void*)0)) {

                FUNC_3(VAR_8->hd_calls[VAR_9]);
                return VAR_0;
            }


            VAR_8->hd_calls[VAR_9]->method = VAR_7->method;
            VAR_8->hd_calls[VAR_9]->handler = VAR_7->handler;
            VAR_8->hd_calls[VAR_9]->user_ctx = VAR_7->user_ctx;
            FUNC_0(VAR_5, FUNC_2("[%d] installed %s"), VAR_9, VAR_7->uri);
            return VAR_4;
        }
        FUNC_0(VAR_5, FUNC_2("[%d] exists %s"), VAR_9, VAR_8->hd_calls[VAR_9]->uri);
    }
    FUNC_1(VAR_5, FUNC_2("no slots left for registering handler"));
    return VAR_1;
}
