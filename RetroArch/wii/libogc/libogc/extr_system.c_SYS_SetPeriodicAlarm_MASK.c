
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ syswd_t ;
struct timespec {int dummy; } ;
typedef int s32 ;
typedef int alarmcallback ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {void* start_per; int alarm; TYPE_1__ object; scalar_t__ ticks; void* cb_arg; int alarmhandler; void* periodic; } ;
typedef TYPE_2__ alarm_st ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 void* FUNC_2 (struct timespec const*) ;
 int FUNC_3 (int *,int ,int ,void*) ;
 int FUNC_4 (int *,void*) ;
 int VAR_0 ;

s32 FUNC_5(syswd_t VAR_1,const struct timespec *VAR_2,const struct timespec *VAR_3,alarmcallback VAR_4,void *VAR_5)
{
 alarm_st *VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 if(!VAR_6) return -1;

 VAR_6->start_per = FUNC_2(VAR_2);
 VAR_6->periodic = FUNC_2(VAR_3);
 VAR_6->alarmhandler = VAR_4;
 VAR_6->cb_arg = VAR_5;

 VAR_6->ticks = 0;

 FUNC_3(&VAR_6->alarm,VAR_0,VAR_6->object.id,(void*)VAR_1);
 FUNC_4(&VAR_6->alarm,VAR_6->start_per);
 FUNC_1();
 return 0;
}
