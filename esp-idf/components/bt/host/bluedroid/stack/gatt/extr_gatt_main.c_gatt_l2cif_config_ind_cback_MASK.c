
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ mtu; int result; scalar_t__ mtu_present; } ;
typedef TYPE_1__ tL2CAP_CFG_INFO ;
struct TYPE_10__ {scalar_t__ payload_size; int ch_flags; int peer_bda; } ;
typedef TYPE_2__ tGATT_TCB ;
typedef int tGATTS_SRV_CHG ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

void FUNC_9(UINT16 VAR_6, tL2CAP_CFG_INFO *VAR_7)
{
    tGATT_TCB *VAR_8;
    tGATTS_SRV_CHG *VAR_9 = ((void*)0);

    if ((VAR_8 = FUNC_4(VAR_6)) != ((void*)0)) {

        if ( VAR_7->mtu_present &&
                (VAR_7->mtu >= VAR_3 && VAR_7->mtu < VAR_5)) {
            VAR_8->payload_size = VAR_7->mtu;
        } else {
            VAR_8->payload_size = VAR_5;
        }


        FUNC_8(VAR_7, 0, sizeof(tL2CAP_CFG_INFO));
        VAR_7->result = VAR_4;
        FUNC_0(VAR_6, VAR_7);


        if ((VAR_8->ch_flags & VAR_2) == 0) {

            VAR_8->ch_flags |= VAR_2;


            if (VAR_8->ch_flags & VAR_1) {
                FUNC_7(VAR_8, VAR_0);
                if ((VAR_9 = FUNC_5(VAR_8->peer_bda)) != ((void*)0)) {

                    FUNC_3(VAR_9);

                } else {
                    if (FUNC_1(VAR_8->peer_bda)) {
                        FUNC_2(VAR_8->peer_bda);
                    }
                }


                FUNC_6(VAR_8);
            }
        }
    }
}
