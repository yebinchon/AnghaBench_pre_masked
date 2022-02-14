
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int frequency; int hasPC; } ;
struct TYPE_4__ {TYPE_1__ win32_time; } ;
typedef int LARGE_INTEGER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__ VAR_2 ;

void FUNC_1(void)
{
    uint64_t VAR_3;

    if (FUNC_0((LARGE_INTEGER*) &VAR_3))
    {
        VAR_2.win32_time.hasPC = VAR_1;
        VAR_2.win32_time.frequency = VAR_3;
    }
    else
    {
        VAR_2.win32_time.hasPC = VAR_0;
        VAR_2.win32_time.frequency = 1000;
    }
}
