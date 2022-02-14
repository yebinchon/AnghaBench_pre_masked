
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct timespec {long tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {long (* offset ) () ;} ;
struct TYPE_5__ {long tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,scalar_t__,long) ;
 long FUNC_3 () ;
 TYPE_3__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;

int FUNC_6(struct timespec *VAR_7)
{
 time_t VAR_8, VAR_9 = VAR_7->tv_sec;
 long VAR_10, VAR_11 = VAR_7->tv_nsec;

 if ((unsigned long)VAR_7->tv_nsec >= VAR_1)
  return -VAR_0;

 FUNC_4(&VAR_6);






 VAR_11 -= VAR_3->offset() * VAR_2;

 VAR_8 = VAR_4.tv_sec + (VAR_5.tv_sec - VAR_9);
 VAR_10 = VAR_4.tv_nsec + (VAR_5.tv_nsec - VAR_11);

 FUNC_2(&VAR_5, VAR_9, VAR_11);
 FUNC_2(&VAR_4, VAR_8, VAR_10);

 FUNC_1();
 FUNC_5(&VAR_6);
 FUNC_0();
 return 0;
}
