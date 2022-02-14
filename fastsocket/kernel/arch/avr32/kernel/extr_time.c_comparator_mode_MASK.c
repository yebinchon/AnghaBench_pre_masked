
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int name; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;


 int FUNC_0 () ;




 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(enum clock_event_mode VAR_1,
  struct clock_event_device *VAR_2)
{
 switch (VAR_1) {
 case 131:
  FUNC_3("%s: start\n", VAR_2->name);

 case 130:
  FUNC_1();
  break;
 case 128:
 case 129:
  FUNC_4(VAR_0, 0);
  FUNC_3("%s: stop\n", VAR_2->name);
  FUNC_2();
  break;
 default:
  FUNC_0();
 }
}
