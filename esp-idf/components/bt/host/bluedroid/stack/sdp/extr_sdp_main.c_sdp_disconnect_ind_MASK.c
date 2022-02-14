
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ con_state; int user_data; int (* p_cb2 ) (int ,int ) ;int (* p_cb ) (int ) ;} ;
typedef TYPE_1__ tCONN_CB ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7 (UINT16 VAR_3, BOOLEAN VAR_4)
{
    tCONN_CB *VAR_5;


    if ((VAR_5 = FUNC_3 (VAR_3)) == ((void*)0)) {
        FUNC_2 ("SDP - Rcvd L2CAP disc, unknown CID: 0x%x\n", VAR_3);
        return;
    }

    if (VAR_4) {
        FUNC_0 (VAR_3);
    }

    FUNC_1 ("SDP - Rcvd L2CAP disc, CID: 0x%x\n", VAR_3);


    if (VAR_5->p_cb) {
        (*VAR_5->p_cb) ((UINT16) ((VAR_5->con_state == VAR_1) ?
                                  VAR_2 : VAR_0));
    } else if (VAR_5->p_cb2) {
        (*VAR_5->p_cb2) ((UINT16) ((VAR_5->con_state == VAR_1) ?
                                   VAR_2 : VAR_0), VAR_5->user_data);
    }


    FUNC_4 (VAR_5);
}
