
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int * DeviceList; int CfgRw; } ;
struct TYPE_6__ {int DeviceName; } ;
typedef int LIST ;
typedef TYPE_1__ EL_DEVICE ;
typedef TYPE_2__ EL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(EL *VAR_0)
{
 UINT VAR_1;
 LIST *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 FUNC_2(VAR_0);
 FUNC_4(VAR_0->CfgRw);


 VAR_2 = FUNC_9(((void*)0));
 FUNC_8(VAR_0->DeviceList);
 {
  for (VAR_1 = 0;VAR_1 < FUNC_7(VAR_0->DeviceList);VAR_1++)
  {
   EL_DEVICE *VAR_3 = FUNC_6(VAR_0->DeviceList, VAR_1);
   FUNC_5(VAR_2, FUNC_0(VAR_3->DeviceName));
  }
  for (VAR_1 = 0;VAR_1 < FUNC_7(VAR_2);VAR_1++)
  {
   char *VAR_4 = FUNC_6(VAR_2, VAR_1);
   FUNC_1(VAR_0, VAR_4);
   FUNC_3(VAR_4);
  }
  FUNC_10(VAR_2);
 }
 FUNC_11(VAR_0->DeviceList);

 FUNC_10(VAR_0->DeviceList);
}
