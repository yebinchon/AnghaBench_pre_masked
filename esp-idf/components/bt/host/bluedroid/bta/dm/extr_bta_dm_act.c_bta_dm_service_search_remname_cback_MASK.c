
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_4__ {int length; scalar_t__ status; scalar_t__* remote_bd_name; } ;
typedef TYPE_1__ tBTM_REMOTE_DEV_NAME ;
typedef int tBTM_CMPL_CB ;
struct TYPE_5__ {int peer_bdaddr; } ;
typedef int DEV_CLASS ;
typedef scalar_t__ BD_NAME ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,int,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ,int *,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8 (BD_ADDR VAR_6, DEV_CLASS VAR_7, BD_NAME VAR_8)
{
    tBTM_REMOTE_DEV_NAME VAR_9;
    tBTM_STATUS VAR_10;
    FUNC_4(VAR_7);

    FUNC_0("bta_dm_service_search_remname_cback name=<%s>", VAR_8);


    if (!FUNC_5( VAR_5.peer_bdaddr, VAR_6)) {
        VAR_9.length = FUNC_7((char *)VAR_8);
        if (VAR_9.length > (VAR_0 - 1)) {
            VAR_9.length = (VAR_0 - 1);
            VAR_9.remote_bd_name[(VAR_0 - 1)] = 0;
        }
        FUNC_2((char *)VAR_9.remote_bd_name, sizeof(BD_NAME), (char *)VAR_8, (VAR_0 - 1));
        VAR_9.status = VAR_3;

        FUNC_6(&VAR_9);
    } else {

        VAR_10 = FUNC_3 (VAR_5.peer_bdaddr,
                                               (tBTM_CMPL_CB *) FUNC_6,
                                               VAR_4);
        if ( VAR_10 == VAR_1 ) {

            FUNC_0("bta_dm_service_search_remname_cback: BTM_ReadRemoteDeviceName is busy");
        } else if ( VAR_10 != VAR_2 ) {

            FUNC_1("bta_dm_service_search_remname_cback: BTM_ReadRemoteDeviceName returns 0x%02X", VAR_10);

            VAR_9.length = 0;
            VAR_9.remote_bd_name[0] = 0;
            VAR_9.status = VAR_10;
            FUNC_6(&VAR_9);
        }
    }
}
