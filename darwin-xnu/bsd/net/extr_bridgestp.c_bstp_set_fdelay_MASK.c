
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int bs_bridge_fdelay; } ;


 int FUNC_0 (struct bstp_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bstp_state*) ;
 int VAR_3 ;
 int FUNC_2 (struct bstp_state*) ;

int
FUNC_3(struct bstp_state *VAR_4, int VAR_5)
{

 VAR_5 *= VAR_2;

 if (VAR_5 < VAR_1 || VAR_5 > VAR_0)
  return (VAR_3);

 FUNC_0(VAR_4);
 VAR_4->bs_bridge_fdelay = VAR_5;
 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
 return (0);
}
