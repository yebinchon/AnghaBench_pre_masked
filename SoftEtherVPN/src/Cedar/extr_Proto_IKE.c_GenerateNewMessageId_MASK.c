
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int IPsecSaList; } ;
struct TYPE_5__ {int MessageId; } ;
typedef TYPE_1__ IPSECSA ;
typedef TYPE_2__ IKE_SERVER ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

UINT FUNC_3(IKE_SERVER *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 while (1)
 {
  VAR_1 = FUNC_2();

  if (VAR_1 != 0 && VAR_1 != 0xffffffff)
  {
   UINT VAR_2;
   bool VAR_3 = 1;

   for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0->IPsecSaList);VAR_2++)
   {
    IPSECSA *VAR_4 = FUNC_0(VAR_0->IPsecSaList, VAR_2);

    if (VAR_4->MessageId == VAR_1)
    {
     VAR_3 = 0;
     break;
    }
   }

   if (VAR_3)
   {
    return VAR_1;
   }
  }
 }
}
