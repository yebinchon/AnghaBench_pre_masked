
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct clock_event_device VAR_4 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_5, void *VAR_6)
{
 struct clock_event_device *VAR_7 = &VAR_4;

 FUNC_1(VAR_2,
  VAR_3 + VAR_1);
 VAR_7->event_handler(VAR_7);
 return VAR_0;
}
