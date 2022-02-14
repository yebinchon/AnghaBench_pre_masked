
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_sec; int tv_usec; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (char*) ;

double FUNC_3() {
  struct timeval VAR_1;
  if (FUNC_1(&VAR_1, ((void*)0)) != 0) {
    FUNC_2("Failed to get current time in ms");
    FUNC_0(VAR_0);
  }

  return VAR_1.tv_sec + VAR_1.tv_usec / 1E6;
}
