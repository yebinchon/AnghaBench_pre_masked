
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {scalar_t__* s6_addr16; } ;
struct sockaddr_in6 {int sin6_len; struct in6_addr sin6_addr; scalar_t__ sin6_scope_id; int sin6_port; int sin6_family; } ;
typedef int in_port_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (struct sockaddr_in6*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void
FUNC_3(in_port_t VAR_1, struct in6_addr *VAR_2,
    struct sockaddr_in6 *VAR_3)
{
 FUNC_1(VAR_3, sizeof (*VAR_3));
 VAR_3->sin6_family = VAR_0;
 VAR_3->sin6_len = sizeof (*VAR_3);
 VAR_3->sin6_port = VAR_1;
 VAR_3->sin6_addr = *VAR_2;


 if (FUNC_0(&VAR_3->sin6_addr))
  VAR_3->sin6_scope_id = FUNC_2(VAR_3->sin6_addr.s6_addr16[1]);
 else
  VAR_3->sin6_scope_id = 0;
 if (FUNC_0(&VAR_3->sin6_addr))
  VAR_3->sin6_addr.s6_addr16[1] = 0;
}
