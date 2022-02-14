
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(enum clock_event_mode VAR_10, struct clock_event_device *VAR_11)
{

 FUNC_1(VAR_1, VAR_4 | VAR_0);
 (void) FUNC_0(VAR_6);

 VAR_9 = FUNC_2();
 switch (VAR_10) {
 case 131:

  VAR_8 = VAR_4;
  FUNC_1(VAR_3, VAR_7);
  break;
 case 132:



  VAR_8 = VAR_0;
  FUNC_1(VAR_5, VAR_9);
  break;
 case 129:
 case 128:
 case 130:
  VAR_8 = 0;
  break;
 }
 FUNC_1(VAR_2, VAR_8);
}
