
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_VS_EVT_CB ;
typedef int tBTM_STATUS ;
typedef size_t UINT8 ;
struct TYPE_3__ {int ** p_vend_spec_cb; } ;
struct TYPE_4__ {TYPE_1__ devcb; } ;
typedef scalar_t__ BOOLEAN ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;

tBTM_STATUS FUNC_2 (tBTM_VS_EVT_CB *VAR_5, BOOLEAN VAR_6)
{
    tBTM_STATUS VAR_7 = VAR_2;
    UINT8 VAR_8, VAR_9 = VAR_0;


    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
        if (VAR_4.devcb.p_vend_spec_cb[VAR_8] == ((void*)0)) {

            VAR_9 = VAR_8;
        } else if (VAR_4.devcb.p_vend_spec_cb[VAR_8] == VAR_5) {

            if (VAR_6 == VAR_3) {
                VAR_4.devcb.p_vend_spec_cb[VAR_8] = ((void*)0);
                FUNC_1("BTM Deregister For VSEvents is successfully");
            }
            return (VAR_2);
        }
    }


    if (VAR_6) {
        if (VAR_9 < VAR_0) {
            VAR_4.devcb.p_vend_spec_cb[VAR_9] = VAR_5;
            FUNC_1("BTM Register For VSEvents is successfully");
        } else {

            FUNC_0 ("BTM_RegisterForVSEvents: too many callbacks registered");

            VAR_7 = VAR_1;
        }
    }

    return (VAR_7);
}
