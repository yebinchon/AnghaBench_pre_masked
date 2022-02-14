
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int semaphore_t ;
struct TYPE_3__ {unsigned int tv_sec; scalar_t__ tv_nsec; } ;
typedef TYPE_1__ mach_timespec_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ clock_res_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int,void (*) (scalar_t__)) ;

kern_return_t
FUNC_5(
 mach_port_name_t VAR_5,
 unsigned int VAR_6,
 clock_res_t VAR_7,
 void (*VAR_8)(kern_return_t))
{
 semaphore_t VAR_9;
 mach_timespec_t VAR_10;
 kern_return_t VAR_11;

 VAR_10.tv_sec = VAR_6;
 VAR_10.tv_nsec = VAR_7;
 if(FUNC_0(&VAR_10))
  return VAR_0;

 VAR_11 = FUNC_1(VAR_5, &VAR_9);
 if (VAR_11 == VAR_1) {
  int VAR_12 = VAR_3;
  uint64_t VAR_13 = 0;

  if (VAR_6 == 0 && VAR_7 == 0)
   VAR_12 = VAR_4;
  else
   VAR_13 = FUNC_2(VAR_6, VAR_7);

  VAR_11 = FUNC_4(VAR_9,
    VAR_2,
    VAR_13, VAR_12,
    VAR_8);
  FUNC_3(VAR_9);
 }
 return VAR_11;
}
