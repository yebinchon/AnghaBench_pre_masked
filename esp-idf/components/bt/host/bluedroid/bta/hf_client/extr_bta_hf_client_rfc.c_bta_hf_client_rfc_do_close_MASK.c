
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int event; } ;
struct TYPE_8__ {TYPE_1__ hdr; } ;
typedef TYPE_3__ tBTA_HF_CLIENT_RFC ;
typedef int tBTA_HF_CLIENT_DATA ;
struct TYPE_7__ {scalar_t__ p_disc_db; scalar_t__ conn_handle; } ;
struct TYPE_9__ {TYPE_2__ scb; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 TYPE_5__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(tBTA_HF_CLIENT_DATA *VAR_2)
{
    tBTA_HF_CLIENT_RFC *VAR_3;
    FUNC_2(VAR_2);

    if (VAR_1.scb.conn_handle) {
        FUNC_0(VAR_1.scb.conn_handle);
    } else {



        if ((VAR_3 = (tBTA_HF_CLIENT_RFC *) FUNC_5(sizeof(tBTA_HF_CLIENT_RFC))) != ((void*)0)) {
            VAR_3->hdr.event = VAR_0;
            FUNC_4(VAR_3);
        }


        if (VAR_1.scb.p_disc_db) {
            (void)FUNC_1 (VAR_1.scb.p_disc_db);
            FUNC_3(((void*)0));
        }
    }
}
