
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;


 int FUNC_0 () ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(enum clock_event_mode VAR_2,
        struct clock_event_device *VAR_3)
{
 unsigned long VAR_4;

 switch (VAR_2) {
 case 131:

  FUNC_2(VAR_4);
  FUNC_4(FUNC_3(VAR_1 + VAR_0) | 1, VAR_1 + VAR_0);
  FUNC_1(VAR_4);
  break;
 case 132:
  FUNC_0();

 case 129:
 case 128:

  FUNC_2(VAR_4);
  FUNC_4(FUNC_3(VAR_1 + VAR_0) & ~1, VAR_1 + VAR_0);
  FUNC_1(VAR_4);
  break;
 case 130:
  break;
 }
}
