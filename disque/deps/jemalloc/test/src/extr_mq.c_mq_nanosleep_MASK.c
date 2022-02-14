
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; unsigned int tv_nsec; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct timespec*,int *) ;

void
FUNC_3(unsigned VAR_0)
{

 FUNC_1(VAR_0 <= 1000*1000*1000);




 {
  struct timespec VAR_1;

  if (VAR_0 < 1000*1000*1000) {
   VAR_1.tv_sec = 0;
   VAR_1.tv_nsec = VAR_0;
  } else {
   VAR_1.tv_sec = 1;
   VAR_1.tv_nsec = 0;
  }
  FUNC_2(&VAR_1, ((void*)0));
 }

}
