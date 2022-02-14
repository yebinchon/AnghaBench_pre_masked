
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tSDP_DISCOVERY_DB ;
struct TYPE_4__ {int disc_state; } ;
typedef TYPE_1__ tCONN_CB ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int *) ;

BOOLEAN FUNC_2 (tSDP_DISCOVERY_DB *VAR_4)
{

    tCONN_CB *VAR_5 = FUNC_1 (VAR_4);
    if (!VAR_5) {
        return (VAR_0);
    }

    FUNC_0 (VAR_5, VAR_1);
    VAR_5->disc_state = VAR_2;

    return (VAR_3);
}
