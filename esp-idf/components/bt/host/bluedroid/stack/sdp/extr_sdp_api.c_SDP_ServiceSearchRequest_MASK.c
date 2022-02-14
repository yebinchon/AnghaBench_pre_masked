
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tSDP_DISC_CMPL_CB ;
typedef int tSDP_DISCOVERY_DB ;
struct TYPE_3__ {int * p_cb; int * p_db; int disc_state; } ;
typedef TYPE_1__ tCONN_CB ;
typedef int UINT8 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;

BOOLEAN FUNC_1 (UINT8 *VAR_3, tSDP_DISCOVERY_DB *VAR_4,
                                  tSDP_DISC_CMPL_CB *VAR_5)
{

    tCONN_CB *VAR_6;


    VAR_6 = FUNC_0 (VAR_3);

    if (!VAR_6) {
        return (VAR_0);
    }

    VAR_6->disc_state = VAR_1;
    VAR_6->p_db = VAR_4;
    VAR_6->p_cb = VAR_5;

    return (VAR_2);



}
