
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int sdp_result; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_SDP_RESULT ;
typedef int UINT16 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2 (UINT16 VAR_1)
{

    tBTA_DM_SDP_RESULT *VAR_2;

    if ((VAR_2 = (tBTA_DM_SDP_RESULT *) FUNC_1(sizeof(tBTA_DM_SDP_RESULT))) != ((void*)0)) {
        VAR_2->hdr.event = VAR_0;
        VAR_2->sdp_result = VAR_1;
        FUNC_0(VAR_2);

    }
}
