
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_s {int period; int opts; } ;
struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;







 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct timer_s*) ;
 struct timer_s* VAR_7 ;

__attribute__((used)) static void FUNC_1(enum clock_event_mode VAR_8,
        struct clock_event_device *VAR_9)
{
 struct timer_s *VAR_10 = &VAR_7[VAR_1];

 switch (VAR_8) {
 case 131:
  VAR_10->period = VAR_6 / (VAR_0);
  VAR_10->opts &= ~VAR_5;
  VAR_10->opts |= VAR_4;
  FUNC_0(VAR_10);
  break;
 case 132:
  VAR_10->opts &= ~VAR_5;
  VAR_10->opts |= VAR_3;
  break;
 case 128:
 case 129:
  VAR_10->opts &= ~VAR_5;
  VAR_10->opts |= VAR_2;
  break;
 case 130:
  break;
 }
}
