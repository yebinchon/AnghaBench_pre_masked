
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ServerType; int FarmControlThread; int FarmControlThreadHaltEvent; } ;
typedef TYPE_1__ SERVER ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_2(SERVER *VAR_2)
{

 if (VAR_2 == ((void*)0) || VAR_2->ServerType != VAR_0)
 {
  return;
 }

 VAR_2->FarmControlThreadHaltEvent = FUNC_0();
 VAR_2->FarmControlThread = FUNC_1(VAR_1, VAR_2);
}
