
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_7, void *VAR_8)
{
 struct clock_event_device *VAR_9 = VAR_8;


 if (FUNC_0(VAR_6 + VAR_3) &
   VAR_0) {
  FUNC_2(VAR_0,
    VAR_6 + VAR_3);
  VAR_9->event_handler(VAR_9);
 }


 else if (FUNC_0(VAR_6 + VAR_4)
   & VAR_0) {
  FUNC_2(VAR_0,
    VAR_6 + VAR_4);
  FUNC_2(VAR_1,
    VAR_6 + VAR_4);
  FUNC_1(0xFFFF, VAR_6 + VAR_2);
 }

 return VAR_5;
}
