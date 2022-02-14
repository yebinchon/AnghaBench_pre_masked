
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_usec; int tv_sec; } ;
typedef int CURLM ;


 struct timeval FUNC_0 () ;

__attribute__((used)) static int FUNC_1(CURLM *VAR_0, long VAR_1, void *VAR_2)
{
  struct timeval* VAR_3 = VAR_2;

  (void)VAR_0;
  if(VAR_1 != -1) {
    *VAR_3 = FUNC_0();
    VAR_3->tv_usec += VAR_1 * 1000;
  }
  else {
    VAR_3->tv_sec = -1;
  }
  return 0;
}
