
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int r ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {size_t NumExistingRoutes; int * Entries; } ;
struct TYPE_10__ {scalar_t__ NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ DHCP_CLASSLESS_ROUTE_TABLE ;
typedef TYPE_2__ DHCP_CLASSLESS_ROUTE ;


 int FUNC_0 (int *,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_3 (char*,int *) ;
 int FUNC_4 (TYPE_2__*,int) ;

bool FUNC_5(DHCP_CLASSLESS_ROUTE_TABLE *VAR_1, char *VAR_2)
{
 bool VAR_3 = 1;
 TOKEN_LIST *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_4(VAR_1, sizeof(DHCP_CLASSLESS_ROUTE_TABLE));

 VAR_4 = FUNC_3(VAR_2, ((void*)0));

 if (VAR_4 != ((void*)0))
 {
  UINT VAR_5;

  for (VAR_5 = 0;VAR_5 < VAR_4->NumTokens;VAR_5++)
  {
   DHCP_CLASSLESS_ROUTE VAR_6;

   FUNC_4(&VAR_6, sizeof(VAR_6));
   if (FUNC_2(&VAR_6, VAR_4->Token[VAR_5]))
   {
    if (VAR_1->NumExistingRoutes < VAR_0)
    {
     FUNC_0(&VAR_1->Entries[VAR_1->NumExistingRoutes], &VAR_6, sizeof(DHCP_CLASSLESS_ROUTE));
     VAR_1->NumExistingRoutes++;
    }
    else
    {

     VAR_3 = 0;
     break;
    }
   }
   else
   {

    VAR_3 = 0;
    break;
   }
  }
 }

 FUNC_1(VAR_4);

 return VAR_3;
}
