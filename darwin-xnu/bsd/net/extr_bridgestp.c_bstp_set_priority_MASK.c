
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int bs_bridge_priority; } ;


 int FUNC_0 (struct bstp_state*) ;
 int VAR_0 ;
 int FUNC_1 (struct bstp_state*) ;
 int VAR_1 ;
 int FUNC_2 (struct bstp_state*) ;

int
FUNC_3(struct bstp_state *VAR_2, int VAR_3)
{
 if (VAR_3 < 0 || VAR_3 > VAR_0)
  return (VAR_1);


 VAR_3 -= VAR_3 % 4096;

 FUNC_0(VAR_2);
 VAR_2->bs_bridge_priority = VAR_3;
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 return (0);
}
