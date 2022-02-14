
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_s {unsigned long period; } ;
struct clock_event_device {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct timer_s*) ;
 struct timer_s* VAR_1 ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_2,
      struct clock_event_device *VAR_3)
{
 struct timer_s *VAR_4 = &VAR_1[VAR_0];

 VAR_4->period = VAR_2;
 FUNC_0(VAR_4);
 return 0;
}
