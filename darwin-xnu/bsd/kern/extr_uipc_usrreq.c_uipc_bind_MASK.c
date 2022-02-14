
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int proc_t ;


 int VAR_0 ;
 struct unpcb* FUNC_0 (struct socket*) ;
 int FUNC_1 (struct unpcb*,struct sockaddr*,int ) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_1, struct sockaddr *VAR_2, proc_t VAR_3)
{
 struct unpcb *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4 == 0)
  return (VAR_0);

 return (FUNC_1(VAR_4, VAR_2, VAR_3));
}
