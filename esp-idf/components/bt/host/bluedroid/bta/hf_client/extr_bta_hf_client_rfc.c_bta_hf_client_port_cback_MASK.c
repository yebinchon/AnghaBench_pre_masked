
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {scalar_t__ conn_handle; } ;
struct TYPE_7__ {TYPE_1__ scb; } ;
struct TYPE_6__ {int event; } ;
typedef TYPE_2__ BT_HDR ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(UINT32 VAR_2, UINT16 VAR_3)
{
    BT_HDR *VAR_4;
    FUNC_1(VAR_2);


    if (VAR_3 != VAR_1.scb.conn_handle) {
        FUNC_0("bta_hf_client_port_cback ignoring handle:%d conn_handle = %d",
                         VAR_3, VAR_1.scb.conn_handle);
        return;
    }

    if ((VAR_4 = (BT_HDR *) FUNC_3(sizeof(BT_HDR))) != ((void*)0)) {
        VAR_4->event = VAR_0;
        FUNC_2(VAR_4);
    }
}
