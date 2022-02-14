
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;





 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void
FUNC_6(enum clock_event_mode VAR_6, struct clock_event_device *VAR_7)
{
 unsigned long VAR_8;

 switch (VAR_6) {
 case 131:

  FUNC_5(VAR_8);
  VAR_4 += VAR_5 * FUNC_1(FUNC_2(VAR_3));
  FUNC_3(VAR_0, (VAR_5 - 1) | VAR_1
    | VAR_2);
  FUNC_4(VAR_8);
  break;
 case 132:
  FUNC_0();

 case 129:
 case 128:

  FUNC_3(VAR_0, (VAR_5 - 1) | VAR_1);
  break;
 case 130:
  break;
 }
}
