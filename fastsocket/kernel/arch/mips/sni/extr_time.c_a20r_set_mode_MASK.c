
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(enum clock_event_mode VAR_3,
                          struct clock_event_device *VAR_4)
{
 switch (VAR_3) {
 case 131:
  *(volatile u8 *)(VAR_0 + 12) = 0x34;
  FUNC_0();
  *(volatile u8 *)(VAR_0 + 0) = VAR_1;
  FUNC_0();
  *(volatile u8 *)(VAR_0 + 0) = VAR_1 >> 8;
  FUNC_0();

  *(volatile u8 *)(VAR_0 + 12) = 0xb4;
  FUNC_0();
  *(volatile u8 *)(VAR_0 + 8) = VAR_2;
  FUNC_0();
  *(volatile u8 *)(VAR_0 + 8) = VAR_2 >> 8;
  FUNC_0();

                break;
        case 132:
        case 128:
        case 129:
                break;
        case 130:
                break;
        }
}
