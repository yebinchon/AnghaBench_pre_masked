
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct viawget_wpa_param {int dummy; } ;
struct TYPE_4__ {int bShareKeyAlgorithm; int eAuthenMode; } ;
struct TYPE_5__ {TYPE_1__ sMgmtObj; } ;
typedef TYPE_1__* PSMgmtObject ;
typedef TYPE_2__* PSDevice ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(PSDevice VAR_2,
         struct viawget_wpa_param *VAR_3)
{

    PSMgmtObject VAR_4 = &(VAR_2->sMgmtObj);
 int VAR_5 = 0;

    VAR_4->eAuthenMode = VAR_1;
    VAR_4->bShareKeyAlgorithm = VAR_0;

    return VAR_5;
}
