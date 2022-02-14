
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* addr; } ;
typedef TYPE_1__ IP ;



bool FUNC_0(IP *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->addr[0] == 223 && VAR_0->addr[1] == 255 && VAR_0->addr[2] == 255 && VAR_0->addr[3] == 254)
 {
  return 1;
 }

 return 0;
}
