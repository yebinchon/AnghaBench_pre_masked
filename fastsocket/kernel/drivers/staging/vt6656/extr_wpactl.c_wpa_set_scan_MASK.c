
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ssid_len; int ssid; } ;
struct TYPE_8__ {TYPE_1__ scan_req; } ;
struct viawget_wpa_param {TYPE_2__ u; } ;
struct TYPE_10__ {scalar_t__ abyDesireSSID; } ;
struct TYPE_11__ {int lock; int bLinkPass; TYPE_4__ sMgmtObj; } ;
struct TYPE_9__ {int len; int abySSID; int byElementID; } ;
typedef TYPE_3__* PWLAN_IE_SSID ;
typedef TYPE_4__* PSMgmtObject ;
typedef TYPE_5__* PSDevice ;
typedef int HANDLE ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(PSDevice VAR_4,
         struct viawget_wpa_param *VAR_5)
{
 int VAR_6 = 0;



        PSMgmtObject VAR_7 = &(VAR_4->sMgmtObj);
        PWLAN_IE_SSID VAR_8;
FUNC_4("wpa_set_scan-->desired [ssid=%s,ssid_len=%d]\n",
      VAR_5->u.scan_req.ssid,VAR_5->u.scan_req.ssid_len);

FUNC_3(VAR_7->abyDesireSSID, 0, VAR_2 + VAR_3 + 1);
VAR_8 = (PWLAN_IE_SSID)VAR_7->abyDesireSSID;
VAR_8->byElementID = VAR_1;
FUNC_2(VAR_8->abySSID, VAR_5->u.scan_req.ssid, VAR_5->u.scan_req.ssid_len);
VAR_8->len = VAR_5->u.scan_req.ssid_len;

    FUNC_5(&VAR_4->lock);
    FUNC_0((HANDLE)VAR_4, VAR_4->bLinkPass);

        FUNC_1((HANDLE) VAR_4, VAR_0, VAR_7->abyDesireSSID);
    FUNC_6(&VAR_4->lock);

    return VAR_6;
}
