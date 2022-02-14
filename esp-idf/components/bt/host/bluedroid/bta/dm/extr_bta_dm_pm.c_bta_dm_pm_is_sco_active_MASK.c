
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; TYPE_1__* conn_srvc; } ;
struct TYPE_3__ {scalar_t__ id; scalar_t__ state; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static BOOLEAN FUNC_1 (void)
{
    int VAR_5;
    BOOLEAN VAR_6 = VAR_2;

    for (VAR_5 = 0; VAR_5 < VAR_4.count ; VAR_5++) {

        if ( (VAR_4.conn_srvc[VAR_5].id == VAR_0 ) && (VAR_4.conn_srvc[VAR_5].state == VAR_1) ) {
            VAR_6 = VAR_3;
            break;
        }
    }

    FUNC_0("bta_dm_is_sco_active: SCO active: %d", VAR_6);
    return VAR_6;
}
