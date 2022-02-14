
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tGATT_IF ;
struct TYPE_3__ {scalar_t__* gatt_if; scalar_t__ in_use; } ;
typedef TYPE_1__ tGATT_BG_CONN_DEV ;
typedef size_t UINT8 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

BOOLEAN FUNC_0(tGATT_BG_CONN_DEV *VAR_3, tGATT_IF VAR_4)
{
    UINT8 VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 ++ ) {
        if (VAR_3->in_use && (VAR_3->gatt_if[VAR_5] == VAR_4)) {
            return VAR_2;
        }
    }
    return VAR_0;
}
