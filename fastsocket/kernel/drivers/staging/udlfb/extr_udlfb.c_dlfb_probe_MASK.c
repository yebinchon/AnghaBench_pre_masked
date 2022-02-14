
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int u32 ;
struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_15__ {int length; scalar_t__ msb_right; scalar_t__ offset; } ;
struct TYPE_14__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_13__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_12__ {int xres; int yres; int bits_per_pixel; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; int vmode; int activate; int pixclock; } ;
struct TYPE_16__ {unsigned long smem_start; int accel; int line_length; int visual; int type; int id; int smem_len; } ;
struct fb_info {int flags; int * screen_base; int cmap; TYPE_11__ var; TYPE_4__ fix; int * fbops; struct dlfb_data* par; struct dlfb_data* pseudo_palette; } ;
struct dlfb_data {int screen_size; TYPE_5__* udev; struct fb_info* info; int line_length; void* backing_buffer; int edid; int * buf; int tx_urb; int * bufend; struct usb_interface* interface; int bulk_mutex; } ;
struct TYPE_17__ {int product; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int FUNC_1 (struct dlfb_data*) ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (struct dlfb_data*,int,int) ;
 int FUNC_3 (struct dlfb_data*,int ,int ,int,int,int,int,int) ;
 scalar_t__ FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_11__*) ;
 struct fb_info* FUNC_7 (int,int *) ;
 int FUNC_8 (struct fb_info*) ;
 int FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (struct dlfb_data*) ;
 int * FUNC_11 (int,int ) ;
 void* FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,...) ;
 scalar_t__ FUNC_16 (struct fb_info*) ;
 int FUNC_17 (int *,int) ;
 int * FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (TYPE_5__*,int ,int,int,int ,int ,char*,int,int ) ;
 int FUNC_22 (int ,TYPE_5__*,int ,int *,int ,int ,struct dlfb_data*) ;
 TYPE_5__* FUNC_23 (int ) ;
 int FUNC_24 (TYPE_5__*) ;
 int FUNC_25 (TYPE_5__*,int ) ;
 int FUNC_26 (struct usb_interface*,struct dlfb_data*) ;
 int FUNC_27 (TYPE_5__*,int) ;

__attribute__((used)) static int
FUNC_28(struct usb_interface *VAR_14, const struct usb_device_id *VAR_15)
{
 struct dlfb_data *VAR_16;
 struct fb_info *VAR_17;

 int VAR_18;
 char VAR_19[4];

 VAR_16 = FUNC_12(sizeof(*VAR_16), VAR_11);
 if (VAR_16 == ((void*)0)) {
  FUNC_15("cannot allocate dev_info structure.\n");
  return -VAR_1;
 }

 FUNC_14(&VAR_16->bulk_mutex);

 VAR_16->udev = FUNC_23(FUNC_9(VAR_14));
 VAR_16->interface = VAR_14;

 FUNC_15("DisplayLink device attached\n");


 FUNC_26(VAR_14, VAR_16);

 VAR_16->buf = FUNC_11(VAR_0, VAR_11);


 if (VAR_16->buf == ((void*)0)) {
  FUNC_15("unable to allocate memory for dlfb commands\n");
  goto out;
 }
 VAR_16->bufend = VAR_16->buf + VAR_0;

 VAR_16->tx_urb = FUNC_20(0, VAR_11);
 FUNC_22(VAR_16->tx_urb, VAR_16->udev,
     FUNC_27(VAR_16->udev, 1), VAR_16->buf, 0,
     VAR_12, VAR_16);

 VAR_18 =
     FUNC_21(VAR_16->udev, FUNC_25(VAR_16->udev, 0),
       (0x06), (0x80 | (0x02 << 5)), 0, 0, VAR_19, 4, 0);
 FUNC_15("ret control msg 0: %d %x%x%x%x\n", VAR_18, VAR_19[0], VAR_19[1],
        VAR_19[2], VAR_19[3]);

 FUNC_1(VAR_16);

 VAR_17 = FUNC_7(sizeof(u32) * 256, &VAR_16->udev->dev);

 if (!VAR_17) {
  FUNC_15("non posso allocare il framebuffer displaylink");
  goto out;
 }

 FUNC_6(VAR_16->edid, &VAR_17->var);

 FUNC_15("EDID XRES %d YRES %d\n", VAR_17->var.xres, VAR_17->var.yres);

 if (FUNC_2(VAR_16, VAR_17->var.xres, VAR_17->var.yres) != 0) {
  VAR_17->var.xres = 1280;
  VAR_17->var.yres = 1024;
  if (FUNC_2
      (VAR_16, VAR_17->var.xres, VAR_17->var.yres) != 0) {
   goto out;
  }
 }

 FUNC_15("found valid mode...%d\n", VAR_17->var.pixclock);

 VAR_17->pseudo_palette = VAR_17->par;
 VAR_17->par = VAR_16;

 VAR_16->info = VAR_17;

 VAR_17->flags =
     VAR_2 | VAR_6 | VAR_5 |
     VAR_3 | VAR_4;
 VAR_17->fbops = &VAR_13;
 VAR_17->screen_base = FUNC_18(VAR_16->screen_size);

 if (VAR_17->screen_base == ((void*)0)) {
  FUNC_15
      ("cannot allocate framebuffer virtual memory of %d bytes\n",
       VAR_16->screen_size);
  goto out0;
 }

 FUNC_15("screen base allocated !!!\n");

 VAR_16->backing_buffer = FUNC_12(VAR_16->screen_size, VAR_11);

 if (!VAR_16->backing_buffer)
  FUNC_15("non posso allocare il backing buffer\n");



 VAR_17->var.bits_per_pixel = 16;
 VAR_17->var.activate = VAR_7;
 VAR_17->var.vmode = VAR_10;

 VAR_17->var.red.offset = 11;
 VAR_17->var.red.length = 5;
 VAR_17->var.red.msb_right = 0;

 VAR_17->var.green.offset = 5;
 VAR_17->var.green.length = 6;
 VAR_17->var.green.msb_right = 0;

 VAR_17->var.blue.offset = 0;
 VAR_17->var.blue.length = 5;
 VAR_17->var.blue.msb_right = 0;



 VAR_17->fix.smem_start = (unsigned long)VAR_17->screen_base;
 VAR_17->fix.smem_len = FUNC_0(VAR_16->screen_size);
 if (FUNC_19(VAR_16->udev->product) > 15) {
  FUNC_13(VAR_17->fix.id, VAR_16->udev->product, 15);
 } else {
  FUNC_13(VAR_17->fix.id, VAR_16->udev->product,
         FUNC_19(VAR_16->udev->product));
 }
 VAR_17->fix.type = VAR_8;
 VAR_17->fix.visual = VAR_9;
 VAR_17->fix.accel = VAR_17->flags;
 VAR_17->fix.line_length = VAR_16->line_length;

 if (FUNC_4(&VAR_17->cmap, 256, 0) < 0)
  goto out1;

 FUNC_15("colormap allocated\n");
 if (FUNC_16(VAR_17) < 0)
  goto out2;

 FUNC_3(VAR_16, 0, 0, VAR_16->info->var.xres,
    VAR_16->info->var.yres, 0x30, 0xff, 0x30);

 return 0;

out2:
 FUNC_5(&VAR_17->cmap);
out1:
 FUNC_17(VAR_17->screen_base, VAR_16->screen_size);
out0:
 FUNC_8(VAR_17);
out:
 FUNC_26(VAR_14, ((void*)0));
 FUNC_24(VAR_16->udev);
 FUNC_10(VAR_16);
 return -VAR_1;

}
