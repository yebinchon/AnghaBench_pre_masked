
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
typedef TYPE_1__ mach_timespec_t ;
typedef int mach_port_t ;
typedef int kern_return_t ;


 int FUNC_0 (int ,int ,int ,int ) ;

kern_return_t
FUNC_1(mach_port_t VAR_0,
      mach_port_t VAR_1,
      mach_timespec_t VAR_2)
{
        return FUNC_0(VAR_0,
                                               VAR_1,
                                               VAR_2.tv_sec,
                                               VAR_2.tv_nsec);
}
