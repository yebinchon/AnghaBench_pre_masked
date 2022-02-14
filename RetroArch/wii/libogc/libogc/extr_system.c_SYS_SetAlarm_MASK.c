
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
struct TYPE_5__ {int ticks; int alarm; TYPE_1__ object; scalar_t__ start_per; scalar_t__ periodic; int alarmhandler; void* cb_arg; } ;
typedef TYPE_2__ alarm_st ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (struct timespec const*) ;
 int FUNC_3 (int *,int ,int ,void*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;

s32 FUNC_5(syswd_t VAR_1,const struct timespec *VAR_2,alarmcallback VAR_3,void *VAR_4)
{
 alarm_st *VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 if(!VAR_5) return -1;

 VAR_5->cb_arg = VAR_4;
 VAR_5->alarmhandler = VAR_3;
 VAR_5->ticks = FUNC_2(VAR_2);

 VAR_5->periodic = 0;
 VAR_5->start_per = 0;

 FUNC_3(&VAR_5->alarm,VAR_0,VAR_5->object.id,(void*)VAR_1);
 FUNC_4(&VAR_5->alarm,VAR_5->ticks);
 FUNC_1();
 return 0;
}
