
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_3__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_10__ {int nc; scalar_t__ cnonce; int uri; } ;
struct TYPE_8__ {scalar_t__ auth_type; int password; scalar_t__ username; int path; } ;
struct TYPE_9__ {int first_line_prepared; TYPE_4__* auth_data; TYPE_2__ connection_info; int parser; TYPE_1__* response; scalar_t__ process_again; } ;
struct TYPE_7__ {scalar_t__ data_process; } ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,char*,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__,int ) ;
 char* FUNC_5 (scalar_t__,int ,TYPE_4__*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static esp_err_t FUNC_7(esp_http_client_handle_t VAR_5)
{
    VAR_5->process_again = 0;
    VAR_5->response->data_process = 0;
    VAR_5->first_line_prepared = 0;
    FUNC_6(VAR_5->parser, VAR_3);
    if (VAR_5->connection_info.username) {
        char *VAR_6 = ((void*)0);

        if (VAR_5->connection_info.auth_type == VAR_1) {
            VAR_6 = FUNC_4(VAR_5->connection_info.username, VAR_5->connection_info.password);
        } else if (VAR_5->connection_info.auth_type == VAR_2 && VAR_5->auth_data) {
            VAR_5->auth_data->uri = VAR_5->connection_info.path;
            VAR_5->auth_data->cnonce = ((uint64_t)FUNC_2() << 32) + FUNC_2();
            VAR_6 = FUNC_5(VAR_5->connection_info.username, VAR_5->connection_info.password, VAR_5->auth_data);
            VAR_5->auth_data->nc ++;
        }

        if (VAR_6) {
            FUNC_0(VAR_4, "auth_response=%s", VAR_6);
            FUNC_1(VAR_5, "Authorization", VAR_6);
            FUNC_3(VAR_6);
        }
    }
    return VAR_0;
}
