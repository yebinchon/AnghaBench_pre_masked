
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_char ;
struct TYPE_2__ {int uniq_ticks; int uniq_time; } ;
struct s_smc {TYPE_1__ sm; } ;


 int VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(struct s_smc *VAR_1, u_char *VAR_2)
{
 u_long VAR_3 ;
 u_long VAR_4 ;






 VAR_4 = FUNC_0() ;
 VAR_3 = VAR_4 * 100 ;
 VAR_3 /= VAR_0 ;
 VAR_2[0] = 0 ;
 VAR_2[1] = (u_char)((VAR_3>>(8+8+8+8-1)) & 1) ;
 VAR_2[2] = (u_char)(VAR_3>>(8+8+8-1)) ;
 VAR_2[3] = (u_char)(VAR_3>>(8+8-1)) ;
 VAR_2[4] = (u_char)(VAR_3>>(8-1)) ;
 VAR_2[5] = (u_char)(VAR_3<<1) ;
 VAR_2[6] = (u_char)(VAR_1->sm.uniq_ticks>>8) ;
 VAR_2[7] = (u_char)VAR_1->sm.uniq_ticks ;



 if (VAR_4 != VAR_1->sm.uniq_time) {
  VAR_1->sm.uniq_ticks = 0 ;
 }
 VAR_1->sm.uniq_ticks++ ;
 VAR_1->sm.uniq_time = VAR_4 ;
}
