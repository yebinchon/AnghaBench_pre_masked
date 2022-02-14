
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* esp_http_client_handle_t ;
struct TYPE_7__ {size_t method; void* auth_type; } ;
struct TYPE_8__ {scalar_t__ state; char* auth_header; int process_again; TYPE_2__ connection_info; TYPE_1__* auth_data; int redirect_counter; } ;
struct TYPE_6__ {int nc; void* opaque; void* nonce; void* qop; void* algorithm; void* realm; int method; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char**) ;
 int FUNC_7 (int ) ;

void FUNC_8(esp_http_client_handle_t VAR_6)
{
    if (VAR_6 == ((void*)0)) {
        return;
    }
    if (VAR_6->state != VAR_4) {
        return;
    }

    char *VAR_7 = VAR_6->auth_header;
    if (VAR_7) {
        FUNC_6(&VAR_7);
        FUNC_0(VAR_5, "UNAUTHORIZED: %s", VAR_7);
        VAR_6->redirect_counter++;
        if (FUNC_5(VAR_7, "Digest") == 0) {
            FUNC_0(VAR_5, "type = Digest");
            VAR_6->connection_info.auth_type = VAR_1;





        } else {
            VAR_6->connection_info.auth_type = VAR_2;
            FUNC_1(VAR_5, "This authentication method is not supported: %s", VAR_7);
            return;
        }

        FUNC_3(VAR_6);

        VAR_6->auth_data->method = FUNC_7(VAR_3[VAR_6->connection_info.method]);

        VAR_6->auth_data->nc = 1;
        VAR_6->auth_data->realm = FUNC_4(VAR_7, "realm=\"", "\"");
        VAR_6->auth_data->algorithm = FUNC_4(VAR_7, "algorithm=", ",");
        VAR_6->auth_data->qop = FUNC_4(VAR_7, "qop=\"", "\"");
        VAR_6->auth_data->nonce = FUNC_4(VAR_7, "nonce=\"", "\"");
        VAR_6->auth_data->opaque = FUNC_4(VAR_7, "opaque=\"", "\"");
        VAR_6->process_again = 1;
    } else {
        VAR_6->connection_info.auth_type = VAR_2;
        FUNC_2(VAR_5, "This request requires authentication, but does not provide header information for that");
    }
}
