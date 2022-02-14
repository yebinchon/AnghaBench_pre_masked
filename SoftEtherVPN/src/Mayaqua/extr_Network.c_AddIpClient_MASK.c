
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ NumConnections; int IpAddress; } ;
typedef TYPE_1__ IP_CLIENT ;
typedef int IP ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_0 ;

void FUNC_6(IP *VAR_1)
{
 IP_CLIENT *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0);
 {
  VAR_2 = FUNC_3(VAR_1);

  if (VAR_2 == ((void*)0))
  {
   VAR_2 = FUNC_5(sizeof(IP_CLIENT));
   FUNC_1(&VAR_2->IpAddress, VAR_1, sizeof(IP));
   VAR_2->NumConnections = 0;

   FUNC_0(VAR_0, VAR_2);
  }

  VAR_2->NumConnections++;
 }
 FUNC_4(VAR_0);


}
