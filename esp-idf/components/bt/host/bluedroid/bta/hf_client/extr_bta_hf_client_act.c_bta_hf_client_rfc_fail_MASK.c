
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_HF_CLIENT_DATA ;
struct TYPE_3__ {int negotiated_codec; void* send_at_reply; void* svc_conn; int role; scalar_t__ chld_features; scalar_t__ peer_features; scalar_t__ conn_handle; } ;
struct TYPE_4__ {TYPE_1__ scb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;

void FUNC_4(tBTA_HF_CLIENT_DATA *VAR_5)
{
    FUNC_0(VAR_5);


    VAR_4.scb.conn_handle = 0;
    VAR_4.scb.peer_features = 0;
    VAR_4.scb.chld_features = 0;
    VAR_4.scb.role = VAR_0;
    VAR_4.scb.svc_conn = VAR_3;
    VAR_4.scb.send_at_reply = VAR_3;
    VAR_4.scb.negotiated_codec = VAR_2;

    FUNC_1();


    FUNC_3();


    FUNC_2(((void*)0), VAR_1);
}
