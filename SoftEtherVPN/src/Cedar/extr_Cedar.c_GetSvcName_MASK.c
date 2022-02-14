
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int NetSvcList; } ;
struct TYPE_6__ {int Udp; char* Name; int Port; } ;
typedef TYPE_1__ NETSVC ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;

char *FUNC_3(CEDAR *VAR_0, bool VAR_1, UINT VAR_2)
{
 char *VAR_3 = ((void*)0);
 NETSVC VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4.Udp = (VAR_1 == 0 ? 0 : 1);
 VAR_4.Port = VAR_2;

 FUNC_0(VAR_0->NetSvcList);
 {
  NETSVC *VAR_5 = FUNC_1(VAR_0->NetSvcList, &VAR_4);
  if (VAR_5 != ((void*)0))
  {
   VAR_3 = VAR_5->Name;
  }
 }
 FUNC_2(VAR_0->NetSvcList);

 return VAR_3;
}
