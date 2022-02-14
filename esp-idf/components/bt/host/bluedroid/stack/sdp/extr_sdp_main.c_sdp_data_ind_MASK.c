
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ con_state; int con_flags; } ;
typedef TYPE_1__ tCONN_CB ;
typedef int UINT16 ;
typedef int BT_HDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5 (UINT16 VAR_2, BT_HDR *VAR_3)
{
    tCONN_CB *VAR_4;


    if ((VAR_4 = FUNC_4 (VAR_2)) != ((void*)0)) {
        if (VAR_4->con_state == VAR_1) {
            if (VAR_4->con_flags & VAR_0) {
                FUNC_2 (VAR_4, VAR_3);
            } else {
                FUNC_3 (VAR_4, VAR_3);
            }
        } else {
            FUNC_0 ("SDP - Ignored L2CAP data while in state: %d, CID: 0x%x\n",
                               VAR_4->con_state, VAR_2);
        }
    } else {
        FUNC_0 ("SDP - Rcvd L2CAP data, unknown CID: 0x%x\n", VAR_2);
    }

    FUNC_1 (VAR_3);
}
