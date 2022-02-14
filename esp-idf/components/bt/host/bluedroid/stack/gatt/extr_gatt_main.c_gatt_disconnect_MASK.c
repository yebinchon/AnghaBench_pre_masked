
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ att_lcid; int peer_bda; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef scalar_t__ tGATT_CH_STATE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;

BOOLEAN FUNC_6 (tGATT_TCB *VAR_5)
{
    BOOLEAN VAR_6 = VAR_0;
    tGATT_CH_STATE VAR_7;
    FUNC_0 ("gatt_disconnect ");

    if (VAR_5 != ((void*)0)) {
        VAR_6 = VAR_4;
        if ( (VAR_7 = FUNC_4(VAR_5)) != VAR_1 ) {
            if (VAR_5->att_lcid == VAR_3) {
                if (VAR_7 == VAR_2) {

                    VAR_6 = FUNC_3 (VAR_3, VAR_5->peer_bda);
                } else {
                    FUNC_5(VAR_5, VAR_1);
                    VAR_6 = FUNC_1 (VAR_5->peer_bda);
                }

            } else {
                VAR_6 = FUNC_2(VAR_5->att_lcid);

            }
        } else {
            FUNC_0 ("gatt_disconnect already in closing state");
        }
    }

    return VAR_6;
}
