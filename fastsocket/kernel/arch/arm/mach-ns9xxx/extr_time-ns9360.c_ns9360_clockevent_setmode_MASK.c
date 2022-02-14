
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(enum clock_event_mode VAR_8,
  struct clock_event_device *VAR_9)
{
 u32 VAR_10 = FUNC_3(FUNC_1(VAR_6));

 switch (VAR_8) {
 case 131:
  FUNC_4(VAR_7, FUNC_2(VAR_6));
  FUNC_0(VAR_10, VAR_4, VAR_3, VAR_1);
  FUNC_0(VAR_10, VAR_4, VAR_2, VAR_1);
  FUNC_0(VAR_10, VAR_4, VAR_5, VAR_1);
  break;

 case 132:
  FUNC_0(VAR_10, VAR_4, VAR_3, VAR_0);
  FUNC_0(VAR_10, VAR_4, VAR_2, VAR_1);



 case 128:
 case 129:
 case 130:
 default:
  FUNC_0(VAR_10, VAR_4, VAR_5, VAR_0);
  break;
 }

 FUNC_4(VAR_10, FUNC_1(VAR_6));
}
