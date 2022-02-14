
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user_data; int disconnect_reason; int (* p_cb2 ) (int ,int ) ;int (* p_cb ) (int ) ;} ;
typedef TYPE_1__ tCONN_CB ;
typedef int UINT16 ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7 (UINT16 VAR_0, UINT16 VAR_1)
{
    tCONN_CB *VAR_2;
    FUNC_2(VAR_1);


    if ((VAR_2 = FUNC_3 (VAR_0)) == ((void*)0)) {
        FUNC_1 ("SDP - Rcvd L2CAP disc cfm, unknown CID: 0x%x\n", VAR_0);
        return;
    }

    FUNC_0 ("SDP - Rcvd L2CAP disc cfm, CID: 0x%x, rsn %d\n", VAR_0, VAR_2->disconnect_reason);

    if (VAR_2->p_cb) {
        (*VAR_2->p_cb) (VAR_2->disconnect_reason);
    } else if (VAR_2->p_cb2) {
        (*VAR_2->p_cb2) (VAR_2->disconnect_reason, VAR_2->user_data);
    }


    FUNC_4 (VAR_2);
}
