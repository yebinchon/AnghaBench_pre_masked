
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int id; } ;
typedef TYPE_1__ session_t ;
typedef scalar_t__ protocomm_security_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static esp_err_t FUNC_2(protocomm_security_handle_t VAR_3, uint32_t VAR_4)
{
    session_t *VAR_5 = (session_t *) VAR_3;
    if (!VAR_5) {
        return VAR_0;
    }

    if (VAR_5->id != -1) {

        FUNC_0(VAR_2, "Closing old session with id %u", VAR_5->id);
        FUNC_1(VAR_5, VAR_4);
    }

    VAR_5->id = VAR_4;
    return VAR_1;
}
