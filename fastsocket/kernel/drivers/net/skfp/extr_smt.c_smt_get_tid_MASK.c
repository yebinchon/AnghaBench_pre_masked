
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {int smt_tid; } ;
struct s_smc {TYPE_1__ sm; } ;


 int VAR_0 ;

u_long FUNC_0(struct s_smc *VAR_1)
{
 u_long VAR_2 ;
 while ((VAR_2 = ++(VAR_1->sm.smt_tid) ^ VAR_0) == 0)
  ;
 return(VAR_2 & 0x3fffffffL) ;
}
