
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int dummy; } ;
struct TYPE_4__ {int sa_data; } ;
struct iw_mlme {int cmd; TYPE_1__ addr; } ;
struct TYPE_5__ {int abyCurrBSSID; } ;
struct TYPE_6__ {int bLinkPass; TYPE_2__ sMgmtObj; } ;
typedef TYPE_2__* PSMgmtObject ;
typedef TYPE_3__* PSDevice ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_5,
    struct iw_request_info * VAR_6,
    struct iw_point *VAR_7,
    char *VAR_8)
{
 PSDevice VAR_9 = (PSDevice)FUNC_3(VAR_5);
 PSMgmtObject VAR_10 = &(VAR_9->sMgmtObj);
 struct iw_mlme *VAR_11 = (struct iw_mlme *)VAR_8;

 int VAR_12 = 0;

 if(FUNC_2(VAR_10->abyCurrBSSID, VAR_11->addr.sa_data, VAR_2)){
  VAR_12 = -VAR_0;
  return VAR_12;
 }
 switch(VAR_11->cmd){
 case 129:




 case 128:
  if(VAR_9->bLinkPass == VAR_3){
    FUNC_0("iwctl_siwmlme--->send DISASSOCIATE\n");
    FUNC_1((HANDLE)VAR_9, VAR_4, ((void*)0));
  }
  break;
 default:
  VAR_12 = -VAR_1;
 }

 return VAR_12;

}
