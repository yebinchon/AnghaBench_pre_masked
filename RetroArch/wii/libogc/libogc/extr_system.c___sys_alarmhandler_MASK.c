
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ syswd_t ;
struct TYPE_2__ {scalar_t__ periodic; int alarm; int cb_arg; int (* alarmhandler ) (scalar_t__,int ) ;} ;
typedef TYPE_1__ alarm_st ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(void *VAR_3)
{
 alarm_st *VAR_4;
 syswd_t VAR_5 = (syswd_t)VAR_3;

 if(VAR_5==VAR_1 || FUNC_1(VAR_5)!=VAR_0) return;

 FUNC_3();
 VAR_4 = (alarm_st*)FUNC_2(&VAR_2,FUNC_0(VAR_5));
 if(VAR_4) {
  if(VAR_4->alarmhandler) VAR_4->alarmhandler(VAR_5,VAR_4->cb_arg);
  if(VAR_4->periodic) FUNC_5(&VAR_4->alarm,VAR_4->periodic);
 }
 FUNC_4();
}
