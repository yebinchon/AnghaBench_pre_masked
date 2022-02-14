
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* esp_http_client_handle_t ;
typedef int esp_err_t ;
typedef int connection_info_t ;
struct TYPE_7__ {struct TYPE_7__* url; struct TYPE_7__* scheme; struct TYPE_7__* password; struct TYPE_7__* username; struct TYPE_7__* query; struct TYPE_7__* host; struct TYPE_7__* path; } ;
struct TYPE_6__ {TYPE_2__ connection_info; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static esp_err_t FUNC_3(esp_http_client_handle_t VAR_1)
{
    FUNC_0(VAR_1->connection_info.path);
    FUNC_0(VAR_1->connection_info.host);
    FUNC_0(VAR_1->connection_info.query);
    FUNC_0(VAR_1->connection_info.username);
    if (VAR_1->connection_info.password) {
        FUNC_1(VAR_1->connection_info.password, 0, FUNC_2(VAR_1->connection_info.password));
        FUNC_0(VAR_1->connection_info.password);
    }
    FUNC_0(VAR_1->connection_info.scheme);
    FUNC_0(VAR_1->connection_info.url);
    FUNC_1(&VAR_1->connection_info, 0, sizeof(connection_info_t));
    return VAR_0;
}
