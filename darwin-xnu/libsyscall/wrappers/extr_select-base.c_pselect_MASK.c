
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timeout ;
struct timespec {scalar_t__ tv_sec; long tv_nsec; } ;
typedef int sigset_t ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,int *,int *,struct timespec const*,int const*) ;
 int FUNC_1 (int,int *,int *,int *,struct timespec const*,int const*) ;
 int FUNC_2 (int,int *,int *,int *,struct timespec const*,int const*) ;
 scalar_t__ VAR_3 ;

int
FUNC_3(int VAR_4, fd_set * __restrict VAR_5, fd_set * __restrict VAR_6,
 fd_set * __restrict VAR_7, const struct timespec * __restrict



 VAR_8,

 const sigset_t * __restrict VAR_9)
{
 int VAR_10;
 if (VAR_4 > VAR_2) {
  VAR_3 = VAR_0;
  return -1;
 }





 VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);


 if (VAR_10 == -1 && VAR_3 == VAR_1) {
  VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 }

 return VAR_10;
}
