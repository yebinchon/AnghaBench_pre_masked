
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(struct sockaddr *VAR_4)
{
 if (VAR_4 == ((void*)0)) {
  return (VAR_2);
 }

 if (VAR_4->sa_family == VAR_0) {
  return (FUNC_1(((struct sockaddr_in *)(void *)VAR_4)->sin_addr.s_addr) == VAR_3);
 } else if (VAR_4->sa_family == VAR_1) {
  return FUNC_0(&((struct sockaddr_in6 *)(void *)VAR_4)->sin6_addr);
 }

 return (VAR_2);
}
