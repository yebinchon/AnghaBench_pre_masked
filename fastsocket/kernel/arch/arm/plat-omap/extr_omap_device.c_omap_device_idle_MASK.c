
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int id; int name; } ;
struct omap_device {scalar_t__ _state; TYPE_1__ pdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ,int ) ;
 struct omap_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct omap_device*,int ) ;

int FUNC_3(struct platform_device *VAR_4)
{
 int VAR_5;
 struct omap_device *VAR_6;

 VAR_6 = FUNC_1(VAR_4);

 if (VAR_6->_state != VAR_1) {
  FUNC_0(1, "omap_device: %s.%d: omap_device_idle() called from "
       "invalid state\n", VAR_6->pdev.name, VAR_6->pdev.id);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_6, VAR_3);

 VAR_6->_state = VAR_2;

 return VAR_5;
}
