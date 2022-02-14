
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mx3fb_platform_data {char* name; int num_modes; struct fb_videomode* mode; } ;
struct mx3fb_info {scalar_t__ ipu_ch; int flip_cmpl; int blank; struct mx3fb_data* mx3fb; struct idmac_channel* idmac_channel; } ;
struct mx3fb_data {struct device* dev; struct fb_info* fbi; } ;
struct TYPE_3__ {scalar_t__ chan_id; } ;
struct idmac_channel {unsigned int eof_irq; TYPE_1__ dma_chan; struct mx3fb_data* client; } ;
struct fb_videomode {int dummy; } ;
struct TYPE_4__ {int yres_virtual; int yres; } ;
struct fb_info {int cmap; struct mx3fb_info* par; TYPE_2__ var; int modelist; } ;
struct device {struct mx3fb_platform_data* platform_data; } ;


 int FUNC_0 (struct fb_videomode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,struct fb_info*) ;
 int FUNC_2 (struct fb_info*,int) ;
 int VAR_7 ;
 int FUNC_3 (struct device*,char*,unsigned int) ;
 int FUNC_4 (struct device*,char*,char const*) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,struct fb_info*,char const*,struct fb_videomode const*,int,int *,int ) ;
 char const* VAR_8 ;
 int FUNC_8 (struct fb_videomode const*,int,int *) ;
 int FUNC_9 (struct fb_info*) ;
 int FUNC_10 (int *) ;
 struct fb_info* FUNC_11 (struct device*,int *) ;
 struct fb_videomode* VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct mx3fb_data*,int,int ) ;
 int FUNC_13 (struct fb_info*) ;
 int FUNC_14 (struct mx3fb_data*,int) ;
 int FUNC_15 (struct mx3fb_data*,scalar_t__,int,int ) ;
 int FUNC_16 (struct mx3fb_data*,int,int) ;

__attribute__((used)) static int FUNC_17(struct mx3fb_data *VAR_11, struct idmac_channel *VAR_12)
{
 struct device *VAR_13 = VAR_11->dev;
 struct mx3fb_platform_data *VAR_14 = VAR_13->platform_data;
 const char *VAR_15 = VAR_14->name;
 unsigned int VAR_16;
 struct fb_info *VAR_17;
 struct mx3fb_info *VAR_18;
 const struct fb_videomode *VAR_19;
 int VAR_20, VAR_21;

 VAR_12->client = VAR_11;
 VAR_16 = VAR_12->eof_irq;

 if (VAR_12->dma_chan.chan_id != VAR_6)
  return -VAR_2;

 VAR_17 = FUNC_11(VAR_13, &VAR_10);
 if (!VAR_17)
  return -VAR_3;

 if (!VAR_8)
  VAR_8 = VAR_15;

 if (!VAR_8) {
  VAR_20 = -VAR_2;
  goto emode;
 }

 if (VAR_14->mode && VAR_14->num_modes) {
  VAR_19 = VAR_14->mode;
  VAR_21 = VAR_14->num_modes;
 } else {
  VAR_19 = VAR_9;
  VAR_21 = FUNC_0(VAR_9);
 }

 if (!FUNC_7(&VAR_17->var, VAR_17, VAR_8, VAR_19,
     VAR_21, ((void*)0), VAR_7)) {
  VAR_20 = -VAR_1;
  goto emode;
 }

 FUNC_8(VAR_19, VAR_21, &VAR_17->modelist);


 VAR_17->var.yres_virtual = VAR_17->var.yres * 2;

 VAR_11->fbi = VAR_17;


 FUNC_12(VAR_11, 0x00100010L, VAR_0);


 FUNC_14(VAR_11, 255);
 FUNC_16(VAR_11, 1, 0xFF);
 FUNC_15(VAR_11, VAR_6, 0, 0);

 VAR_18 = VAR_17->par;
 VAR_18->idmac_channel = VAR_12;
 VAR_18->ipu_ch = VAR_12->dma_chan.chan_id;
 VAR_18->mx3fb = VAR_11;
 VAR_18->blank = VAR_4;

 FUNC_10(&VAR_18->flip_cmpl);
 FUNC_5(VAR_12->eof_irq);
 FUNC_3(VAR_11->dev, "disabling irq %d\n", VAR_12->eof_irq);
 VAR_20 = FUNC_2(VAR_17, 0);
 if (VAR_20 < 0)
  goto esetpar;

 FUNC_1(VAR_5, VAR_17);

 FUNC_4(VAR_13, "registered, using mode %s\n", VAR_8);

 VAR_20 = FUNC_13(VAR_17);
 if (VAR_20 < 0)
  goto erfb;

 return 0;

erfb:
esetpar:
emode:
 FUNC_6(&VAR_17->cmap);
 FUNC_9(VAR_17);

 return VAR_20;
}
