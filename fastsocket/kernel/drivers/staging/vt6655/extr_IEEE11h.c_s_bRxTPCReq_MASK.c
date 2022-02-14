
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WLAN_FRAME_TPCREP ;
struct TYPE_20__ {int pAdapter; scalar_t__ abyCurrentMSRReq; int abyCurrBSSID; scalar_t__ pbyMgmtPacketPool; } ;
struct TYPE_19__ {int cbMPDULen; scalar_t__ cbPayloadLen; scalar_t__ p80211Header; } ;
struct TYPE_18__ {int byDialogToken; } ;
struct TYPE_15__ {int len; int byLinkMargin; int byTxPower; int byElementID; } ;
struct TYPE_14__ {int wFrameCtl; int abyAddr3; int abyAddr2; int abyAddr1; } ;
struct TYPE_17__ {int byAction; TYPE_3__ sTPCRepEIDs; int byDialogToken; scalar_t__ byCategory; TYPE_2__ Header; } ;
struct TYPE_13__ {int abyAddr2; } ;
struct TYPE_16__ {TYPE_1__ Header; } ;
typedef int STxMgmtPacket ;
typedef TYPE_4__* PWLAN_FRAME_TPCREQ ;
typedef TYPE_5__* PWLAN_FRAME_TPCREP ;
typedef TYPE_6__* PWLAN_FRAME_MSRREQ ;
typedef scalar_t__ PUWLAN_80211HDR ;
typedef TYPE_7__* PSTxMgmtPacket ;
typedef TYPE_8__* PSMgmtObject ;
typedef scalar_t__ PBYTE ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_7__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_7__*,int ,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_7(PSMgmtObject VAR_10, PWLAN_FRAME_TPCREQ VAR_11, BYTE VAR_12, BYTE VAR_13)
{
    PWLAN_FRAME_TPCREP VAR_14;
    PSTxMgmtPacket VAR_15 = ((void*)0);


    VAR_15 = (PSTxMgmtPacket)VAR_10->pbyMgmtPacketPool;
    FUNC_6(VAR_15, 0, sizeof(STxMgmtPacket) + VAR_3);
    VAR_15->p80211Header = (PUWLAN_80211HDR)((PBYTE)VAR_15 + sizeof(STxMgmtPacket));

    VAR_14 = (PWLAN_FRAME_TPCREP)((PBYTE)VAR_15 + sizeof(STxMgmtPacket));

    VAR_14->Header.wFrameCtl = ( FUNC_3(VAR_8) |
                                    FUNC_2(VAR_7)
                                );

    FUNC_5( VAR_14->Header.abyAddr1, VAR_11->Header.abyAddr2, VAR_4);
    FUNC_5( VAR_14->Header.abyAddr2, FUNC_1(VAR_10->pAdapter), VAR_4);
    FUNC_5( VAR_14->Header.abyAddr3, VAR_10->abyCurrBSSID, VAR_5);

    VAR_14->byCategory = 0;
    VAR_14->byAction = 3;
    VAR_14->byDialogToken = ((PWLAN_FRAME_MSRREQ) (VAR_10->abyCurrentMSRReq))->byDialogToken;

    VAR_14->sTPCRepEIDs.byElementID = VAR_6;
    VAR_14->sTPCRepEIDs.len = 2;
    VAR_14->sTPCRepEIDs.byTxPower = FUNC_0(VAR_10->pAdapter);
    switch (VAR_12) {
        case 130:
            VAR_14->sTPCRepEIDs.byLinkMargin = 65 - VAR_13;
            break;
        case 131:
            VAR_14->sTPCRepEIDs.byLinkMargin = 66 - VAR_13;
            break;
        case 132:
            VAR_14->sTPCRepEIDs.byLinkMargin = 70 - VAR_13;
            break;
        case 133:
            VAR_14->sTPCRepEIDs.byLinkMargin = 74 - VAR_13;
            break;
        case 134:
            VAR_14->sTPCRepEIDs.byLinkMargin = 77 - VAR_13;
            break;
        case 135:
            VAR_14->sTPCRepEIDs.byLinkMargin = 79 - VAR_13;
            break;
        case 128:
            VAR_14->sTPCRepEIDs.byLinkMargin = 81 - VAR_13;
            break;
        case 129:
        default:
            VAR_14->sTPCRepEIDs.byLinkMargin = 82 - VAR_13;
            break;
    }

    VAR_15->cbMPDULen = sizeof(WLAN_FRAME_TPCREP);
    VAR_15->cbPayloadLen = sizeof(WLAN_FRAME_TPCREP) - VAR_9;
    if (FUNC_4(VAR_10->pAdapter, VAR_15) != VAR_0)
        return (VAR_1);
    return (VAR_2);


}
