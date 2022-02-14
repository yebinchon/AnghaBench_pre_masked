
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_timespec_t ;
typedef TYPE_1__* alarm_t ;
struct TYPE_4__ {struct TYPE_4__* al_prev; struct TYPE_4__* al_next; int al_time; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(
 alarm_t VAR_1)
{
 alarm_t VAR_2, VAR_3;
 mach_timespec_t *VAR_4;
 mach_timespec_t *VAR_5;





 VAR_4 = &VAR_1->al_time;
 VAR_2 = (alarm_t)&VAR_0;
 while ((VAR_3 = VAR_2->al_next) != ((void*)0)) {
  VAR_5 = &VAR_3->al_time;
  if (FUNC_0(VAR_5, VAR_4) > 0)
   break;
  VAR_2 = VAR_3;
 }
 VAR_2->al_next = VAR_1;
 VAR_1->al_next = VAR_3;
 VAR_1->al_prev = VAR_2;
 if (VAR_3)
  VAR_3->al_prev = VAR_1;





 if (VAR_0 == VAR_1)
  FUNC_1(VAR_4);
}
