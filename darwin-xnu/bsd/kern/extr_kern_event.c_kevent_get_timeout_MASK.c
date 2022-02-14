
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;
typedef int ts ;
struct user64_timespec {int tv_sec; } ;
struct user32_timespec {int tv_sec; } ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct timespec {int tv_sec; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct proc*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct timeval*,struct user64_timespec*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,struct user64_timespec*,int) ;
 int FUNC_3 (struct timeval*) ;
 scalar_t__ FUNC_4 (struct timeval*) ;
 int FUNC_5 (struct timeval*,struct timeval*) ;

__attribute__((used)) static int
FUNC_6(struct proc *VAR_4,
     user_addr_t VAR_5,
     unsigned int VAR_6,
     struct timeval *VAR_7)
{
 struct timeval VAR_8;
 int VAR_9 = 0;

 if (VAR_6 & VAR_1) {
  FUNC_3(&VAR_8);
 } else if (VAR_5 != VAR_3) {
  struct timeval VAR_10;
  if (VAR_6 & VAR_2) {
   struct timespec *VAR_11 = (struct timespec *)VAR_5;
   FUNC_1(&VAR_10, VAR_11);
  } else if (FUNC_0(VAR_4)) {
   struct user64_timespec VAR_12;
   VAR_9 = FUNC_2(VAR_5, &VAR_12, sizeof(VAR_12));
   if ((VAR_12.tv_sec & 0xFFFFFFFF00000000ull) != 0)
    VAR_9 = VAR_0;
   else
    FUNC_1(&VAR_10, &VAR_12);
  } else {
   struct user32_timespec VAR_13;
   VAR_9 = FUNC_2(VAR_5, &VAR_13, sizeof(VAR_13));
   FUNC_1(&VAR_10, &VAR_13);
  }
  if (VAR_9)
   return (VAR_9);
  if (FUNC_4(&VAR_10))
   return (VAR_0);
  FUNC_3(&VAR_8);
  FUNC_5(&VAR_8, &VAR_10);
 } else {

  VAR_8.tv_sec = 0;
  VAR_8.tv_usec = 0;
 }
 *VAR_7 = VAR_8;
 return 0;
}
