
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
struct ifnet {int if_eflags; scalar_t__ if_start_delay_timeout; int if_snd; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_1(struct ifnet *VAR_3, u_int64_t *VAR_4)
{
 u_int64_t VAR_5 = 0;
 VAR_5 = FUNC_0(&VAR_3->if_snd);

 if (VAR_2 != 0)
  VAR_5 = VAR_2;





 if (VAR_5 == 0)
  VAR_5 = VAR_1;






 if ((VAR_3->if_eflags & VAR_0) &&
     VAR_3->if_start_delay_timeout > 0)
  VAR_5 += VAR_3->if_start_delay_timeout;

 *(VAR_4) = VAR_5;
}
