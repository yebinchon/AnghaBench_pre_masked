
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (struct timeval*,int *) ;

void FUNC_1(struct timeval *VAR_0) {
  struct timeval VAR_1;
  FUNC_0(&VAR_1, ((void*)0));
  if(VAR_1.tv_usec >= VAR_0->tv_usec) {
    VAR_0->tv_sec = VAR_1.tv_sec - VAR_0->tv_sec;
    VAR_0->tv_usec = VAR_1.tv_usec - VAR_0->tv_usec;
  }
  else {
    VAR_0->tv_sec = VAR_1.tv_sec - VAR_0->tv_sec - 1;
    VAR_0->tv_usec = VAR_1.tv_usec - VAR_0->tv_usec + 1000000;
  }
}
