
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct platform_device {int dummy; } ;
struct omap_device {scalar_t__ dev_wakeup_lat; scalar_t__ _state; scalar_t__ _dev_wakeup_lat_limit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct omap_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct omap_device*,int ) ;
 int FUNC_2 (struct omap_device*,int ) ;

int FUNC_3(struct platform_device *VAR_3,
        u32 VAR_4)
{
 int VAR_5 = -VAR_0;
 struct omap_device *VAR_6;

 VAR_6 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_6->dev_wakeup_lat)
  return 0;

 VAR_6->_dev_wakeup_lat_limit = VAR_4;

 if (VAR_6->_state != VAR_1)
  return 0;
 else if (VAR_4 > VAR_6->dev_wakeup_lat)
  VAR_5 = FUNC_2(VAR_6, VAR_2);
 else if (VAR_4 < VAR_6->dev_wakeup_lat)
  VAR_5 = FUNC_1(VAR_6, VAR_2);

 return VAR_5;
}
