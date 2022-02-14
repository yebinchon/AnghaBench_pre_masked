
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 struct clock_event_device VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct clock_event_device *VAR_8 = &VAR_4;
 u16 VAR_9;


 VAR_9 = FUNC_1(FUNC_0(VAR_1));
 FUNC_2(VAR_9 | VAR_2, FUNC_0(VAR_1));

 VAR_5 += VAR_3;
 VAR_8->event_handler(VAR_8);
 return VAR_0;
}
