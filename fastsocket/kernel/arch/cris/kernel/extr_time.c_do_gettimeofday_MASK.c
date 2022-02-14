
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {long tv_sec; long tv_usec; } ;
struct TYPE_2__ {long tv_sec; int tv_nsec; } ;


 long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__ VAR_2 ;

void FUNC_4(struct timeval *VAR_3)
{
 unsigned long VAR_4;
 signed long VAR_5, VAR_6;
 FUNC_2(VAR_4);
 VAR_5 = FUNC_0();






 if (FUNC_3(VAR_1 < 0) && VAR_5 > VAR_0)
  VAR_5 = VAR_0;

 VAR_6 = VAR_2.tv_sec;
 VAR_5 += VAR_2.tv_nsec / 1000;
 FUNC_1(VAR_4);

 while (VAR_5 >= 1000000) {
  VAR_5 -= 1000000;
  VAR_6++;
 }

 VAR_3->tv_sec = VAR_6;
 VAR_3->tv_usec = VAR_5;
}
