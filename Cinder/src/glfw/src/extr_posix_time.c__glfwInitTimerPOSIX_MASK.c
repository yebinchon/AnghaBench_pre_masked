
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_3__ {int frequency; int monotonic; } ;
struct TYPE_4__ {TYPE_1__ posix_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;

void FUNC_1(void)
{
    {
        VAR_3.posix_time.monotonic = VAR_1;
        VAR_3.posix_time.frequency = 1000000;
    }
}
