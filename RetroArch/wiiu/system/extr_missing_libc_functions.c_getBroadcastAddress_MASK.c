
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;



__attribute__((used)) static int FUNC_0(struct sockaddr_in *VAR_0, struct sockaddr_in *VAR_1, struct sockaddr_in *VAR_2)
{
   if (!VAR_0 || !VAR_1 || !VAR_2)
      return -1;

   VAR_0->sin_addr.s_addr = VAR_1->sin_addr.s_addr | (~VAR_2->sin_addr.s_addr);
   return 0;
}
