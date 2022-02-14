
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wrqu ;
typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_scan_req {int essid_len; scalar_t__ scan_type; int essid; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; int flags; } ;
struct TYPE_5__ {scalar_t__ eScanState; void* eScanType; } ;
struct TYPE_6__ {int flags; scalar_t__ byReAssocCount; int lock; int bLinkPass; int dev; TYPE_2__ sMgmtObj; } ;
struct TYPE_4__ {char* abySSID; int len; int byElementID; } ;
typedef TYPE_1__* PWLAN_IE_SSID ;
typedef TYPE_2__* PSMgmtObject ;
typedef TYPE_3__* PSDevice ;
typedef int HANDLE ;
typedef union iwreq_data BYTE ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_2 (int ,int ,union iwreq_data*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (union iwreq_data*,int ,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,union iwreq_data*,int *) ;

int FUNC_9(struct net_device *VAR_13,
             struct iw_request_info *VAR_14,
    struct iw_point *VAR_15,
             char *VAR_16)
{
 PSDevice VAR_17 = (PSDevice)FUNC_5(VAR_13);
  PSMgmtObject VAR_18 = &(VAR_17->sMgmtObj);
 struct iw_scan_req *VAR_19 = (struct iw_scan_req *)VAR_16;
 BYTE VAR_20[VAR_8 + VAR_9 + 1];
 PWLAN_IE_SSID VAR_21=((void*)0);


  if (!(VAR_17->flags & VAR_0))
        return -VAR_2;

    FUNC_1(" SIOCSIWSCAN \n");

if (VAR_18->eScanState == VAR_10) {

     FUNC_1("SIOCSIWSCAN(overlap??)-->In scanning...\n");
     return -VAR_1;
  }

if(VAR_17->byReAssocCount > 0) {

  union iwreq_data VAR_22;
 FUNC_1("wireless_send_event--->SIOCGIWSCAN(scan done)\n");
 FUNC_4(&VAR_22, 0, sizeof(VAR_22));
 FUNC_8(VAR_17->dev, VAR_5, &VAR_22, ((void*)0));
  return 0;
}

 FUNC_6(&VAR_17->lock);






 if(VAR_15->length == sizeof(struct iw_scan_req)) {
   if (VAR_15->flags & VAR_3) {
       FUNC_4(VAR_20, 0, VAR_8 + VAR_9 + 1);
       VAR_21 = (PWLAN_IE_SSID)VAR_20;
       VAR_21->byElementID = VAR_7;
       FUNC_3(VAR_21->abySSID, VAR_19->essid, (int)VAR_19->essid_len);
         if (VAR_21->abySSID[VAR_19->essid_len - 1] == '\0') {
           if(VAR_19->essid_len>0)
  VAR_21->len = VAR_19->essid_len - 1;
         }
 else
   VAR_21->len = VAR_19->essid_len;
   VAR_18->eScanType = VAR_12;
         FUNC_1("SIOCSIWSCAN:[desired_ssid=%s,len=%d]\n",((PWLAN_IE_SSID)VAR_20)->abySSID,
                                                                                    ((PWLAN_IE_SSID)VAR_20)->len);
 FUNC_2((HANDLE) VAR_17, VAR_6, VAR_20);
 FUNC_7(&VAR_17->lock);

 return 0;
   }
   else if(VAR_19->scan_type == VAR_4) {
       VAR_18->eScanType = VAR_12;
   }
 }
 else {
     VAR_18->eScanType = VAR_11;
 }

  VAR_18->eScanType = VAR_12;

 FUNC_2((HANDLE) VAR_17, VAR_6, ((void*)0));
 FUNC_7(&VAR_17->lock);

 return 0;
}
