
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int t ;
struct TYPE_10__ {int DeviceList; } ;
struct TYPE_9__ {int Halt; int Thread; int Cancel1; int DeviceName; } ;
typedef TYPE_1__ EL_DEVICE ;
typedef TYPE_2__ EL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;

bool FUNC_10(EL *VAR_1, char *VAR_2)
{
 bool VAR_3 = 0;
 EL_DEVICE *VAR_4, VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_1->DeviceList);
 {
  FUNC_9(&VAR_5, sizeof(VAR_5));
  FUNC_6(VAR_5.DeviceName, sizeof(VAR_5.DeviceName), VAR_2);

  VAR_4 = FUNC_5(VAR_1->DeviceList, &VAR_5);

  if (VAR_4 != ((void*)0))
  {

   VAR_4->Halt = 1;
   FUNC_0(VAR_4->Cancel1);


   FUNC_8(VAR_4->Thread, VAR_0);
   FUNC_4(VAR_4->Thread);


   FUNC_1(VAR_1->DeviceList, VAR_4);
   FUNC_2(VAR_4);

   VAR_3 = 1;
  }
 }
 FUNC_7(VAR_1->DeviceList);

 return VAR_3;
}
