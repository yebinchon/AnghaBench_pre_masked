
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int LogSetting; int DeviceName; } ;
typedef TYPE_1__ RPC_ADD_DEVICE ;
typedef int EL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;

UINT FUNC_2(EL *VAR_2, RPC_ADD_DEVICE *VAR_3)
{
 if (FUNC_1(VAR_2, VAR_3->DeviceName, &VAR_3->LogSetting) == 0)
 {
  return VAR_0;
 }

 FUNC_0(VAR_2);

 return VAR_1;
}
