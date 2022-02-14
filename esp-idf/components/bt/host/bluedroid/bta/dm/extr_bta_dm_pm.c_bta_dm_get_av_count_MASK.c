
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_4__ {int count; TYPE_1__* conn_srvc; } ;
struct TYPE_3__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;

UINT8 FUNC_0(void)
{
    UINT8 VAR_2 = 0;
    for (int VAR_3 = 0; VAR_3 < VAR_1.count; VAR_3++) {
        if (VAR_1.conn_srvc[VAR_3].id == VAR_0) {
            ++VAR_2;
        }
    }
    return VAR_2;
}
