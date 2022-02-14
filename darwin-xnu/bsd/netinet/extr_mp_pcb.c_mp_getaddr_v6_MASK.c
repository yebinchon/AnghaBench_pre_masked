
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {struct in6_addr sin6_addr; int sin6_port; } ;
struct TYPE_3__ {struct in6_addr sin6_addr; int sin6_port; } ;
struct mptses {TYPE_2__ __mpte_dst_v6; TYPE_1__ __mpte_src_v6; } ;
typedef int in_port_t ;
typedef int boolean_t ;


 int VAR_0 ;
 struct sockaddr* FUNC_0 (int ,struct in6_addr*) ;
 struct mptses* FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_1, struct sockaddr **VAR_2, boolean_t VAR_3)
{
 struct mptses *VAR_4 = FUNC_1(VAR_1);
 struct in6_addr VAR_5;
 in_port_t VAR_6;

 if (!VAR_3) {
  VAR_6 = VAR_4->__mpte_src_v6.sin6_port;
  VAR_5 = VAR_4->__mpte_src_v6.sin6_addr;
 } else {
  VAR_6 = VAR_4->__mpte_dst_v6.sin6_port;
  VAR_5 = VAR_4->__mpte_dst_v6.sin6_addr;
 }

 *VAR_2 = FUNC_0(VAR_6, &VAR_5);
 if (*VAR_2 == ((void*)0))
  return (VAR_0);

 return (0);
}
