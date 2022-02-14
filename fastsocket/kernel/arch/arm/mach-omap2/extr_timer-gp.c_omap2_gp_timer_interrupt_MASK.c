
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dm_timer {int dummy; } ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct clock_event_device VAR_2 ;
 int FUNC_0 (struct omap_dm_timer*,int ) ;
 int FUNC_1 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct omap_dm_timer *VAR_5 = (struct omap_dm_timer *)VAR_4;
 struct clock_event_device *VAR_6 = &VAR_2;

 FUNC_0(VAR_5, VAR_1);

 VAR_6->event_handler(VAR_6);
 return VAR_0;
}
