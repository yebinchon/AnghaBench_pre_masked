
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

bool FUNC_2(IP *VAR_0)
{
 UINT VAR_1;

 if (FUNC_0(VAR_0) == 0)
 {
  return 0;
 }

 if (FUNC_1(VAR_0))
 {
  return 0;
 }

 if (VAR_0->addr[0] >= 224 && VAR_0->addr[0] <= 239)
 {

  return 0;
 }

 for (VAR_1 = 0;VAR_1 < 4;VAR_1++)
 {
  if (VAR_0->addr[VAR_1] != 255)
  {
   return 1;
  }
 }

 return 0;
}
