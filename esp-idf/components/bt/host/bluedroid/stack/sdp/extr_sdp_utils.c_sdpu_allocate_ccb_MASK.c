
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ param; } ;
struct TYPE_6__ {scalar_t__ con_state; TYPE_5__ timer_entry; } ;
typedef TYPE_1__ tCONN_CB ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {TYPE_1__* ccb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_3__ VAR_2 ;

tCONN_CB *FUNC_2 (void)
{
    UINT16 VAR_3;
    tCONN_CB *VAR_4;


    for (VAR_3 = 0, VAR_4 = VAR_2.ccb; VAR_3 < VAR_0; VAR_3++, VAR_4++) {
        if (VAR_4->con_state == VAR_1) {
            FUNC_0(&VAR_4->timer_entry);
            FUNC_1 (VAR_4, 0, sizeof (tCONN_CB));

            VAR_4->timer_entry.param = (UINT32) VAR_4;

            return (VAR_4);
        }
    }


    return (((void*)0));
}
