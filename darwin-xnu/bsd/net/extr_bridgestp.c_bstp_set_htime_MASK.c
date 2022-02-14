
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {scalar_t__ bs_protover; int bs_bridge_htime; } ;


 int FUNC_0 (struct bstp_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bstp_state*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bstp_state*) ;

int
FUNC_3(struct bstp_state *VAR_6, int VAR_7)
{

 VAR_7 *= VAR_3;


 if (VAR_6->bs_protover != VAR_2)
  return (VAR_5);

 if (VAR_7 < VAR_1 || VAR_7 > VAR_0)
  return (VAR_4);

 FUNC_0(VAR_6);
 VAR_6->bs_bridge_htime = VAR_7;
 FUNC_2(VAR_6);
 FUNC_1(VAR_6);
 return (0);
}
