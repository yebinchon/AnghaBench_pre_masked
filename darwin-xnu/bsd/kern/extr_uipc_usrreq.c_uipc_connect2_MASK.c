
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int dummy; } ;
struct socket {int dummy; } ;


 int VAR_0 ;
 struct unpcb* FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*,struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_1, struct socket *VAR_2)
{
 struct unpcb *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 == 0)
  return (VAR_0);

 return (FUNC_1(VAR_1, VAR_2));
}
