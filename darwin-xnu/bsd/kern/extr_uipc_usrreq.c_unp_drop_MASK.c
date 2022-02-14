
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {struct socket* unp_socket; } ;
struct socket {int so_error; } ;


 int FUNC_0 (struct unpcb*) ;

__attribute__((used)) static void
FUNC_1(struct unpcb *VAR_0, int VAR_1)
{
 struct socket *VAR_2 = VAR_0->unp_socket;

 VAR_2->so_error = VAR_1;
 FUNC_0(VAR_0);
}
