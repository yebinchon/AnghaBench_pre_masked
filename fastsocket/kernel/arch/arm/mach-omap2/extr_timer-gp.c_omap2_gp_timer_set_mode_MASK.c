
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;







 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(enum clock_event_mode VAR_2,
        struct clock_event_device *VAR_3)
{
 u32 VAR_4;

 FUNC_4(VAR_1);

 switch (VAR_2) {
 case 131:
  VAR_4 = FUNC_0(FUNC_2(VAR_1)) / VAR_0;
  VAR_4 -= 1;
  if (FUNC_1())
   VAR_4 = 0xff;
  FUNC_3(VAR_1, 1, 0xffffffff - VAR_4);
  break;
 case 132:
  break;
 case 128:
 case 129:
 case 130:
  break;
 }
}
