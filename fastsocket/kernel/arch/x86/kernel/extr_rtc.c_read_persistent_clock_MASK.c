
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {unsigned long tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_2__ {unsigned long (* get_wallclock ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned long FUNC_2 () ;
 TYPE_1__ VAR_1 ;

void FUNC_3(struct timespec *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 FUNC_0(&VAR_0, VAR_4);
 VAR_3 = VAR_1.get_wallclock();
 FUNC_1(&VAR_0, VAR_4);

 VAR_2->tv_sec = VAR_3;
 VAR_2->tv_nsec = 0;
}
