
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {scalar_t__ rw_thrcount; int unp_flags; } ;
struct socket {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,int) ;
 int FUNC_1 (struct socket*,int ) ;
 struct unpcb* FUNC_2 (struct socket*) ;
 int FUNC_3 (struct unpcb*) ;

__attribute__((used)) static void
FUNC_4(struct socket *VAR_1, struct socket *VAR_2)
{
 if (VAR_1 < VAR_2) {
  FUNC_0(VAR_2, 1);
 } else {
  struct unpcb *VAR_3 = FUNC_2(VAR_1);
  VAR_3->unp_flags |= VAR_0;
  VAR_3->rw_thrcount++;
  FUNC_1(VAR_1, 0);


  FUNC_0(VAR_2, 1);
  FUNC_0(VAR_1, 0);
  VAR_3->rw_thrcount--;
  if (VAR_3->rw_thrcount == 0) {
   VAR_3->unp_flags &= ~VAR_0;
   FUNC_3(VAR_3);
  }
 }
}
