
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags; } ;
struct mppcb {int mpp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct mppcb* FUNC_1 (struct socket*) ;

void
FUNC_2(struct socket *VAR_2)
{
 struct mppcb *VAR_3 = FUNC_1(VAR_2);

 VAR_3->mpp_state = VAR_0;
 if (!(VAR_2->so_flags & VAR_1))
  VAR_2->so_flags |= VAR_1;

 FUNC_0();
}
