
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr_ib {int sib_addr; } ;
struct sockaddr {int sa_family; } ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct sockaddr *VAR_0)
{
 switch (VAR_0->sa_family) {
 case 129:
  return FUNC_1(((struct sockaddr_in *)VAR_0)->sin_addr.s_addr);
 case 128:
  return FUNC_2(&((struct sockaddr_in6 *) VAR_0)->sin6_addr);
 case 130:
  return FUNC_0(&((struct sockaddr_ib *) VAR_0)->sib_addr);
 default:
  return 0;
 }
}
