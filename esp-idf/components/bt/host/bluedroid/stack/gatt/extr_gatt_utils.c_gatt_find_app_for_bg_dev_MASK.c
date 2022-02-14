
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tGATT_IF ;
struct TYPE_3__ {scalar_t__* gatt_if; } ;
typedef TYPE_1__ tGATT_BG_CONN_DEV ;
typedef size_t UINT8 ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;

BOOLEAN FUNC_1(BD_ADDR VAR_3, tGATT_IF *VAR_4)
{
    tGATT_BG_CONN_DEV *VAR_5 = ((void*)0);
    UINT8 VAR_6;
    BOOLEAN VAR_7 = VAR_0;

    if ((VAR_5 = FUNC_0(VAR_3)) == ((void*)0)) {
        return VAR_7;
    }

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6 ++) {
        if (VAR_5->gatt_if[VAR_6] != 0 ) {
            *VAR_4 = VAR_5->gatt_if[VAR_6];
            VAR_7 = VAR_2;
            break;
        }
    }
    return VAR_7;
}
