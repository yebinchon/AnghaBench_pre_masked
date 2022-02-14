
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int const sigset_t ;
typedef int fd_set ;
typedef scalar_t__ __darwin_suseconds_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int const*) ;
 int VAR_1 ;
 int FUNC_1 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, fd_set * __restrict VAR_3, fd_set * __restrict VAR_4,
  fd_set * __restrict VAR_5, const struct timespec * __restrict VAR_6,
  const sigset_t * __restrict VAR_7)
{
 sigset_t VAR_8;
 struct timeval VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_6) {
  VAR_9.tv_sec = VAR_6->tv_sec;
  VAR_9.tv_usec = (__darwin_suseconds_t)(VAR_6->tv_nsec / 1000);
  VAR_10 = &VAR_9;
 } else {
  VAR_10 = 0;
 }

 if (VAR_7 != 0) {
  VAR_11 = FUNC_0(VAR_0, VAR_7, &VAR_8);
  if (VAR_11 != 0)
   return VAR_11;
 }

 VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_10);
 if (VAR_7 != 0) {
  VAR_12 = VAR_1;
  FUNC_0(VAR_0, &VAR_8, (sigset_t *)0);
  VAR_1 = VAR_12;
 }

 return VAR_11;
}
