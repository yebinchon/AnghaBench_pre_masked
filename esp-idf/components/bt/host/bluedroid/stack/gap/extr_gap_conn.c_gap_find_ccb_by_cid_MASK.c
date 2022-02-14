
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ con_state; scalar_t__ connection_id; } ;
typedef TYPE_2__ tGAP_CCB ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {TYPE_2__* ccb_pool; } ;
struct TYPE_7__ {TYPE_1__ conn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static tGAP_CCB *FUNC_0 (UINT16 VAR_3)
{
    UINT16 VAR_4;
    tGAP_CCB *VAR_5;


    for (VAR_4 = 0, VAR_5 = VAR_2.conn.ccb_pool; VAR_4 < VAR_1; VAR_4++, VAR_5++) {
        if ((VAR_5->con_state != VAR_0) && (VAR_5->connection_id == VAR_3)) {
            return (VAR_5);
        }
    }


    return (((void*)0));
}
