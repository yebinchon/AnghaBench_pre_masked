
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
typedef scalar_t__ dword ;
struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;


 int FUNC_0 (struct timeval*) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(dword * VAR_1, dword * VAR_2)
{
 struct timeval VAR_3;

 FUNC_0(&VAR_3);

 if (VAR_3.tv_sec > VAR_0.tv_sec) {
  if (VAR_0.tv_usec > VAR_3.tv_usec) {
   VAR_3.tv_sec--;
   VAR_3.tv_usec += 1000000;
  }
  *VAR_1 = (dword) (VAR_3.tv_sec - VAR_0.tv_sec);
  *VAR_2 = (dword) (VAR_3.tv_usec - VAR_0.tv_usec);
 } else if (VAR_3.tv_sec == VAR_0.tv_sec) {
  *VAR_1 = 0;
  if (VAR_0.tv_usec < VAR_3.tv_usec) {
   *VAR_2 = (dword) (VAR_3.tv_usec - VAR_0.tv_usec);
  } else {
   *VAR_2 = 0;
  }
 } else {
  *VAR_1 = (dword) VAR_3.tv_sec;
  *VAR_2 = (dword) VAR_3.tv_usec;
 }
}
