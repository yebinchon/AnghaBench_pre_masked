
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void
FUNC_4(enum clock_event_mode VAR_11, struct clock_event_device *VAR_12)
{
 unsigned long VAR_13;
 u32 VAR_14;

 FUNC_1(VAR_13);
 if (VAR_11 == VAR_4) {



  FUNC_3(VAR_10 - 1, VAR_6);
  FUNC_3(VAR_10 - 1, VAR_8);




  VAR_14 = FUNC_2(VAR_3);
  FUNC_3(VAR_14 | VAR_1, VAR_3);




  VAR_14 = FUNC_2(VAR_9);
  FUNC_3(VAR_14 | VAR_5 | VAR_7, VAR_9);
 } else {



  VAR_14 = FUNC_2(VAR_9);
  FUNC_3(VAR_14 & ~VAR_5, VAR_9);




  VAR_14 = FUNC_2(VAR_3);
  FUNC_3(VAR_14 & ~VAR_1, VAR_3);




  FUNC_3(VAR_2, VAR_0);

 }
 FUNC_0(VAR_13);
}
