
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_4__ {int* ipv6_addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (int*,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(IP *VAR_0, UCHAR *VAR_1)
{
 UCHAR VAR_2[8];

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_2, VAR_1);

 FUNC_2(VAR_0);
 VAR_0->ipv6_addr[0] = 0xfe;
 VAR_0->ipv6_addr[1] = 0x80;

 FUNC_0(&VAR_0->ipv6_addr[8], VAR_2, 8);
}
