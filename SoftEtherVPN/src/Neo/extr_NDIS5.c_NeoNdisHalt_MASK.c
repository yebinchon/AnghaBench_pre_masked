
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Halting; scalar_t__ ConnectedOld; scalar_t__ ConnectedForce; scalar_t__ Connected; scalar_t__ Inited; scalar_t__ Initing; } ;
typedef int NDIS_STATUS ;
typedef int NDIS_HANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;

NDIS_STATUS FUNC_4(NDIS_HANDLE VAR_5)
{
 if (VAR_4 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_4->Halting != VAR_0)
 {

  return VAR_2;
 }
 VAR_4->Halting = VAR_3;


 FUNC_3();


 FUNC_1();


 FUNC_0();


 VAR_4->Initing = VAR_4->Inited = VAR_0;
 VAR_4->Connected = VAR_4->ConnectedForce = VAR_4->ConnectedOld = VAR_0;
 VAR_4->Halting = VAR_0;


 FUNC_2();

 return VAR_2;
}
