
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {scalar_t__* s6_addr16; } ;
struct sockaddr_in6 {int sin6_len; struct in6_addr sin6_addr; int sin6_scope_id; int sin6_port; int sin6_family; } ;
union sockaddr_in_4_6 {struct sockaddr_in6 sin6; } ;
typedef int u_int16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(union sockaddr_in_4_6 *VAR_1,
 struct in6_addr *VAR_2, u_int16_t VAR_3)
{
 struct sockaddr_in6 *VAR_4 = &VAR_1->sin6;

 VAR_4->sin6_family = VAR_0;
 VAR_4->sin6_len = sizeof(*VAR_4);
 VAR_4->sin6_port = VAR_3;
 VAR_4->sin6_addr = *VAR_2;
 if (FUNC_0(&VAR_4->sin6_addr)) {
  VAR_4->sin6_scope_id = FUNC_1(VAR_4->sin6_addr.s6_addr16[1]);
  VAR_4->sin6_addr.s6_addr16[1] = 0;
 }
}
