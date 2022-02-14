
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {unsigned long tv_sec; int tv_nsec; } ;
struct TYPE_2__ {unsigned long tv_sec; int tv_nsec; } ;
struct ntptimeval {int maxerror; int time_state; int tai; int esterror; TYPE_1__ time; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct timespec*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3(struct ntptimeval *VAR_8)
{
 struct timespec VAR_9;

 FUNC_0();

 FUNC_1(&VAR_9);
 VAR_8->time.tv_sec = VAR_9.tv_sec;
 VAR_8->time.tv_nsec = VAR_9.tv_nsec;
 if ((unsigned long)VAR_9.tv_sec > VAR_2) {
  VAR_4 += (VAR_0 / 1000)*(VAR_9.tv_sec-VAR_2);
  VAR_2 = VAR_9.tv_sec;
 }
 VAR_8->maxerror = VAR_4;
 VAR_8->esterror = VAR_3;
 VAR_8->tai = VAR_7;
 VAR_8->time_state = VAR_5;

 if (FUNC_2(VAR_6))
  VAR_8->time_state = VAR_1;
}
