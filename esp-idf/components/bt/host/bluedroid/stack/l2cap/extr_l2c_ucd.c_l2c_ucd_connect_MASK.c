
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tL2C_RCB ;
struct TYPE_11__ {int info_rx_bits; int peer_ext_fea; scalar_t__ link_state; } ;
typedef TYPE_1__ tL2C_LCB ;
struct TYPE_12__ {int chnl_state; int * p_rcb; int fixed_chnl_idle_tout; void* remote_cid; void* local_cid; } ;
typedef TYPE_2__ tL2C_CCB ;
typedef scalar_t__ BOOLEAN ;
typedef int* BD_ADDR ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (int*,scalar_t__,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_7 (TYPE_1__*,void*) ;
 TYPE_1__* FUNC_8 (int*,int ) ;
 int * FUNC_9 (int ) ;

__attribute__((used)) static BOOLEAN FUNC_10 ( BD_ADDR VAR_11 )
{
    tL2C_LCB *VAR_12;
    tL2C_CCB *VAR_13;
    tL2C_RCB *VAR_14;

    FUNC_1 ("l2c_ucd_connect()  BDA: %08x%04x",
                       (VAR_11[0] << 24) + (VAR_11[1] << 16) + (VAR_11[2] << 8) + VAR_11[3],
                       (VAR_11[4] << 8) + VAR_11[5]);


    if (!FUNC_0()) {
        FUNC_2 ("l2c_ucd_connect - BTU not ready");
        return (VAR_2);
    }


    if ((VAR_12 = FUNC_8 (VAR_11, VAR_0)) == ((void*)0)) {

        if ( ((VAR_12 = FUNC_4 (VAR_11, VAR_2, VAR_0)) == ((void*)0))
                || (FUNC_6(VAR_12, VAR_0) == VAR_2) ) {
            FUNC_2 ("L2CAP - conn not started l2c_ucd_connect");
            return (VAR_2);
        }
    } else if ( VAR_12->info_rx_bits & (1 << VAR_4) ) {
        if (!(VAR_12->peer_ext_fea & VAR_5)) {
            FUNC_2 ("L2CAP - UCD is not supported by peer, l2c_ucd_connect");
            return (VAR_2);
        }
    }


    if ((VAR_13 = FUNC_7 (VAR_12, VAR_3)) == ((void*)0)) {

        if ((VAR_13 = FUNC_3 (VAR_12, 0)) == ((void*)0)) {
            FUNC_2 ("L2CAP - no CCB for l2c_ucd_connect");
            return (VAR_2);
        } else {

            VAR_13->local_cid = VAR_3;
            VAR_13->remote_cid = VAR_3;


            VAR_13->fixed_chnl_idle_tout = VAR_7;


            FUNC_5 (VAR_13, VAR_6);

            if ((VAR_14 = FUNC_9 (VAR_8)) == ((void*)0)) {
                FUNC_2 ("L2CAP - no UCD registered, l2c_ucd_connect");
                return (VAR_2);
            }

            VAR_13->p_rcb = VAR_14;


            if (VAR_12->link_state == VAR_9) {
                VAR_13->chnl_state = VAR_1;
            }
        }
    }

    return (VAR_10);
}
