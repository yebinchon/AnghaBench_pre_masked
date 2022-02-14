
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int LogSetting; } ;
typedef int HUB_LOG ;
typedef TYPE_1__ HUB ;


 int FUNC_0 (int *,int *,int) ;

void FUNC_1(HUB *VAR_0, HUB_LOG *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1, &VAR_0->LogSetting, sizeof(HUB_LOG));
}
