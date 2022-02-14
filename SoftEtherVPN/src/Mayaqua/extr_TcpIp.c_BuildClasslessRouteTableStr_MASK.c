
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef size_t UINT ;
struct TYPE_6__ {scalar_t__ Exists; } ;
struct TYPE_5__ {TYPE_2__* Entries; } ;
typedef TYPE_1__ DHCP_CLASSLESS_ROUTE_TABLE ;
typedef TYPE_2__ DHCP_CLASSLESS_ROUTE ;


 int FUNC_0 (char*,int,TYPE_2__*) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*) ;
 size_t VAR_0 ;
 int FUNC_3 (char*,size_t,char*) ;
 int FUNC_4 (char*,int) ;

void FUNC_5(char *VAR_1, UINT VAR_2, DHCP_CLASSLESS_ROUTE_TABLE *VAR_3)
{
 UINT VAR_4;
 UINT VAR_5 = 0;
 FUNC_1(VAR_1, VAR_2);

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 for (VAR_4 = 0;VAR_4 < VAR_0;VAR_4++)
 {
  DHCP_CLASSLESS_ROUTE *VAR_6 = &VAR_3->Entries[VAR_4];

  if (VAR_6->Exists)
  {
   char VAR_7[128];

   FUNC_4(VAR_7, sizeof(VAR_7));
   FUNC_0(VAR_7, sizeof(VAR_7), VAR_6);

   if (FUNC_2(VAR_7) == 0)
   {
    if (VAR_5 >= 1)
    {
     FUNC_3(VAR_1, VAR_2, ", ");
    }

    FUNC_3(VAR_1, VAR_2, VAR_7);

    VAR_5++;
   }
  }
 }
}
