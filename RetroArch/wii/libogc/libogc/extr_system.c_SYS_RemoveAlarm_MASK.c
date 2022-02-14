
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int syswd_t ;
typedef int s32 ;
struct TYPE_4__ {int alarm; scalar_t__ start_per; scalar_t__ periodic; scalar_t__ ticks; int * alarmhandler; } ;
typedef TYPE_1__ alarm_st ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

s32 FUNC_4(syswd_t VAR_0)
{
 alarm_st *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if(!VAR_1) return -1;

 VAR_1->alarmhandler = ((void*)0);
 VAR_1->ticks = 0;
 VAR_1->periodic = 0;
 VAR_1->start_per = 0;

 FUNC_3(&VAR_1->alarm);
 FUNC_0(VAR_1);
 FUNC_2();
 return 0;
}
