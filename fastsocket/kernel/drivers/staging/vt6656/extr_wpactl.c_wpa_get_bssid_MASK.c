
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bssid; } ;
struct TYPE_7__ {TYPE_1__ wpa_associate; } ;
struct viawget_wpa_param {TYPE_2__ u; } ;
struct TYPE_8__ {int abyCurrBSSID; } ;
struct TYPE_9__ {TYPE_3__ sMgmtObj; } ;
typedef TYPE_3__* PSMgmtObject ;
typedef TYPE_4__* PSDevice ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(PSDevice VAR_0,
         struct viawget_wpa_param *VAR_1)
{
    PSMgmtObject VAR_2 = &(VAR_0->sMgmtObj);
 int VAR_3 = 0;
 FUNC_0(VAR_1->u.wpa_associate.bssid, VAR_2->abyCurrBSSID , 6);

    return VAR_3;

}
