
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int* ipv6_addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(IP *VAR_0, UINT VAR_1)
{
 UINT VAR_2 = VAR_1 / 8;
 UINT VAR_3 = VAR_1 % 8;
 UINT VAR_4;
 IP VAR_5;

 FUNC_1(&VAR_5);

 for (VAR_4 = 0;VAR_4 < 16;VAR_4++)
 {
  if (VAR_4 < VAR_2)
  {
   VAR_5.ipv6_addr[VAR_4] = 0xff;
  }
  else if (VAR_4 == VAR_2)
  {
   VAR_5.ipv6_addr[VAR_4] = ~(0xff >> VAR_3);
  }
 }

 FUNC_0(VAR_0, &VAR_5, sizeof(IP));
}
