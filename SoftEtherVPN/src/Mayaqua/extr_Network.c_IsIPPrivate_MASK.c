
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int* addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;

bool FUNC_3(IP *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_1->addr[0] == 10)
 {
  return 1;
 }

 if (VAR_1->addr[0] == 172)
 {
  if (VAR_1->addr[1] >= 16 && VAR_1->addr[1] <= 31)
  {
   return 1;
  }
 }

 if (VAR_1->addr[0] == 192 && VAR_1->addr[1] == 168)
 {
  return 1;
 }

 if (VAR_1->addr[0] == 169 && VAR_1->addr[1] == 254)
 {
  return 1;
 }

 if (VAR_1->addr[0] == 100)
 {
  if (VAR_1->addr[1] >= 64 && VAR_1->addr[1] <= 127)
  {
   return 1;
  }
 }

 if (VAR_0 != ((void*)0))
 {
  if (FUNC_1(VAR_1))
  {
   UINT VAR_2 = FUNC_0(VAR_1);

   return FUNC_2(VAR_2);
  }
 }

 return 0;
}
