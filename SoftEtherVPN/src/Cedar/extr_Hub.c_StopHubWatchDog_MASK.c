
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int HaltWatchDog; int * WatchDogEvent; int * WatchDogThread; } ;
typedef TYPE_1__ HUB ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(HUB *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->HaltWatchDog = 1;
 FUNC_2(VAR_1->WatchDogEvent);

 FUNC_3(VAR_1->WatchDogThread, VAR_0);
 FUNC_1(VAR_1->WatchDogThread);
 VAR_1->WatchDogThread = ((void*)0);
 VAR_1->HaltWatchDog = 0;

 FUNC_0(VAR_1->WatchDogEvent);
 VAR_1->WatchDogEvent = ((void*)0);
}
