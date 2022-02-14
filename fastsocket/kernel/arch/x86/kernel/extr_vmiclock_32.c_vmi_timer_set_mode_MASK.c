
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int mode; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;
typedef int cycle_t ;
struct TYPE_2__ {int (* cancel_alarm ) (int ) ;int (* set_alarm ) (int ,int ,int ) ;int (* get_cycle_counter ) (int ) ;int (* get_cycle_frequency ) () ;} ;


 int FUNC_0 (int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_9(enum clock_event_mode VAR_4,
          struct clock_event_device *VAR_5)
{
 cycle_t VAR_6, VAR_7;
 FUNC_0(!FUNC_2());

 switch (VAR_4) {
 case 132:
 case 130:
  break;
 case 131:
  VAR_7 = VAR_3.get_cycle_frequency();
  (void)FUNC_1(VAR_7, VAR_0);
  VAR_6 = VAR_3.get_cycle_counter(FUNC_8(VAR_2));
  VAR_3.set_alarm(VAR_2, VAR_6, VAR_7);
  break;
 case 128:
 case 129:
  switch (VAR_5->mode) {
  case 132:
   VAR_3.cancel_alarm(VAR_1);
   break;
  case 131:
   VAR_3.cancel_alarm(VAR_2);
   break;
  default:
   break;
  }
  break;
 default:
  break;
 }
}
