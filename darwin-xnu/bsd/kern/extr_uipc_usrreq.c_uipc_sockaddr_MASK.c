
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int * unp_addr; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 struct sockaddr* FUNC_0 (struct sockaddr*,int) ;
 struct unpcb* FUNC_1 (struct socket*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_2, struct sockaddr **VAR_3)
{
 struct unpcb *VAR_4 = FUNC_1(VAR_2);

 if (VAR_4 == ((void*)0))
  return (VAR_0);
 if (VAR_4->unp_addr != ((void*)0)) {
  *VAR_3 = FUNC_0((struct sockaddr *)VAR_4->unp_addr, 1);
 } else {
  *VAR_3 = FUNC_0((struct sockaddr *)&VAR_1, 1);
 }
 return (0);
}
