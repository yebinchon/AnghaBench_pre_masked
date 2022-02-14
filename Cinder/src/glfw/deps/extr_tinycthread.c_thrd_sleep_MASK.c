
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int useconds_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef long DWORD ;


 int VAR_0 ;
 int FUNC_0 (long) ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (int) ;

int FUNC_3(const struct timespec *VAR_1, struct timespec *VAR_2)
{
  struct timespec VAR_3;



  long VAR_4;



  if (FUNC_1(VAR_0, &VAR_3) != 0)
    return -2;
  VAR_4 = (VAR_1->tv_sec - VAR_3.tv_sec) * 1000000L +
          (VAR_1->tv_nsec - VAR_3.tv_nsec + 500L) / 1000L;


  while (VAR_4 > 999999L)
  {
    FUNC_2(999999);
    VAR_4 -= 999999L;
  }
  if (VAR_4 > 0L)
  {
    FUNC_2((useconds_t)VAR_4);
  }



  if (VAR_2)
  {
    VAR_2->tv_sec = 0;
    VAR_2->tv_nsec = 0;
  }
  return 0;
}
