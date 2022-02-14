
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct inpcb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inpcb*) ;
 struct inpcb* FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_1)
{
 struct inpcb *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  return (VAR_0);
 FUNC_0(VAR_2);
 return (0);
}
