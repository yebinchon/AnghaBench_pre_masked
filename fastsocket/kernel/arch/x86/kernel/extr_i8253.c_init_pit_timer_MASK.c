
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int const mode; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(enum clock_event_mode VAR_4,
      struct clock_event_device *VAR_5)
{
 FUNC_1(&VAR_3);

 switch (VAR_4) {
 case 131:

  FUNC_0(0x34, VAR_2);
  FUNC_0(VAR_0 & 0xff , VAR_1);
  FUNC_0(VAR_0 >> 8 , VAR_1);
  break;

 case 129:
 case 128:
  if (VAR_5->mode == 131 ||
      VAR_5->mode == 132) {
   FUNC_0(0x30, VAR_2);
   FUNC_0(0, VAR_1);
   FUNC_0(0, VAR_1);
  }
  break;

 case 132:

  FUNC_0(0x38, VAR_2);
  break;

 case 130:

  break;
 }
 FUNC_2(&VAR_3);
}
