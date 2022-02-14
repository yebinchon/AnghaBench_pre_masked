
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int end; int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mx3fb_data {int backlight_level; int reg_base; struct device* dev; int lock; } ;
struct dma_chan_request {int id; struct mx3fb_data* mx3fb; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dma_chan*) ;
 struct dma_chan* FUNC_4 (int ,int ,struct dma_chan_request*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct mx3fb_data*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mx3fb_data*) ;
 struct mx3fb_data* FUNC_11 (int,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct mx3fb_data*) ;
 int FUNC_14 (char*,int ,int ,int ) ;
 int FUNC_15 (struct resource*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 int VAR_11;
 struct resource *VAR_12;
 struct mx3fb_data *VAR_13;
 dma_cap_mask_t VAR_14;
 struct dma_chan *VAR_15;
 struct dma_chan_request VAR_16;





 VAR_12 = FUNC_12(VAR_9, VAR_7, 0);
 if (!VAR_12)
  return -VAR_3;

 VAR_13 = FUNC_11(sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return -VAR_4;

 FUNC_16(&VAR_13->lock);

 VAR_13->reg_base = FUNC_8(VAR_12->start, FUNC_15(VAR_12));
 if (!VAR_13->reg_base) {
  VAR_11 = -VAR_4;
  goto eremap;
 }

 FUNC_14("Remapped %x to %x at %p\n", VAR_12->start, VAR_12->end,
   VAR_13->reg_base);


 FUNC_5();

 VAR_13->dev = VAR_10;
 FUNC_13(VAR_9, VAR_13);

 VAR_16.mx3fb = VAR_13;

 FUNC_2(VAR_14);
 FUNC_1(VAR_1, VAR_14);
 FUNC_1(VAR_0, VAR_14);
 VAR_16.id = VAR_6;
 VAR_15 = FUNC_4(VAR_14, VAR_8, &VAR_16);
 if (!VAR_15) {
  VAR_11 = -VAR_2;
  goto ersdc0;
 }

 VAR_11 = FUNC_7(VAR_13, FUNC_17(VAR_15));
 if (VAR_11 < 0)
  goto eisdc0;

 VAR_13->backlight_level = 255;

 return 0;

eisdc0:
 FUNC_3(VAR_15);
ersdc0:
 FUNC_6();
 FUNC_9(VAR_13->reg_base);
eremap:
 FUNC_10(VAR_13);
 FUNC_0(VAR_10, "mx3fb: failed to register fb\n");
 return VAR_11;
}
