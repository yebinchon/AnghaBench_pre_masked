
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {void* timeout; void* latency; void* max_int; void* min_int; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_UPDATE_CONN_PARAM ;
typedef void* UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(BD_ADDR VAR_1, UINT16 VAR_2, UINT16 VAR_3,
                                     UINT16 VAR_4, UINT16 VAR_5)
{
    tBTA_DM_API_UPDATE_CONN_PARAM *VAR_6;

    if ((VAR_6 = (tBTA_DM_API_UPDATE_CONN_PARAM *) FUNC_3(sizeof(tBTA_DM_API_UPDATE_CONN_PARAM))) != ((void*)0)) {
        FUNC_2 (VAR_6, 0, sizeof(tBTA_DM_API_UPDATE_CONN_PARAM));

        VAR_6->hdr.event = VAR_0;
        FUNC_0(VAR_6->bd_addr, VAR_1);
        VAR_6->min_int = VAR_2;
        VAR_6->max_int = VAR_3;
        VAR_6->latency = VAR_4;
        VAR_6->timeout = VAR_5;
        FUNC_1(VAR_6);
    }
}
