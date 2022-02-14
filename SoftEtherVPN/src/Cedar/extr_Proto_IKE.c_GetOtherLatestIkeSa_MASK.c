
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int Deleting; scalar_t__ LastCommTick; scalar_t__ Established; int * IkeClient; } ;
struct TYPE_7__ {int IkeSaList; } ;
typedef TYPE_1__ IKE_SERVER ;
typedef TYPE_2__ IKE_SA ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

IKE_SA *FUNC_2(IKE_SERVER *VAR_0, IKE_SA *VAR_1)
{
 UINT VAR_2;
 UINT64 VAR_3 = 0;
 IKE_SA *VAR_4 = ((void*)0);

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_1->IkeClient == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0->IkeSaList);VAR_2++)
 {
  IKE_SA *VAR_5 = FUNC_0(VAR_0->IkeSaList, VAR_2);

  if (VAR_5 != VAR_1)
  {
   if (VAR_5->IkeClient == VAR_1->IkeClient)
   {
    if (VAR_5->Deleting == 0)
    {
     if (VAR_5->Established)
     {
      if (VAR_3 < VAR_5->LastCommTick)
      {
       VAR_3 = VAR_5->LastCommTick;

       VAR_4 = VAR_5;
      }
     }
    }
   }
  }
 }

 return VAR_4;
}
