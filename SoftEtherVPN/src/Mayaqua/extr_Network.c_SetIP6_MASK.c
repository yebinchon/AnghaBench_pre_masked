
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int* addr; int * ipv6_addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(IP *VAR_0, UCHAR *VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, sizeof(IP));

 VAR_0->addr[0] = 223;
 VAR_0->addr[1] = 255;
 VAR_0->addr[2] = 255;
 VAR_0->addr[3] = 254;

 if (VAR_1 != ((void*)0))
 {
  UINT VAR_2;

  for (VAR_2 = 0;VAR_2 < 16;VAR_2++)
  {
   VAR_0->ipv6_addr[VAR_2] = VAR_1[VAR_2];
  }
 }
}
