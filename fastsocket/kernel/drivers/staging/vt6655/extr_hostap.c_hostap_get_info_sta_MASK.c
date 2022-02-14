
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int inactive_sec; } ;
struct TYPE_9__ {TYPE_1__ get_info_sta; } ;
struct viawget_hostapd_param {TYPE_2__ u; int sta_addr; } ;
typedef size_t UINT ;
struct TYPE_12__ {TYPE_4__* pMgmt; } ;
struct TYPE_11__ {TYPE_3__* sNodeDBTable; } ;
struct TYPE_10__ {int ulLastRxJiffer; } ;
typedef TYPE_4__* PSMgmtObject ;
typedef TYPE_5__* PSDevice ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(PSDevice VAR_3,
           struct viawget_hostapd_param *VAR_4)
{
    PSMgmtObject VAR_5 = VAR_3->pMgmt;
 UINT VAR_6;

    if (FUNC_0(VAR_5, VAR_4->sta_addr, &VAR_6)) {
     VAR_4->u.get_info_sta.inactive_sec =
         (VAR_2 - VAR_5->sNodeDBTable[VAR_6].ulLastRxJiffer) / VAR_1;


 }
 else {
     return -VAR_0;
 }

 return 0;
}
