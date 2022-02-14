
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_HF_CLIENT_DATA ;
struct TYPE_3__ {scalar_t__ deregister; int peer_addr; scalar_t__ conn_handle; int negotiated_codec; scalar_t__ send_at_reply; scalar_t__ svc_conn; int role; scalar_t__ chld_features; scalar_t__ peer_features; } ;
struct TYPE_4__ {TYPE_1__ scb; int (* p_cback ) (int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,int *) ;

void FUNC_10(tBTA_HF_CLIENT_DATA *VAR_7)
{
    FUNC_0(VAR_7);


    VAR_6.scb.peer_features = 0;
    VAR_6.scb.chld_features = 0;
    VAR_6.scb.role = VAR_0;
    VAR_6.scb.svc_conn = VAR_4;
    VAR_6.scb.send_at_reply = VAR_4;
    VAR_6.scb.negotiated_codec = VAR_3;

    FUNC_2();

    FUNC_7(VAR_2, 1, VAR_6.scb.peer_addr);


    (*VAR_6.p_cback)(VAR_1, ((void*)0));


    if (VAR_6.scb.deregister == VAR_4) {

        FUNC_1(VAR_6.scb.peer_addr, VAR_5);


        FUNC_6();

        VAR_6.scb.conn_handle = 0;


        FUNC_5(((void*)0));

        FUNC_8(VAR_2, 1, VAR_6.scb.peer_addr);
    }

    else {
        FUNC_3();
        FUNC_4();
    }
}
