
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int* addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (char*,scalar_t__,char*,int,int,int,int) ;

void FUNC_1(char *VAR_0, UINT VAR_1, IP *VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 FUNC_0(VAR_0, VAR_1 != 0 ? VAR_1 : 64, "%u.%u.%u.%u", VAR_2->addr[0], VAR_2->addr[1], VAR_2->addr[2], VAR_2->addr[3]);
}
