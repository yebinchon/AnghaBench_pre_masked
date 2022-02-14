
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CmSetting; } ;
typedef int CM_SETTING ;
typedef TYPE_1__ CLIENT ;


 int FUNC_0 (int *,int ,int) ;

bool FUNC_1(CLIENT *VAR_0, CM_SETTING *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(VAR_1, VAR_0->CmSetting, sizeof(CM_SETTING));

 return 1;
}
