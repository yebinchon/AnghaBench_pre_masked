
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
typedef TYPE_1__ session_t ;
typedef scalar_t__ protocomm_security_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static esp_err_t FUNC_2(protocomm_security_handle_t *VAR_4)
{
    if (!VAR_4) {
        return VAR_0;
    }
    session_t *VAR_5 = (session_t *) FUNC_1(1, sizeof(session_t));
    if (!VAR_5) {
        FUNC_0(VAR_3, "Error allocating new session");
        return VAR_1;
    }
    VAR_5->id = -1;
    *VAR_4 = (protocomm_security_handle_t) VAR_5;
    return VAR_2;
}
