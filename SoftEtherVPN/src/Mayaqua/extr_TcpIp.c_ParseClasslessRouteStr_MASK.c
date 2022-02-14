
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tmp ;
typedef int ip_and_mask ;
typedef int gateway ;
struct TYPE_8__ {int Exists; int SubnetMask; int Network; int Gateway; int SubnetMaskLen; } ;
struct TYPE_7__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ DHCP_CLASSLESS_ROUTE ;


 int FUNC_0 (char*,int,char*,char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*,int *,int *) ;
 TYPE_1__* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_2__*,int) ;

bool FUNC_11(DHCP_CLASSLESS_ROUTE *VAR_1, char *VAR_2)
{
 TOKEN_LIST *VAR_3;
 bool VAR_4 = 0;
 char VAR_5[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_6(VAR_5, sizeof(VAR_5), VAR_2);
 FUNC_9(VAR_5);

 VAR_3 = FUNC_5(VAR_2, "/");
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_3->NumTokens == 3)
 {
  char VAR_6[VAR_0];
  char VAR_7[VAR_0];

  FUNC_10(VAR_1, sizeof(DHCP_CLASSLESS_ROUTE));

  FUNC_0(VAR_6, sizeof(VAR_6), "%s/%s", VAR_3->Token[0], VAR_3->Token[1]);
  FUNC_6(VAR_7, sizeof(VAR_7), VAR_3->Token[2]);

  if (FUNC_4(VAR_6, &VAR_1->Network, &VAR_1->SubnetMask))
  {
   VAR_1->SubnetMaskLen = FUNC_8(&VAR_1->SubnetMask);

   if (FUNC_7(&VAR_1->Gateway, VAR_7))
   {
    if (FUNC_3(&VAR_1->Gateway) && FUNC_3(&VAR_1->Network) && FUNC_3(&VAR_1->SubnetMask))
    {
     VAR_1->Exists = 1;

     FUNC_2(&VAR_1->Network, &VAR_1->Network, &VAR_1->SubnetMask);

     VAR_4 = 1;
    }
   }
  }
 }

 FUNC_1(VAR_3);

 return VAR_4;
}
