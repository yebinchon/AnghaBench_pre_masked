
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_TRANSPORT ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int * read_rssi_cb; int transport; int remote_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_READ_RSSI ;
typedef int tBTA_CMPL_CB ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(BD_ADDR VAR_1, tBTA_TRANSPORT VAR_2, tBTA_CMPL_CB *VAR_3)
{
    tBTA_DM_API_READ_RSSI *VAR_4;
    if ((VAR_4 = (tBTA_DM_API_READ_RSSI *)FUNC_2(sizeof(tBTA_DM_API_READ_RSSI))) != ((void*)0)) {
        VAR_4->hdr.event = VAR_0;
        FUNC_1(VAR_4->remote_addr, VAR_1, sizeof(BD_ADDR));
        VAR_4->transport = VAR_2;
        VAR_4->read_rssi_cb = VAR_3;
        FUNC_0(VAR_4);
    }
}
