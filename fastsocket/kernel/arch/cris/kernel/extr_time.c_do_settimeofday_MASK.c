
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct timespec {long tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {long tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 () ;
 long FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,scalar_t__,long) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

int FUNC_6(struct timespec *VAR_6)
{
 time_t VAR_7, VAR_8 = VAR_6->tv_sec;
 long VAR_9, VAR_10 = VAR_6->tv_nsec;

 if ((unsigned long)VAR_6->tv_nsec >= VAR_1)
  return -VAR_0;

 FUNC_4(&VAR_5);






 VAR_10 -= FUNC_1() * VAR_2;

 VAR_7 = VAR_3.tv_sec + (VAR_4.tv_sec - VAR_8);
 VAR_9 = VAR_3.tv_nsec + (VAR_4.tv_nsec - VAR_10);

 FUNC_3(&VAR_4, VAR_8, VAR_10);
 FUNC_3(&VAR_3, VAR_7, VAR_9);

 FUNC_2();
 FUNC_5(&VAR_5);
 FUNC_0();
 return 0;
}
