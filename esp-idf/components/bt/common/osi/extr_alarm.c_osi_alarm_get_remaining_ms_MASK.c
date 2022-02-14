
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int period_ms_t ;
struct TYPE_3__ {int deadline_us; } ;
typedef TYPE_1__ osi_alarm_t ;
typedef int int64_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int **) ;

period_ms_t FUNC_4(const osi_alarm_t *VAR_2)
{
    FUNC_0(VAR_1 != ((void*)0));
    int64_t VAR_3 = 0;

    FUNC_2(&VAR_1, VAR_0);
    VAR_3 = VAR_2->deadline_us - FUNC_1();
    FUNC_3(&VAR_1);

    return (VAR_3 > 0) ? (period_ms_t)(VAR_3 / 1000) : 0;
}
