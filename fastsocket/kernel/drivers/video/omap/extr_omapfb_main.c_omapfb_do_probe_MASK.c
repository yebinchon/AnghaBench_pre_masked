
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int * platform_data; } ;
struct platform_device {scalar_t__ num_resources; TYPE_5__ dev; } ;
struct TYPE_8__ {int region_cnt; TYPE_2__* region; } ;
struct omapfb_device {TYPE_3__ mem_desc; struct lcd_panel* panel; int state; TYPE_5__* dev; int * fb_info; TYPE_1__* ctrl; int * ext_if; int * int_ctrl; int rqueue_mutex; } ;
struct lcd_panel {int (* init ) (struct lcd_panel*,struct omapfb_device*) ;unsigned long x_res; unsigned long y_res; int (* enable ) (struct lcd_panel*) ;int pixel_clock; unsigned long hfp; unsigned long hbp; unsigned long hsw; unsigned long vfp; unsigned long vbp; unsigned long vsw; int name; } ;
struct TYPE_9__ {int fb_mmap; } ;
struct TYPE_7__ {scalar_t__ size; } ;
struct TYPE_6__ {int (* enable_plane ) (int ,int) ;int * mmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct omapfb_device*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct omapfb_device*) ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_4 (TYPE_5__*,char*,...) ;
 struct omapfb_device* FUNC_5 (int,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ,int ,int) ;
 struct omapfb_device* VAR_16 ;
 scalar_t__ FUNC_8 (struct omapfb_device*) ;
 int FUNC_9 (struct omapfb_device*,int) ;
 int VAR_17 ;
 TYPE_4__ VAR_18 ;
 int FUNC_10 (struct omapfb_device*) ;
 int FUNC_11 (struct omapfb_device*,int ) ;
 int FUNC_12 (struct omapfb_device*) ;
 int FUNC_13 (struct platform_device*,struct omapfb_device*) ;
 int FUNC_14 (char*,unsigned long,...) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct lcd_panel*,struct omapfb_device*) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (struct lcd_panel*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_19,
    struct lcd_panel *VAR_20)
{
 struct omapfb_device *VAR_21 = ((void*)0);
 int VAR_22;
 unsigned long VAR_23, VAR_24, VAR_25;
 unsigned long VAR_26;
 int VAR_27;
 int VAR_28 = 0;

 VAR_22 = 0;

 if (VAR_19->num_resources != 0) {
  FUNC_4(&VAR_19->dev, "probed for an unknown device\n");
  VAR_28 = -VAR_0;
  goto cleanup;
 }

 if (VAR_19->dev.platform_data == ((void*)0)) {
  FUNC_4(&VAR_19->dev, "missing platform data\n");
  VAR_28 = -VAR_1;
  goto cleanup;
 }

 VAR_21 = FUNC_5(sizeof(struct omapfb_device), VAR_3);
 if (VAR_21 == ((void*)0)) {
  FUNC_4(&VAR_19->dev,
   "unable to allocate memory for device info\n");
  VAR_28 = -VAR_2;
  goto cleanup;
 }
 VAR_22++;

 VAR_21->dev = &VAR_19->dev;
 VAR_21->panel = VAR_20;
 FUNC_13(VAR_19, VAR_21);

 FUNC_6(&VAR_21->rqueue_mutex);







 VAR_21->int_ctrl = &VAR_15;




 if (FUNC_8(VAR_21) < 0) {
  FUNC_4(VAR_21->dev,
   "LCD controller not found, board not supported\n");
  VAR_28 = -VAR_0;
  goto cleanup;
 }

 VAR_28 = VAR_21->panel->init(VAR_21->panel, VAR_21);
 if (VAR_28)
  goto cleanup;

 FUNC_14("omapfb: configured for panel %s\n", VAR_21->panel->name);

 VAR_9 = VAR_9 ? VAR_9 : VAR_21->panel->x_res;
 VAR_10 = VAR_10 ? VAR_10 : VAR_21->panel->y_res;

 VAR_22++;

 VAR_28 = FUNC_3(VAR_21);
 if (VAR_28)
  goto cleanup;
 if (VAR_21->ctrl->mmap != ((void*)0))
  VAR_18.fb_mmap = VAR_17;
 VAR_22++;

 FUNC_0(VAR_21);

 VAR_28 = FUNC_12(VAR_21);
 if (VAR_28)
  goto cleanup;
 VAR_22++;







 VAR_28 = FUNC_2(VAR_21->fb_info[0]);
 if (VAR_28) {
  FUNC_4(VAR_21->dev, "mode setting failed\n");
  goto cleanup;
 }


 VAR_28 = VAR_21->ctrl->enable_plane(VAR_7, 1);
 if (VAR_28)
  goto cleanup;

 FUNC_11(VAR_21, VAR_11 ?
       VAR_6 : VAR_5);
 VAR_22++;

 VAR_28 = VAR_21->panel->enable(VAR_21->panel);
 if (VAR_28)
  goto cleanup;
 VAR_22++;

 VAR_28 = FUNC_10(VAR_21);
 if (VAR_28)
  goto cleanup;
 VAR_22++;

 VAR_26 = 0;
 for (VAR_27 = 0; VAR_27 < VAR_21->mem_desc.region_cnt; VAR_27++) {
  VAR_28 = FUNC_15(VAR_21->fb_info[VAR_27]);
  if (VAR_28 != 0) {
   FUNC_4(VAR_21->dev,
    "registering framebuffer %d failed\n", VAR_27);
   goto cleanup;
  }
  VAR_26 += VAR_21->mem_desc.region[VAR_27].size;
 }

 VAR_21->state = VAR_4;

 VAR_20 = VAR_21->panel;
 VAR_23 = VAR_20->pixel_clock * 1000;
 VAR_24 = VAR_23 * 10 / (VAR_20->hfp + VAR_20->x_res + VAR_20->hbp + VAR_20->hsw);
 VAR_25 = VAR_24 / (VAR_20->vfp + VAR_20->y_res + VAR_20->vbp + VAR_20->vsw);

 VAR_16 = VAR_21;

 FUNC_14("omapfb: Framebuffer initialized. Total vram %lu planes %d\n",
   VAR_26, VAR_21->mem_desc.region_cnt);
 FUNC_14("omapfb: Pixclock %lu kHz hfreq %lu.%lu kHz "
   "vfreq %lu.%lu Hz\n",
   VAR_23 / 1000, VAR_24 / 10000, VAR_24 % 10, VAR_25 / 10, VAR_25 % 10);

 return 0;

cleanup:
 FUNC_9(VAR_21, VAR_22);

 return VAR_28;
}
