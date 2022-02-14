
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WLAN_IE_MEASURE_REQ ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ abyCurrentMSRReq; int pAdapter; scalar_t__ uLengthOfRepEIDs; scalar_t__ abyCurrentMSRRep; int * pCurrMeasureEIDRep; } ;
struct TYPE_8__ {int * sMSRRepEIDs; } ;
struct TYPE_7__ {int sMSRReqEIDs; } ;
typedef TYPE_1__* PWLAN_FRAME_MSRREQ ;
typedef TYPE_2__* PWLAN_FRAME_MSRREP ;
typedef TYPE_3__* PSMgmtObject ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_3(PSMgmtObject VAR_4, PWLAN_FRAME_MSRREQ VAR_5, UINT VAR_6)
{
    size_t VAR_7 = 0;
    BOOL VAR_8 = VAR_0;

    if (VAR_6 <= VAR_1) {
        FUNC_1(VAR_4->abyCurrentMSRReq, VAR_5, VAR_6);
    }
    VAR_7 = ((VAR_6 - FUNC_2(VAR_2, VAR_3))/ (sizeof(WLAN_IE_MEASURE_REQ)));
    VAR_4->pCurrMeasureEIDRep = &(((PWLAN_FRAME_MSRREP) (VAR_4->abyCurrentMSRRep))->sMSRRepEIDs[0]);
    VAR_4->uLengthOfRepEIDs = 0;
    VAR_8 = FUNC_0(VAR_4->pAdapter,
                                ((PWLAN_FRAME_MSRREQ) (VAR_4->abyCurrentMSRReq))->sMSRReqEIDs,
                                VAR_7
                                );
    return (VAR_8);
}
