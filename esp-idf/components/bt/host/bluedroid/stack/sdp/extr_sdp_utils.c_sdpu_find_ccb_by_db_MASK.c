
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tSDP_DISCOVERY_DB ;
struct TYPE_4__ {scalar_t__ con_state; int * p_db; } ;
typedef TYPE_1__ tCONN_CB ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {TYPE_1__* ccb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;

tCONN_CB *FUNC_0 (tSDP_DISCOVERY_DB *VAR_3)
{

    UINT16 VAR_4;
    tCONN_CB *VAR_5;

    if (VAR_3) {

        for (VAR_4 = 0, VAR_5 = VAR_2.ccb; VAR_4 < VAR_0; VAR_4++, VAR_5++) {
            if ((VAR_5->con_state != VAR_1) && (VAR_5->p_db == VAR_3)) {
                return (VAR_5);
            }
        }
    }


    return (((void*)0));
}
