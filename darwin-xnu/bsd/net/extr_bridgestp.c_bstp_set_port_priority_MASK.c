
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int dummy; } ;
struct bstp_port {int bp_priority; struct bstp_state* bp_bs; } ;


 int FUNC_0 (struct bstp_state*) ;
 int VAR_0 ;
 int FUNC_1 (struct bstp_state*) ;
 int VAR_1 ;
 int FUNC_2 (struct bstp_state*) ;

int
FUNC_3(struct bstp_port *VAR_2, int VAR_3)
{
 struct bstp_state *VAR_4 = VAR_2->bp_bs;

 if (VAR_3 < 0 || VAR_3 > VAR_0)
  return (VAR_1);


 VAR_3 -= VAR_3 % 16;

 FUNC_0(VAR_4);
 VAR_2->bp_priority = VAR_3;
 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
 return (0);
}
