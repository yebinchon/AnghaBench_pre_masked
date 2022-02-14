
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;







 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(enum clock_event_mode VAR_5,
    struct clock_event_device *VAR_6)
{
 switch (VAR_5) {
 case 131: {
  unsigned long VAR_7 = ((FUNC_5() / (VAR_0 * VAR_2)) - 1);
  FUNC_1(VAR_3);
  FUNC_0();
  FUNC_4(VAR_2 - 1);
  FUNC_3(VAR_7);
  FUNC_2(VAR_7);
  FUNC_0();
  FUNC_1(VAR_3 | VAR_4 | VAR_1);
  break;
 }
 case 132:
  FUNC_1(VAR_3);
  FUNC_0();
  FUNC_4(VAR_2 - 1);
  FUNC_3(0);
  FUNC_2(0);
  break;
 case 128:
 case 129:
  FUNC_1(0);
  FUNC_0();
  break;
 case 130:
  break;
 }
}
