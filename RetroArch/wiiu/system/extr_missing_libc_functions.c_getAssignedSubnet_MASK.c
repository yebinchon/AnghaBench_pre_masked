
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
typedef int ACIpAddress ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct sockaddr_in *VAR_0)
{
   ACIpAddress VAR_1;
   int VAR_2;
   if (!VAR_0)
      return -1;

   VAR_2 = FUNC_0(&VAR_1);
   if (VAR_2 == 0)
      VAR_0->sin_addr.s_addr = VAR_1;

   return VAR_2;
}
