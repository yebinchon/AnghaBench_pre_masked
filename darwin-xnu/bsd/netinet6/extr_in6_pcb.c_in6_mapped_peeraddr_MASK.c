
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct inpcb {int inp_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*,struct sockaddr**) ;
 int FUNC_1 (struct sockaddr**) ;
 int FUNC_2 (struct socket*,struct sockaddr**) ;
 struct inpcb* FUNC_3 (struct socket*) ;

int
FUNC_4(struct socket *VAR_2, struct sockaddr **VAR_3)
{
 struct inpcb *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 if (VAR_4 == ((void*)0))
  return (VAR_0);
 if (VAR_4->inp_vflag & VAR_1) {
  VAR_5 = FUNC_2(VAR_2, VAR_3);
  if (VAR_5 == 0)
   VAR_5 = FUNC_1(VAR_3);
 } else {

  VAR_5 = FUNC_0(VAR_2, VAR_3);
 }
 return (VAR_5);
}
