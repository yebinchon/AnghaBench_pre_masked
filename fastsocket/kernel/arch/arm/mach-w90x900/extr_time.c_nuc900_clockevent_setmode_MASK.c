
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;







 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 unsigned int VAR_7 ;

__attribute__((used)) static void FUNC_2(enum clock_event_mode VAR_8,
  struct clock_event_device *VAR_9)
{
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_5);
 VAR_10 &= ~(0x03 << 27);

 switch (VAR_8) {
 case 131:
  FUNC_1(VAR_7, VAR_6);
  VAR_10 |= (VAR_3 | VAR_0 | VAR_1 | VAR_4);
  break;

 case 132:
  VAR_10 |= (VAR_2 | VAR_0 | VAR_1 | VAR_4);
  break;

 case 128:
 case 129:
 case 130:
  break;
 }

 FUNC_1(VAR_10, VAR_5);
}
