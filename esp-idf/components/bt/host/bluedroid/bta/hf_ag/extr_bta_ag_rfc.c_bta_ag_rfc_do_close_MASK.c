
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ conn_handle; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
struct TYPE_7__ {int layer_specific; int event; } ;
struct TYPE_9__ {TYPE_1__ hdr; } ;
typedef TYPE_3__ tBTA_AG_RFC ;
typedef int tBTA_AG_DATA ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(tBTA_AG_SCB *VAR_1, tBTA_AG_DATA *VAR_2)
{
    tBTA_AG_RFC *VAR_3;
    FUNC_1(VAR_2);

    if (VAR_1->conn_handle) {
        FUNC_0(VAR_1->conn_handle);
    } else {



        if ((VAR_3 = (tBTA_AG_RFC *) FUNC_4(sizeof(tBTA_AG_RFC))) != ((void*)0)) {
            VAR_3->hdr.event = VAR_0;
            VAR_3->hdr.layer_specific = FUNC_2(VAR_1);
            FUNC_3(VAR_3);
        }







    }
}
