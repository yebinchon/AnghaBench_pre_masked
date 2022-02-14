
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct inpcb {struct in6_addr in6p_faddr; int inp_fport; } ;
typedef int in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sockaddr* FUNC_0 (int ,struct in6_addr*) ;
 struct inpcb* FUNC_1 (struct socket*) ;

int
FUNC_2(struct socket *VAR_2, struct sockaddr **VAR_3)
{
 struct inpcb *VAR_4;
 struct in6_addr VAR_5;
 in_port_t VAR_6;

 if ((VAR_4 = FUNC_1(VAR_2)) == ((void*)0))
  return (VAR_0);

 VAR_6 = VAR_4->inp_fport;
 VAR_5 = VAR_4->in6p_faddr;

 *VAR_3 = FUNC_0(VAR_6, &VAR_5);
 if (*VAR_3 == ((void*)0))
  return (VAR_1);
 return (0);
}
