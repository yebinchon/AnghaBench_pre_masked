
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ac ;
typedef size_t UINT ;
struct TYPE_8__ {int Masked; int SubnetMask; int IpAddress; int Priority; int Deny; } ;
struct TYPE_7__ {size_t NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int LIST ;
typedef int FOLDER ;
typedef TYPE_2__ AC ;


 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,int) ;

void FUNC_10(LIST *VAR_0, FOLDER *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_0);
 {
  TOKEN_LIST *VAR_2 = FUNC_1(VAR_1);

  if (VAR_2 != ((void*)0))
  {
   UINT VAR_3;

   for (VAR_3 = 0;VAR_3 < VAR_2->NumTokens;VAR_3++)
   {
    FOLDER *VAR_4 = FUNC_3(VAR_1, VAR_2->Token[VAR_3]);

    if (VAR_4 != ((void*)0))
    {
     AC VAR_5;

     FUNC_9(&VAR_5, sizeof(VAR_5));
     VAR_5.Deny = FUNC_2(VAR_4, "Deny");
     VAR_5.Priority = FUNC_4(VAR_4, "Priority");
     FUNC_5(VAR_4, "IpAddress", &VAR_5.IpAddress);

     if (FUNC_5(VAR_4, "NetMask", &VAR_5.SubnetMask))
     {
      VAR_5.Masked = 1;
     }

     FUNC_0(VAR_0, &VAR_5);
    }
   }

   FUNC_6(VAR_2);
  }
 }
 FUNC_8(VAR_0);
}
