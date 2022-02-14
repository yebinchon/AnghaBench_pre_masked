
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;


 int FUNC_0 () ;





 int FUNC_1 (int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(enum clock_event_mode VAR_2,
    struct clock_event_device *VAR_3)
{
 int VAR_4 = FUNC_3();

 switch (VAR_2) {
 case 131:
  FUNC_2(1);
  break;

 case 132:
  if (FUNC_1(VAR_0, VAR_4, ((void*)0)))
   FUNC_0();
  break;

 case 128:
 case 129:
  if (FUNC_1(VAR_1, VAR_4, ((void*)0)) ||
      FUNC_1(VAR_0, VAR_4, ((void*)0)))
   FUNC_0();
  break;
 case 130:
  break;
 }
}
