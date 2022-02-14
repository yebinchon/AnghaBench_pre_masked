
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
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,scalar_t__,long) ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_3(struct timespec *VAR_4)
{
 time_t VAR_5, VAR_6 = VAR_4->tv_sec;
 long VAR_7, VAR_8 = VAR_4->tv_nsec;

 if ((unsigned long)VAR_4->tv_nsec >= VAR_1)
  return -VAR_0;







 VAR_8 -= 1000 * FUNC_0();

 VAR_5 = VAR_2.tv_sec + (VAR_3.tv_sec - VAR_6);
 VAR_7 = VAR_2.tv_nsec + (VAR_3.tv_nsec - VAR_8);

 FUNC_2(&VAR_3, VAR_6, VAR_8);
 FUNC_2(&VAR_2, VAR_5, VAR_7);

 FUNC_1();
 return 0;
}
