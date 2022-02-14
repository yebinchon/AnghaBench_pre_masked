
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*) ;

bool FUNC_1(IP *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }
 if (FUNC_0(VAR_0) == 0)
 {
  return 0;
 }

 if (VAR_0->addr[0] == 127)
 {
  return 1;
 }

 return 0;
}
