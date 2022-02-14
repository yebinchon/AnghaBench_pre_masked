
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ conn_handle; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {scalar_t__ layer_specific; int event; } ;
typedef TYPE_2__ BT_HDR ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(UINT32 VAR_1, UINT16 VAR_2, UINT16 VAR_3)
{
    BT_HDR *VAR_4;
    tBTA_AG_SCB *VAR_5;
    FUNC_1(VAR_1);

    if ((VAR_5 = FUNC_2(VAR_3)) != ((void*)0)) {

        if (VAR_2 != VAR_5->conn_handle) {
            FUNC_0("ag_port_cback ignoring handle:%d conn_handle = %d other handle = %d",
                              VAR_2, VAR_5->conn_handle, VAR_3);
            return;
        }

        if ((VAR_4 = (BT_HDR *) FUNC_4(sizeof(BT_HDR))) != ((void*)0)) {
            VAR_4->event = VAR_0;
            VAR_4->layer_specific = VAR_3;
            FUNC_3(VAR_4);
        }
    }
}
