
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {TYPE_1__* Option; } ;
struct TYPE_4__ {scalar_t__ ManageOnlyLocalUnicastIPv6; scalar_t__ ManageOnlyPrivateIP; } ;
typedef int IP ;
typedef TYPE_2__ HUB ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(IP *VAR_1, HUB *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->Option == ((void*)0))
 {
  return 1;
 }

 if (FUNC_1(VAR_1))
 {
  if (VAR_2->Option->ManageOnlyPrivateIP)
  {
   if (FUNC_2(VAR_1) == 0)
   {
    return 0;
   }
  }
 }
 else
 {
  if (VAR_2->Option->ManageOnlyLocalUnicastIPv6)
  {
   UINT VAR_3 = FUNC_0(VAR_1);

   if (!(VAR_3 & VAR_0))
   {
    return 0;
   }
  }
 }

 return 1;
}
