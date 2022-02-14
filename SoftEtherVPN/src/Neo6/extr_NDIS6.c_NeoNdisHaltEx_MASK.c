
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {scalar_t__ Halting; scalar_t__ NumCurrentDispatch; scalar_t__ ConnectedOld; scalar_t__ ConnectedForce; scalar_t__ Connected; scalar_t__ Inited; scalar_t__ Initing; int * Event; scalar_t__ Opened; } ;
typedef int NEO_EVENT ;
typedef int NDIS_HANDLE ;
typedef int NDIS_HALT_ACTION ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_10(NDIS_HANDLE VAR_3, NDIS_HALT_ACTION VAR_4)
{
 NEO_EVENT *VAR_5 = ((void*)0);
 UINT VAR_6 = 0;
 if (VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->Halting != VAR_0)
 {

  return;
 }
 VAR_2->Halting = VAR_1;

 VAR_2->Opened = VAR_0;

 FUNC_5();
 {

  VAR_5 = VAR_2->Event;
  VAR_2->Event = ((void*)0);


  FUNC_1(1);
 }
 FUNC_9();

 if (VAR_5 != ((void*)0))
 {
  FUNC_6(VAR_5);
 }


 while (VAR_2->NumCurrentDispatch != 0)
 {
  FUNC_0(10000);
  VAR_6++;
  if (VAR_6 >= 1500)
  {
   break;
  }
 }

 if (VAR_5 != ((void*)0))
 {
  FUNC_3(VAR_5);
 }


 FUNC_2();


 FUNC_8();


 FUNC_4();


 VAR_2->Initing = VAR_2->Inited = VAR_0;
 VAR_2->Connected = VAR_2->ConnectedForce = VAR_2->ConnectedOld = VAR_0;
 VAR_2->Halting = VAR_0;


 FUNC_7();
}
