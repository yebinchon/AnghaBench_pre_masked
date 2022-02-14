
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(enum clock_event_mode VAR_4,
        struct clock_event_device *VAR_5)
{
 u32 VAR_6;

 FUNC_2(&VAR_3);

 VAR_6 = FUNC_0(VAR_1);
 VAR_6 &= ~(VAR_0 | VAR_2);

 switch (VAR_4) {
 case 128:
  VAR_6 |= VAR_0 | VAR_2;
  break;
 case 129:
  VAR_6 |= VAR_0;
  break;
 default:
  break;
 }

 FUNC_1(VAR_1, VAR_6);

 FUNC_3(&VAR_3);
}
