
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sys_time_sec_t ;
typedef int sys_time_nsec_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int tv_sec; int tv_nsec; int member_0; } ;
struct TYPE_9__ {int lock; } ;
typedef TYPE_1__ slock_t ;
struct TYPE_10__ {int cond; } ;
typedef TYPE_2__ scond_t ;
struct TYPE_11__ {int tv_sec; int tv_nsec; } ;
typedef TYPE_3__ mach_timespec_t ;
typedef int int64_t ;
typedef int clock_serv_t ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct timespec*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ,struct timespec*) ;
 int FUNC_6 (struct timeval*,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int *,struct timespec*) ;
 int FUNC_12 (int*,int*) ;

bool FUNC_13(scond_t *VAR_2, slock_t *VAR_3, int64_t VAR_4)
{
   int VAR_5;
   int64_t VAR_6, VAR_7;
   struct timespec VAR_8 = {0};
   FUNC_5(VAR_1, &VAR_8);


   VAR_6 = VAR_4 / FUNC_0(1000000);
   VAR_7 = VAR_4 % FUNC_0(1000000);

   VAR_8.tv_sec += VAR_6;
   VAR_8.tv_nsec += VAR_7 * FUNC_0(1000);

   if (VAR_8.tv_nsec > 1000000000)
   {
      VAR_8.tv_nsec -= 1000000000;
      VAR_8.tv_sec += 1;
   }

   VAR_5 = FUNC_11(&VAR_2->cond, &VAR_3->lock, &VAR_8);
   return (VAR_5 == 0);

}
