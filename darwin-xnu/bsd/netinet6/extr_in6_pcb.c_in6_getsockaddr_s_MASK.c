
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct in6_addr {int dummy; } ;
struct inpcb {struct in6_addr in6p_laddr; int inp_lport; } ;
typedef int in_port_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr_in6*,int) ;
 int FUNC_2 (int ,struct in6_addr*,struct sockaddr_in6*) ;
 struct inpcb* FUNC_3 (struct socket*) ;

int
FUNC_4(struct socket *VAR_1, struct sockaddr_in6 *VAR_2)
{
 struct inpcb *VAR_3;
 struct in6_addr VAR_4;
 in_port_t VAR_5;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_1(VAR_2, sizeof (*VAR_2));

 if ((VAR_3 = FUNC_3(VAR_1)) == ((void*)0))
  return (VAR_0);

 VAR_5 = VAR_3->inp_lport;
 VAR_4 = VAR_3->in6p_laddr;

 FUNC_2(VAR_5, &VAR_4, VAR_2);
 return (0);
}
