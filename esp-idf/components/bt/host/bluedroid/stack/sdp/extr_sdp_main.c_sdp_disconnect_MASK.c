
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ con_state; int con_flags; scalar_t__ cur_uuid_idx; scalar_t__ connection_id; int user_data; int (* p_cb2 ) (scalar_t__,int ) ;int (* p_cb ) (scalar_t__) ;scalar_t__ disconnect_reason; TYPE_6__* p_db; scalar_t__ cur_handle; } ;
typedef TYPE_2__ tCONN_CB ;
typedef scalar_t__ UINT16 ;
struct TYPE_9__ {int uuid16; } ;
struct TYPE_12__ {int len; TYPE_1__ uu; } ;
struct TYPE_11__ {scalar_t__ num_uuid_filters; scalar_t__ p_first_rec; TYPE_7__* uuid_filters; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_6__*,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_6__*,TYPE_7__*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ) ;

void FUNC_8 (tCONN_CB *VAR_5, UINT16 VAR_6)
{
    FUNC_3 ("SDP - disconnect  CID: 0x%x\n", VAR_5->connection_id);


    if (VAR_5->connection_id != 0) {
        FUNC_0 (VAR_5->connection_id);
        VAR_5->disconnect_reason = VAR_6;
    }



    if (VAR_5->con_state == VAR_3) {

        if (VAR_5->p_cb) {
            (*VAR_5->p_cb) (VAR_6);
        } else if (VAR_5->p_cb2) {
            (*VAR_5->p_cb2) (VAR_6, VAR_5->user_data);
        }

        FUNC_5 (VAR_5);
    }

}
