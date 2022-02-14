
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int protocomm_req_handler_t ;
typedef int esp_err_t ;
struct TYPE_4__ {char const* command; char* help; int func; } ;
typedef TYPE_1__ esp_console_cmd_t ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static esp_err_t FUNC_2(const char *VAR_1, protocomm_req_handler_t VAR_2, void *VAR_3)
{
    (void) VAR_2;
    (void) VAR_3;

    esp_err_t VAR_4;
    esp_console_cmd_t VAR_5;
    FUNC_1(&VAR_5, 0, sizeof(VAR_5));

    VAR_5.command = VAR_1;
    VAR_5.help = "";
    VAR_5.func = VAR_0;

    VAR_4 = FUNC_0(&VAR_5);

    return VAR_4;
}
