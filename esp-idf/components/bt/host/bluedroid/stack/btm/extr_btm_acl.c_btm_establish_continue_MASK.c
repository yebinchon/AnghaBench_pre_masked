
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ transport; int handle; int p_features; int p_dc; int p_bdn; int p_bda; } ;
struct TYPE_9__ {TYPE_1__ conn; int event; } ;
typedef TYPE_2__ tBTM_BL_EVENT_DATA ;
struct TYPE_10__ {scalar_t__ transport; int hci_handle; int * peer_lmp_features; int remote_dc; int remote_name; int remote_addr; int link_up_issued; } ;
typedef TYPE_3__ tACL_CONN ;
struct TYPE_11__ {int (* p_bl_changed_cb ) (TYPE_2__*) ;scalar_t__ btm_def_link_policy; int btm_acl_pkt_types_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 TYPE_7__ VAR_5 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5 (tACL_CONN *VAR_6)
{
    tBTM_BL_EVENT_DATA VAR_7;
    FUNC_1 ("btm_establish_continue\n");




    {



        FUNC_3 (VAR_6, VAR_5.btm_acl_pkt_types_supported);

        if (VAR_5.btm_def_link_policy) {
            FUNC_0 (VAR_6->remote_addr, &VAR_5.btm_def_link_policy);
        }
    }

    VAR_6->link_up_issued = VAR_4;


    if (VAR_5.p_bl_changed_cb) {
        VAR_7.event = VAR_1;
        VAR_7.conn.p_bda = VAR_6->remote_addr;
        VAR_7.conn.p_bdn = VAR_6->remote_name;
        VAR_7.conn.p_dc = VAR_6->remote_dc;
        VAR_7.conn.p_features = VAR_6->peer_lmp_features[VAR_3];

        VAR_7.conn.handle = VAR_6->hci_handle;
        VAR_7.conn.transport = VAR_6->transport;


        (*VAR_5.p_bl_changed_cb)(&VAR_7);
    }
    FUNC_2 (VAR_0);
}
