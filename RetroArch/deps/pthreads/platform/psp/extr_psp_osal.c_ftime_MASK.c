
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int tz_dsttime; int tz_minuteswest; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct timeb {int millitm; int dstflag; int timezone; int time; } ;


 int FUNC_0 (struct timeval*,struct timezone*) ;

int FUNC_1(struct timeb *VAR_0)
{
   struct timeval VAR_1;
   struct timezone VAR_2;

   FUNC_0(&VAR_1, &VAR_2);

   VAR_0->time = VAR_1.tv_sec;
   VAR_0->millitm = VAR_1.tv_usec / 1000;
   VAR_0->timezone = VAR_2.tz_minuteswest;
   VAR_0->dstflag = VAR_2.tz_dsttime;

   return 0;
}
