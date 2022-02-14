
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {long tv_sec; long tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timespec*) ;
 struct timespec FUNC_1 (struct timespec,struct timespec) ;
 int FUNC_2 (struct timespec*) ;

int FUNC_3(struct timespec *VAR_1, long VAR_2, long VAR_3)
{
 struct timespec VAR_4 = {.tv_sec = VAR_2, .tv_nsec = VAR_3};

 if (!FUNC_2(&VAR_4))
  return -VAR_0;


 if (!VAR_2 && !VAR_3) {
  VAR_1->tv_sec = VAR_1->tv_nsec = 0;
 } else {
  FUNC_0(VAR_1);
  *VAR_1 = FUNC_1(*VAR_1, VAR_4);
 }
 return 0;
}
