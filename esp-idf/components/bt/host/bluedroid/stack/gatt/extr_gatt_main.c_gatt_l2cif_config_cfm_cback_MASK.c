
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ result; } ;
typedef TYPE_1__ tL2CAP_CFG_INFO ;
struct TYPE_9__ {int ch_flags; int peer_bda; } ;
typedef TYPE_2__ tGATT_TCB ;
typedef int tGATTS_SRV_CHG ;
typedef int UINT16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;

void FUNC_9(UINT16 VAR_5, tL2CAP_CFG_INFO *VAR_6)
{
    tGATT_TCB *VAR_7;
    tGATTS_SRV_CHG *VAR_8 = ((void*)0);


    if ((VAR_7 = FUNC_4(VAR_5)) != ((void*)0)) {

        if ( FUNC_5(VAR_7) == VAR_0) {

            if (VAR_6->result == VAR_4) {

                VAR_7->ch_flags |= VAR_2;


                if (VAR_7->ch_flags & VAR_3) {
                    FUNC_8(VAR_7, VAR_1);

                    if ((VAR_8 = FUNC_6(VAR_7->peer_bda)) != ((void*)0)) {

                        FUNC_3(VAR_8);

                    } else {
                        if (FUNC_1(VAR_7->peer_bda)) {
                            FUNC_2(VAR_7->peer_bda);
                        }
                    }


                    FUNC_7(VAR_7);
                }
            }

            else {

                FUNC_0(VAR_5);
            }
        }
    }
}
