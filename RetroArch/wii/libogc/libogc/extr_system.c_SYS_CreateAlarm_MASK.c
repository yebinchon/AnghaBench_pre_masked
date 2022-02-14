
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int syswd_t ;
typedef int s32 ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ object; scalar_t__ periodic; scalar_t__ start_per; scalar_t__ ticks; int * alarmhandler; } ;
typedef TYPE_2__ alarm_st ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 () ;

s32 FUNC_4(syswd_t *VAR_1)
{
 alarm_st *VAR_2;

 VAR_2 = FUNC_2();
 if(!VAR_2) return -1;

 VAR_2->alarmhandler = ((void*)0);
 VAR_2->ticks = 0;
 VAR_2->start_per = 0;
 VAR_2->periodic = 0;

 *VAR_1 = (FUNC_1(VAR_0)|FUNC_0(VAR_2->object.id));
 FUNC_3();
 return 0;
}
