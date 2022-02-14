
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int dummy; } ;
struct socket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*) ;
 struct unpcb* FUNC_1 (struct socket*) ;
 int FUNC_2 (struct unpcb*) ;
 int FUNC_3 (struct unpcb*,int ) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_2)
{
 struct unpcb *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 == 0)
  return (VAR_1);
 FUNC_3(VAR_3, VAR_0);
 FUNC_2(VAR_3);
 FUNC_0(VAR_2);
 return (0);
}
