
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_3__ {int resolution; int base; int monotonic; } ;
struct TYPE_4__ {TYPE_1__ posix_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 () ;

void FUNC_2(void)
{
    {
        VAR_2.posix_time.resolution = 1e-6;
    }

    VAR_2.posix_time.base = FUNC_1();
}
