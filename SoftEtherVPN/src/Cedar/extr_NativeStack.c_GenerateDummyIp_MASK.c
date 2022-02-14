
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int* addr; } ;
typedef int PRAND ;
typedef TYPE_1__ IP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(PRAND *VAR_0, IP *VAR_1)
{
 UINT VAR_2;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_1, sizeof(IP));

 for (VAR_2 = 1;VAR_2 < 4;VAR_2++)
 {
  UINT VAR_3 = 0;
  while (1)
  {
   VAR_3 = FUNC_0(VAR_0) % 256;
   if (VAR_3 >= 1 && VAR_3 <= 254)
   {
    break;
   }
  }

  VAR_1->addr[VAR_2] = (UCHAR)VAR_3;
 }

 VAR_1->addr[0] = 127;
}
