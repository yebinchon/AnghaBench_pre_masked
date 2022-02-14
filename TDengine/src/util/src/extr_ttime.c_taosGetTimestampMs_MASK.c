
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef long int64_t ;


 int FUNC_0 (struct timeval*,int *) ;

int64_t FUNC_1() {
  struct timeval VAR_0;
  FUNC_0(&VAR_0, ((void*)0));
  return (int64_t)VAR_0.tv_sec * 1000L + (uint64_t)VAR_0.tv_usec / 1000;
}
