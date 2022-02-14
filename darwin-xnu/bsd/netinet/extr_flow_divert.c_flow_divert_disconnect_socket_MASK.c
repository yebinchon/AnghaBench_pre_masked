
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct inpcb {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct socket*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct socket*) ;
 struct inpcb* FUNC_5 (struct socket*) ;

__attribute__((used)) static void
FUNC_6(struct socket *VAR_2)
{
 FUNC_4(VAR_2);
 if (FUNC_1(VAR_2) == VAR_1) {
  struct inpcb *VAR_3 = ((void*)0);

  VAR_3 = FUNC_5(VAR_2);
  if (VAR_3 != ((void*)0)) {





    FUNC_3(VAR_3);
  }
 }
}
