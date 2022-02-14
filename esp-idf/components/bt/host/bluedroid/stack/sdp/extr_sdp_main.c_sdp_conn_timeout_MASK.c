
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user_data; int (* p_cb2 ) (int ,int ) ;int (* p_cb ) (int ) ;int connection_id; int con_state; } ;
typedef TYPE_1__ tCONN_CB ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5 (tCONN_CB *VAR_1)
{
    FUNC_1 ("SDP - CCB timeout in state: %d  CID: 0x%x\n",
                     VAR_1->con_state, VAR_1->connection_id);

    FUNC_0 (VAR_1->connection_id);


    if (VAR_1->p_cb) {
        (*VAR_1->p_cb) (VAR_0);
    } else if (VAR_1->p_cb2) {
        (*VAR_1->p_cb2) (VAR_0, VAR_1->user_data);
    }

    FUNC_2 (VAR_1);
}
