
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ semaphore_t ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
typedef TYPE_1__ mach_timespec_t ;
typedef int kern_return_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ,int,void (*) (int )) ;

kern_return_t
FUNC_3(
 semaphore_t VAR_5,
 semaphore_t VAR_6,
 mach_timespec_t VAR_7)
{
 int VAR_8 = VAR_3;
 uint64_t VAR_9 = 0;

 if (VAR_5 == VAR_2)
  return VAR_0;

 if(FUNC_0(&VAR_7))
  return VAR_1;

 if (VAR_7.tv_sec == 0 && VAR_7.tv_nsec == 0)
  VAR_8 = VAR_4;
 else
  VAR_9 = FUNC_1(VAR_7.tv_sec, VAR_7.tv_nsec);

 return(FUNC_2(VAR_5,
           VAR_6,
        VAR_9, VAR_8,
           (void(*)(kern_return_t))0));
}
