
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ conn_handle; scalar_t__* serv_handle; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
struct TYPE_6__ {scalar_t__ layer_specific; scalar_t__ event; } ;
struct TYPE_8__ {scalar_t__ port_handle; TYPE_1__ hdr; } ;
typedef TYPE_3__ tBTA_AG_RFC ;
typedef size_t UINT8 ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,scalar_t__) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(UINT32 VAR_7, UINT16 VAR_8, UINT16 VAR_9)
{
    tBTA_AG_RFC *VAR_10;
    tBTA_AG_SCB *VAR_11;
    UINT16 VAR_12;
    UINT8 VAR_13;
    BOOLEAN VAR_14 = VAR_4;

    FUNC_0("ag_mgmt_cback : code = %d, port_handle = %d, handle = %d",
                        VAR_7, VAR_8, VAR_9);

    if ((VAR_11 = FUNC_2(VAR_9)) != ((void*)0)) {

        if ((VAR_7 != VAR_5) && (VAR_8 != VAR_11->conn_handle)) {
            FUNC_0("ag_mgmt_cback ignoring handle:%d", VAR_8);
            return;
        }

        if (VAR_7 == VAR_5) {
            if (VAR_11->conn_handle) {

                if (VAR_8 == VAR_11->conn_handle)
                    VAR_14 = VAR_6;
            } else {

                for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
                    if (VAR_8 == VAR_11->serv_handle[VAR_13])
                        VAR_14 = VAR_6;
                }
            }

            if (!VAR_14) {
                FUNC_1 ("bta_ag_mgmt_cback: PORT_SUCCESS, ignoring handle = %d", VAR_8);
                return;
            }
            VAR_12 = VAR_2;
        } else if (VAR_8 == VAR_11->conn_handle) {

            VAR_12 = VAR_1;
        } else {
            VAR_12 = VAR_3;
        }

        if ((VAR_10 = (tBTA_AG_RFC *) FUNC_4(sizeof(tBTA_AG_RFC))) != ((void*)0)) {
            VAR_10->hdr.event = VAR_12;
            VAR_10->hdr.layer_specific = VAR_9;
            VAR_10->port_handle = VAR_8;
            FUNC_3(VAR_10);
        }
    }
}
