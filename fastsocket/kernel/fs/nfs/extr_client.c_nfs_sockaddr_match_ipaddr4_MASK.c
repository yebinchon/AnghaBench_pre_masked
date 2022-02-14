
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;



__attribute__((used)) static int FUNC_0(const struct sockaddr *VAR_0,
          const struct sockaddr *VAR_1)
{
 const struct sockaddr_in *VAR_2 = (const struct sockaddr_in *)VAR_0;
 const struct sockaddr_in *VAR_3 = (const struct sockaddr_in *)VAR_1;

 return VAR_2->sin_addr.s_addr == VAR_3->sin_addr.s_addr;
}
