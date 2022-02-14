
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(const struct sockaddr *VAR_0)
{
 const struct sockaddr_in *VAR_1 = (struct sockaddr_in *)VAR_0;
 return FUNC_0(VAR_1->sin_addr.s_addr);
}
