
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int disc_state; int timer_entry; } ;
typedef TYPE_1__ tCONN_CB ;
typedef int UINT8 ;
struct TYPE_10__ {int offset; int len; } ;
typedef TYPE_2__ BT_HDR ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int,int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (char*,int,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int*) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_1__*,int*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

void FUNC_7 (tCONN_CB *VAR_6, BT_HDR *VAR_7)
{
    UINT8 *VAR_8, VAR_9;
    BOOLEAN VAR_10 = VAR_5;


    FUNC_1("sdp_disc_server_rsp disc_state:%d\n", VAR_6->disc_state);



    FUNC_2 (&VAR_6->timer_entry);


    VAR_8 = (UINT8 *)(VAR_7 + 1) + VAR_7->offset;

    FUNC_0 (VAR_9, VAR_8);

    VAR_7->len--;

    switch (VAR_9) {
    case 128:
        if (VAR_6->disc_state == VAR_2) {
            FUNC_5 (VAR_6, VAR_8);
            VAR_10 = VAR_0;
        }
        break;

    case 130:
        if (VAR_6->disc_state == VAR_1) {
            FUNC_3 (VAR_6, VAR_8);
            VAR_10 = VAR_0;
        }
        break;

    case 129:
        if (VAR_6->disc_state == VAR_3) {
            FUNC_4 (VAR_6, VAR_8);
            VAR_10 = VAR_0;
        }
        break;
    }

    if (VAR_10) {
        FUNC_1 ("SDP - Unexp. PDU: %d in state: %d\n", VAR_9, VAR_6->disc_state);
        FUNC_6 (VAR_6, VAR_4);
    }
}
