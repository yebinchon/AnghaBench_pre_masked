
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr_in {int sin_len; int sin_addr; int sin_port; int sin_family; } ;
struct inpcb {int inp_laddr; int inp_lport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 struct inpcb* FUNC_2 (struct socket*) ;

int
FUNC_3(struct socket *VAR_2, struct sockaddr_in *VAR_3)
{
 struct sockaddr_in *VAR_4 = VAR_3;
 struct inpcb *VAR_5;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_1(VAR_3, sizeof (*VAR_3));

 VAR_4->sin_family = VAR_0;
 VAR_4->sin_len = sizeof (*VAR_4);

 if ((VAR_5 = FUNC_2(VAR_2)) == ((void*)0))
  return (VAR_1);

 VAR_4->sin_port = VAR_5->inp_lport;
 VAR_4->sin_addr = VAR_5->inp_laddr;
 return (0);
}
