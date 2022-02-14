
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
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static esp_err_t FUNC_2(protocomm_security_handle_t VAR_1)
{
    session_t *VAR_2 = (session_t *) VAR_1;
    if (VAR_2) {
        FUNC_1(VAR_1, VAR_2->id);
    }
    FUNC_0(VAR_1);
    return VAR_0;
}
