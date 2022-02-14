
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct inpcb {int * in6p_icmp6filt; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (char*) ;
 struct inpcb* FUNC_3 (struct socket*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_1)
{
 struct inpcb *VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 == 0)
  FUNC_2("rip6_detach");

 if (VAR_2->in6p_icmp6filt) {
  FUNC_0(VAR_2->in6p_icmp6filt, VAR_0);
  VAR_2->in6p_icmp6filt = ((void*)0);
 }
 FUNC_1(VAR_2);
 return 0;
}
