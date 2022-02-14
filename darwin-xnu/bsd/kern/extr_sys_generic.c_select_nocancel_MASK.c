
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct user64_timeval {int tv_usec; int tv_sec; } ;
struct user32_timeval {int tv_usec; int tv_sec; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct select_nocancel_args {scalar_t__ tv; } ;
struct proc {int dummy; } ;
typedef int int32_t ;
typedef int caddr_t ;
typedef int atv64 ;
typedef int atv32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct proc*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_3 (struct timeval*) ;
 int FUNC_4 (struct proc*,struct select_nocancel_args*,int ,int *) ;
 int FUNC_5 (struct timeval*) ;

int
FUNC_6(struct proc *VAR_1, struct select_nocancel_args *VAR_2, int32_t *VAR_3)
{
 uint64_t VAR_4 = 0;

 if (VAR_2->tv) {
  int VAR_5;
  struct timeval VAR_6;
  if (FUNC_0(VAR_1)) {
   struct user64_timeval VAR_7;
   VAR_5 = FUNC_2(VAR_2->tv, (caddr_t)&VAR_7, sizeof(VAR_7));

   VAR_6.tv_sec = VAR_7;
   VAR_6.tv_usec = VAR_7;
  } else {
   struct user32_timeval VAR_8;
   VAR_5 = FUNC_2(VAR_2->tv, (caddr_t)&VAR_8, sizeof(VAR_8));
   VAR_6.tv_sec = VAR_8;
   VAR_6.tv_usec = VAR_8;
  }
  if (VAR_5)
   return VAR_5;

  if (FUNC_3(&VAR_6)) {
   VAR_5 = VAR_0;
   return VAR_5;
  }

  FUNC_1(FUNC_5(&VAR_6), &VAR_4);
 }

 return FUNC_4(VAR_1, VAR_2, VAR_4, VAR_3);
}
