
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {unsigned long tv_sec; unsigned long tv_usec; } ;
struct TYPE_4__ {unsigned long (* offset ) () ;} ;
struct TYPE_3__ {unsigned long tv_sec; int tv_nsec; } ;


 unsigned long FUNC_0 (int *,unsigned long) ;
 scalar_t__ FUNC_1 (int *,unsigned long,unsigned long) ;
 unsigned long FUNC_2 () ;
 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

void FUNC_3(struct timeval *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6, VAR_7;

 do {
  VAR_5 = FUNC_0(&VAR_2, VAR_4);
  VAR_6 = VAR_0->offset();
  VAR_7 = VAR_1.tv_sec;
  VAR_6 += VAR_1.tv_nsec / 1000;
 } while (FUNC_1(&VAR_2, VAR_5, VAR_4));


 while (VAR_6 >= 1000000) {
  VAR_6 -= 1000000;
  VAR_7++;
 }

 VAR_3->tv_sec = VAR_7;
 VAR_3->tv_usec = VAR_6;
}
