
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tSDP_DISC_CMPL_CB2 ;
typedef int tSDP_DISCOVERY_DB ;
struct TYPE_3__ {void* user_data; int is_attr_search; int * p_cb2; int * p_db; int disc_state; } ;
typedef TYPE_1__ tCONN_CB ;
typedef int UINT8 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;

BOOLEAN FUNC_1 (UINT8 *VAR_3, tSDP_DISCOVERY_DB *VAR_4,
        tSDP_DISC_CMPL_CB2 *VAR_5, void *VAR_6)
{

    tCONN_CB *VAR_7;


    VAR_7 = FUNC_0 (VAR_3);

    if (!VAR_7) {
        return (VAR_0);
    }

    VAR_7->disc_state = VAR_1;
    VAR_7->p_db = VAR_4;
    VAR_7->p_cb2 = VAR_5;

    VAR_7->is_attr_search = VAR_2;
    VAR_7->user_data = VAR_6;

    return (VAR_2);



}
