
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int dummy; } ;
struct bstp_port {int bp_operedge; int bp_flags; struct bstp_state* bp_bs; } ;


 int FUNC_0 (struct bstp_state*) ;
 int VAR_0 ;
 int FUNC_1 (struct bstp_state*) ;

int
FUNC_2(struct bstp_port *VAR_1, int VAR_2)
{
 struct bstp_state *VAR_3 = VAR_1->bp_bs;

 FUNC_0(VAR_3);
 if ((VAR_1->bp_operedge = VAR_2) == 0)
  VAR_1->bp_flags &= ~VAR_0;
 else
  VAR_1->bp_flags |= VAR_0;
 FUNC_1(VAR_3);
 return (0);
}
