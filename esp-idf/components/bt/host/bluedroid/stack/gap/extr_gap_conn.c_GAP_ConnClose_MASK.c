
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ con_state; int connection_id; } ;
typedef TYPE_1__ tGAP_CCB ;
typedef int UINT16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

UINT16 FUNC_4 (UINT16 VAR_3)
{
    tGAP_CCB *VAR_4 = FUNC_2 (VAR_3);

    FUNC_0 ("GAP_CONN - close  handle: 0x%x", VAR_3);

    if (VAR_4) {

        if (VAR_4->con_state != VAR_1) {
            FUNC_1 (VAR_4->connection_id);
        }

        FUNC_3 (VAR_4);

        return (VAR_0);
    }

    return (VAR_2);
}
