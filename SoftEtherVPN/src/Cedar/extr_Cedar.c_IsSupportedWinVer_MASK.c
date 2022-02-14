
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IsWindows; int IsNT; int VerMajor; int VerMinor; int ServicePack; scalar_t__ IsBeta; } ;
typedef TYPE_1__ RPC_WINVER ;



bool FUNC_0(RPC_WINVER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->IsWindows == 0)
 {
  return 1;
 }

 if (VAR_0->IsNT == 0)
 {
  return 1;
 }

 if (VAR_0->IsBeta)
 {
  return 1;
 }

 if (VAR_0->VerMajor <= 4)
 {

  return 1;
 }

 if (VAR_0->VerMajor == 5 && VAR_0->VerMinor == 0)
 {

  if (VAR_0->ServicePack <= 4)
  {

   return 1;
  }
 }

 if (VAR_0->VerMajor == 5 && VAR_0->VerMinor == 1)
 {

  if (VAR_0->ServicePack <= 3)
  {

   return 1;
  }
 }

 if (VAR_0->VerMajor == 5 && VAR_0->VerMinor == 2)
 {

  if (VAR_0->ServicePack <= 2)
  {

   return 1;
  }
 }

 if (VAR_0->VerMajor == 6 && VAR_0->VerMinor == 0)
 {

  if (VAR_0->ServicePack <= 2)
  {

   return 1;
  }
 }

 if (VAR_0->VerMajor == 6 && VAR_0->VerMinor == 1)
 {

  if (VAR_0->ServicePack <= 1)
  {

   return 1;
  }
 }

 if (VAR_0->VerMajor == 6 && VAR_0->VerMinor == 2)
 {

  if (VAR_0->ServicePack <= 0)
  {

   return 1;
  }
 }

 if (VAR_0->VerMajor == 6 && VAR_0->VerMinor == 3)
 {

  if (VAR_0->ServicePack <= 0)
  {

   return 1;
  }
 }

 if ((VAR_0->VerMajor == 6 && VAR_0->VerMinor == 4) || (VAR_0->VerMajor == 10 && VAR_0->VerMinor == 0))
 {

  if (VAR_0->ServicePack <= 0)
  {

   return 1;
  }
 }

 return 0;
}
