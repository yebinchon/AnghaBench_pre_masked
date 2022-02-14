
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* serv_handle; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef size_t UINT8 ;
typedef int BOOLEAN ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

BOOLEAN FUNC_0 (tBTA_AG_SCB *VAR_3)
{
    UINT8 VAR_4;
    BOOLEAN VAR_5 = VAR_2;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (VAR_3->serv_handle[VAR_4] != 0)
            VAR_5 = VAR_1;
    }
    return VAR_5;
}
