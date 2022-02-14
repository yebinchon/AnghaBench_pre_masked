
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int InternetSetting; } ;
typedef int INTERNET_SETTING ;
typedef TYPE_1__ DDNS_CLIENT ;


 int FUNC_0 (int *,int *,int) ;

void FUNC_1(DDNS_CLIENT *VAR_0, INTERNET_SETTING *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1, &VAR_0->InternetSetting, sizeof(INTERNET_SETTING));
}
