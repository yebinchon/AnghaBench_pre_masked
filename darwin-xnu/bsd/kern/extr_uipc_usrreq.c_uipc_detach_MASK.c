
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int unp_mtx; } ;
struct socket {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct unpcb* FUNC_1 (struct socket*) ;
 int FUNC_2 (struct unpcb*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_2)
{
 struct unpcb *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 == 0)
  return (VAR_0);

 FUNC_0(&VAR_3->unp_mtx, VAR_1);
 FUNC_2(VAR_3);
 return (0);
}
