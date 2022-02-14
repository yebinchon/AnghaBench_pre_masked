
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int GatewayIP; scalar_t__ LocalRouting; } ;
typedef TYPE_1__ ROUTE_ENTRY ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

bool FUNC_9(IP *VAR_0, IP *VAR_1)
{
 bool VAR_2 = 0;
 ROUTE_ENTRY *VAR_3;
 IP VAR_4;
 UINT VAR_5 = 0;
 IP VAR_6;

 FUNC_7(VAR_0, sizeof(IP));
 FUNC_8(&VAR_6);
 if (VAR_1 == ((void*)0))
 {
  VAR_1 = &VAR_6;
 }
 if (VAR_0 == ((void*)0) || FUNC_4(VAR_1) == 0)
 {
  return 0;
 }

 FUNC_0(&VAR_4, VAR_1, sizeof(IP));

 while (1)
 {
  VAR_5++;
  if (VAR_5 >= 64)
  {
   break;
  }

  VAR_3 = FUNC_2(&VAR_4);
  if (VAR_3 != ((void*)0))
  {
   if (FUNC_6(&VAR_3->GatewayIP))
   {
    FUNC_1(VAR_3);
    break;
   }

   if (VAR_3->LocalRouting)
   {
    VAR_2 = 1;
    FUNC_0(VAR_0, &VAR_3->GatewayIP, sizeof(IP));
    FUNC_1(VAR_3);
    break;
   }
   else
   {
    FUNC_0(&VAR_4, &VAR_3->GatewayIP, sizeof(IP));
   }

   FUNC_1(VAR_3);
  }
 }

 if (VAR_2 == 0)
 {
  if (FUNC_5(VAR_1))
  {
   FUNC_3(VAR_0);
   VAR_2 = 1;
  }
 }

 return VAR_2;
}
