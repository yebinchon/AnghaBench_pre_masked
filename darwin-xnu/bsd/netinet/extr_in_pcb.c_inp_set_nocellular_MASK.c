
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {int inp_route; int inp_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(struct inpcb *VAR_1)
{
 VAR_1->inp_flags |= VAR_0;


 FUNC_0(&VAR_1->inp_route);
}
