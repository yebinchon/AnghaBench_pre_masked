
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {scalar_t__ tz_dsttime; scalar_t__ tz_minuteswest; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct _reent {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct _reent *VAR_0, struct timeval *VAR_1, struct timezone *VAR_2) {

 if (VAR_1 != ((void*)0)) {
  VAR_1->tv_sec = FUNC_2(((void*)0));
  VAR_1->tv_usec = FUNC_1(FUNC_0())%1000000;
 }
 if (VAR_2 != ((void*)0)) {
  VAR_2->tz_minuteswest = 0;
  VAR_2->tz_dsttime = 0;

 }
 return 0;
}
