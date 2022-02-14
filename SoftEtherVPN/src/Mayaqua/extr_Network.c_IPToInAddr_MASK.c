
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct in_addr {int dummy; } ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int * addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct in_addr*,int) ;

void FUNC_2(struct in_addr *VAR_0, IP *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, sizeof(struct in_addr));

 if (FUNC_0(VAR_1) == 0)
 {
  for (VAR_2 = 0;VAR_2 < 4;VAR_2++)
  {
   ((UCHAR *)VAR_0)[VAR_2] = VAR_1->addr[VAR_2];
  }
 }
}
