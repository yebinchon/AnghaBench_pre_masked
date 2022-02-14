
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ServerType; int FarmControlThread; int FarmControlThreadHaltEvent; } ;
typedef TYPE_1__ SERVER ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(SERVER *VAR_2)
{

 if (VAR_2 == ((void*)0) || VAR_2->ServerType != VAR_1)
 {
  return;
 }

 FUNC_2(VAR_2->FarmControlThreadHaltEvent);
 FUNC_3(VAR_2->FarmControlThread, VAR_0);
 FUNC_0(VAR_2->FarmControlThreadHaltEvent);
 FUNC_1(VAR_2->FarmControlThread);
}
