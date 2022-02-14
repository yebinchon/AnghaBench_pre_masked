
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (scalar_t__) ;
 struct timeval FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct timeval* VAR_0)
{
  struct timeval VAR_1;
  ssize_t VAR_2;
  VAR_1 = FUNC_1();
  VAR_2 = (ssize_t)((VAR_0->tv_sec - VAR_1.tv_sec) * 1000000 +
    VAR_0->tv_usec - VAR_1.tv_usec);
  if(VAR_2 < 0)
    VAR_2 = 0;

  return FUNC_0(VAR_2);
}
