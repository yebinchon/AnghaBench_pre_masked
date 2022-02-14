
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pcf50633_subdev_pdata {struct pcf50633* pcf; } ;
struct pcf50633 {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 struct pcf50633_subdev_pdata* FUNC_1 (int,int ) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,struct pcf50633_subdev_pdata*,int) ;
 struct platform_device* FUNC_4 (char const*,int) ;
 int FUNC_5 (struct platform_device*) ;

__attribute__((used)) static void
FUNC_6(struct pcf50633 *VAR_1, const char *VAR_2,
      struct platform_device **VAR_3)
{
 struct pcf50633_subdev_pdata *VAR_4;
 int VAR_5;

 *VAR_3 = FUNC_4(VAR_2, -1);
 if (!*VAR_3) {
  FUNC_0(VAR_1->dev, "Falied to allocate %s\n", VAR_2);
  return;
 }

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) {
  FUNC_0(VAR_1->dev, "Error allocating subdev pdata\n");
  FUNC_5(*VAR_3);
 }

 VAR_4->pcf = VAR_1;
 FUNC_3(*VAR_3, VAR_4, sizeof(*VAR_4));

 (*VAR_3)->dev.parent = VAR_1->dev;

 VAR_5 = FUNC_2(*VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_1->dev, "Failed to register %s: %d\n", VAR_2, VAR_5);
  FUNC_5(*VAR_3);
  *VAR_3 = ((void*)0);
 }
}
