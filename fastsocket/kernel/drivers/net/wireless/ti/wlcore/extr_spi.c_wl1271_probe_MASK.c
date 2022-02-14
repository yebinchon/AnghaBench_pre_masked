
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wlcore_platdev_data {TYPE_2__* core; TYPE_7__* dev; int * if_ops; int pdata; } ;
struct wl12xx_spi_glue {TYPE_2__* core; TYPE_7__* dev; int * if_ops; int pdata; } ;
struct TYPE_10__ {int platform_data; } ;
struct spi_device {int bits_per_word; int irq; TYPE_7__ dev; } ;
struct resource {char* name; int flags; int start; } ;
typedef int res ;
struct TYPE_8__ {TYPE_7__* parent; } ;
struct TYPE_9__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_7__*,char*) ;
 int FUNC_2 (struct wlcore_platdev_data*) ;
 struct wlcore_platdev_data* FUNC_3 (int,int ) ;
 int FUNC_4 (struct resource*,int,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,struct wlcore_platdev_data*,int) ;
 int FUNC_7 (TYPE_2__*,struct resource*,int ) ;
 TYPE_2__* FUNC_8 (char*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_10 (struct spi_device*,struct wlcore_platdev_data*) ;
 int FUNC_11 (struct spi_device*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_6)
{
 struct wl12xx_spi_glue *VAR_7;
 struct wlcore_platdev_data *VAR_8;
 struct resource VAR_9[1];
 int VAR_10 = -VAR_1;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  goto out;

 VAR_8->pdata = VAR_6->dev.platform_data;
 if (!VAR_8->pdata) {
  FUNC_1(&VAR_6->dev, "no platform data\n");
  VAR_10 = -VAR_0;
  goto out_free_pdev_data;
 }

 VAR_8->if_ops = &VAR_5;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  FUNC_1(&VAR_6->dev, "can't allocate glue\n");
  goto out_free_pdev_data;
 }

 VAR_7->dev = &VAR_6->dev;

 FUNC_10(VAR_6, VAR_7);



 VAR_6->bits_per_word = 32;

 VAR_10 = FUNC_11(VAR_6);
 if (VAR_10 < 0) {
  FUNC_1(VAR_7->dev, "spi_setup failed\n");
  goto out_free_glue;
 }

 VAR_7->core = FUNC_8("wl12xx", VAR_4);
 if (!VAR_7->core) {
  FUNC_1(VAR_7->dev, "can't allocate platform_device\n");
  VAR_10 = -VAR_1;
  goto out_free_glue;
 }

 VAR_7->core->dev.parent = &VAR_6->dev;

 FUNC_4(VAR_9, 0x00, sizeof(VAR_9));

 VAR_9[0].start = VAR_6->irq;
 VAR_9[0].flags = VAR_3;
 VAR_9[0].name = "irq";

 VAR_10 = FUNC_7(VAR_7->core, VAR_9, FUNC_0(VAR_9));
 if (VAR_10) {
  FUNC_1(VAR_7->dev, "can't add resources\n");
  goto out_dev_put;
 }

 VAR_10 = FUNC_6(VAR_7->core, VAR_8,
           sizeof(*VAR_8));
 if (VAR_10) {
  FUNC_1(VAR_7->dev, "can't add platform data\n");
  goto out_dev_put;
 }

 VAR_10 = FUNC_5(VAR_7->core);
 if (VAR_10) {
  FUNC_1(VAR_7->dev, "can't register platform device\n");
  goto out_dev_put;
 }

 return 0;

out_dev_put:
 FUNC_9(VAR_7->core);

out_free_glue:
 FUNC_2(VAR_7);

out_free_pdev_data:
 FUNC_2(VAR_8);

out:
 return VAR_10;
}
