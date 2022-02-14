
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int id; scalar_t__ state; int ctx_aes; } ;
typedef TYPE_1__ session_t ;
typedef scalar_t__ protocomm_security_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static esp_err_t FUNC_3(protocomm_security_handle_t VAR_5, uint32_t VAR_6)
{
    session_t *VAR_7 = (session_t *) VAR_5;
    if (!VAR_7) {
        return VAR_0;
    }

    if (!VAR_7 || VAR_7->id != VAR_6) {
        FUNC_0(VAR_4, "Attempt to close invalid session");
        return VAR_1;
    }

    if (VAR_7->state == VAR_3) {

        FUNC_1(&VAR_7->ctx_aes);
    }

    FUNC_2(VAR_7, 0, sizeof(session_t));
    VAR_7->id = -1;
    return VAR_2;
}
