
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int features; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 unsigned int VAR_4 ;
 int FUNC_0 (int ,int,int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(enum clock_event_mode VAR_6,
         struct clock_event_device *VAR_7)
{
 unsigned long VAR_8;
 unsigned int VAR_9;


 if (VAR_7->features & VAR_3)
  return;

 FUNC_4(VAR_8);

 switch (VAR_6) {
 case 131:
 case 132:
  FUNC_0(VAR_5,
      VAR_6 != 131, 1);
  break;
 case 128:
 case 129:
  VAR_9 = FUNC_1(VAR_0);
  VAR_9 |= (VAR_1 | VAR_4);
  FUNC_2(VAR_0, VAR_9);
  FUNC_2(VAR_2, 0xffffffff);
  break;
 case 130:

  break;
 }

 FUNC_3(VAR_8);
}
