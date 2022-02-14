
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* gatt_if; } ;
typedef TYPE_1__ tGATT_BG_CONN_DEV ;
typedef size_t UINT8 ;
typedef int BD_ADDR ;


 size_t VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

UINT8 FUNC_1(BD_ADDR VAR_1)
{
    tGATT_BG_CONN_DEV *VAR_2 = ((void*)0);
    UINT8 VAR_3;
    UINT8 VAR_4 = 0;

    if ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) {
        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3 ++) {
            if (VAR_2->gatt_if[VAR_3]) {
                VAR_4++;
            }
        }
    }
    return VAR_4;
}
