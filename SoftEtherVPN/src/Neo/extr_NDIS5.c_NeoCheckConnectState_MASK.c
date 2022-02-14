
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ConnectedOld; scalar_t__ Connected; int ConnectedForce; scalar_t__ Halting; int * NdisMiniport; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

void FUNC_2()
{
 if (VAR_3 == ((void*)0) || VAR_3->NdisMiniport == ((void*)0))
 {
  return;
 }

 if (VAR_4 == 0)
 {
  if (VAR_3->ConnectedOld != VAR_3->Connected || VAR_3->ConnectedForce)
  {
   VAR_3->ConnectedForce = VAR_0;
   VAR_3->ConnectedOld = VAR_3->Connected;
   if (VAR_3->Halting == VAR_0)
   {
    FUNC_0(VAR_3->NdisMiniport,
     VAR_3->Connected ? VAR_1 : VAR_2,
     0, 0);
    FUNC_1(VAR_3->NdisMiniport);
   }
  }
 }
 else
 {
  if (VAR_3->ConnectedForce)
  {
   VAR_3->ConnectedForce = 0;

   if (VAR_3->Halting == VAR_0)
   {
    FUNC_0(VAR_3->NdisMiniport,
     VAR_1,
     0, 0);
    FUNC_1(VAR_3->NdisMiniport);
   }
  }
 }
}
