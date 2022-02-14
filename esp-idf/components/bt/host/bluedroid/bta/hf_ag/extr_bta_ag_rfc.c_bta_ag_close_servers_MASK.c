
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_SERVICE_MASK ;
struct TYPE_3__ {scalar_t__* serv_handle; } ;
typedef TYPE_1__ tBTA_AG_SCB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(tBTA_AG_SCB *VAR_2, tBTA_SERVICE_MASK VAR_3)
{
    int VAR_4;

    VAR_3 >>= VAR_1;
    for (VAR_4 = 0; VAR_4 < VAR_0 && VAR_3 != 0; VAR_4++, VAR_3 >>= 1) {

        if (VAR_3 & 1) {
            FUNC_0(VAR_2->serv_handle[VAR_4]);
            VAR_2->serv_handle[VAR_4] = 0;
        }
    }
}
