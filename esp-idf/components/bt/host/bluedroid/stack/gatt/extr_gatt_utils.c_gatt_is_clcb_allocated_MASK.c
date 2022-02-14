
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {TYPE_1__* clcb; } ;
struct TYPE_3__ {scalar_t__ conn_id; scalar_t__ in_use; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

BOOLEAN FUNC_0 (UINT16 VAR_4)
{
    UINT8 VAR_5 = 0;
    BOOLEAN VAR_6 = VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        if (VAR_3.clcb[VAR_5].in_use && (VAR_3.clcb[VAR_5].conn_id == VAR_4)) {
            VAR_6 = VAR_2;
            break;
        }
    }

    return VAR_6;
}
