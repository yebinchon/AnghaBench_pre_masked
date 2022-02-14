
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ att_lcid; int transport; int peer_bda; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int tGATT_IF ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,scalar_t__) ;

void FUNC_5 (tGATT_IF VAR_4, tGATT_TCB *VAR_5, BOOLEAN VAR_6, BOOLEAN VAR_7)
{
    FUNC_2("gatt_update_app_use_link_flag  is_add=%d chk_link=%d",
                     VAR_6, VAR_7);

    FUNC_4(VAR_4, VAR_5, VAR_6);

    if (VAR_7 &&
            VAR_5 &&
            VAR_5->att_lcid == VAR_3 &&
            (FUNC_0(VAR_5->peer_bda, VAR_5->transport) != VAR_0)) {
        if (VAR_6) {
            FUNC_2("GATT disables link idle timer");

            FUNC_1(VAR_5->peer_bda, VAR_2, VAR_5->transport);
        } else {
            if (!FUNC_3(VAR_5)) {


                FUNC_2("GATT starts link idle timer =%d sec", VAR_1);
                FUNC_1(VAR_5->peer_bda, VAR_1, VAR_5->transport);
            }

        }
    }
}
