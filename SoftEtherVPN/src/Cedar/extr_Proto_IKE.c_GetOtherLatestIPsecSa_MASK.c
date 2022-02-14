
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {int IPsecSaList; } ;
struct TYPE_9__ {scalar_t__ ServerToClient; int Deleting; scalar_t__ LastCommTick; TYPE_1__* PairIPsecSa; scalar_t__ Established; int * IkeClient; } ;
struct TYPE_8__ {scalar_t__ LastCommTick; } ;
typedef TYPE_2__ IPSECSA ;
typedef TYPE_3__ IKE_SERVER ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

IPSECSA *FUNC_2(IKE_SERVER *VAR_0, IPSECSA *VAR_1)
{
 UINT VAR_2;
 UINT64 VAR_3 = 0;
 IPSECSA *VAR_4 = ((void*)0);

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_1->IkeClient == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0->IPsecSaList);VAR_2++)
 {
  IPSECSA *VAR_5 = FUNC_0(VAR_0->IPsecSaList, VAR_2);

  if (VAR_5 != VAR_1)
  {
   if (VAR_5->IkeClient == VAR_1->IkeClient)
   {
    if (VAR_5->ServerToClient == VAR_1->ServerToClient)
    {
     if (VAR_5->Deleting == 0)
     {
      if (VAR_5->Established)
      {
       UINT64 VAR_6 = VAR_5->LastCommTick;

       if (VAR_5->ServerToClient)
       {
        if (VAR_5->PairIPsecSa != ((void*)0))
        {
         VAR_6 = VAR_5->PairIPsecSa->LastCommTick;
        }
       }

       if (VAR_3 < VAR_6)
       {
        VAR_3 = VAR_6;

        VAR_4 = VAR_5;
       }
      }
     }
    }
   }
  }
 }

 return VAR_4;
}
