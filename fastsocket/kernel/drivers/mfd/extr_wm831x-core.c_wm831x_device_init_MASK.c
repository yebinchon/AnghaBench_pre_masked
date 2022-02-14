
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct wm831x_pdata {int (* pre_init ) (struct wm831x*) ;int (* post_init ) (struct wm831x*) ;scalar_t__ backlight; } ;
struct wm831x {int locked; TYPE_1__* dev; int auxadc_lock; int key_lock; int io_lock; } ;
typedef enum wm831x_parent { ____Placeholder_wm831x_parent } wm831x_parent ;
struct TYPE_7__ {struct wm831x_pdata* platform_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*,int,...) ;
 int FUNC_4 (TYPE_1__*,struct wm831x*) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 (struct wm831x*) ;
 int FUNC_7 (TYPE_1__*,int,int ,int ,int *,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct wm831x*) ;
 int FUNC_11 (struct wm831x*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct wm831x*) ;
 int FUNC_13 (struct wm831x*,int) ;
 int FUNC_14 (struct wm831x*) ;
 int FUNC_15 (struct wm831x*,int ) ;
 int FUNC_16 (struct wm831x*,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct wm831x *VAR_11, unsigned long VAR_12, int VAR_13)
{
 struct wm831x_pdata *VAR_14 = VAR_11->dev->platform_data;
 int VAR_15;
 enum wm831x_parent VAR_16;
 int VAR_17;

 FUNC_9(&VAR_11->io_lock);
 FUNC_9(&VAR_11->key_lock);
 FUNC_9(&VAR_11->auxadc_lock);
 FUNC_4(VAR_11->dev, VAR_11);

 VAR_17 = FUNC_15(VAR_11, VAR_1);
 if (VAR_17 < 0) {
  FUNC_2(VAR_11->dev, "Failed to read parent ID: %d\n", VAR_17);
  goto err;
 }
 if (VAR_17 != 0x6204) {
  FUNC_2(VAR_11->dev, "Device is not a WM831x: ID %x\n", VAR_17);
  VAR_17 = -VAR_0;
  goto err;
 }

 VAR_17 = FUNC_15(VAR_11, VAR_5);
 if (VAR_17 < 0) {
  FUNC_2(VAR_11->dev, "Failed to read revision: %d\n", VAR_17);
  goto err;
 }
 VAR_15 = (VAR_17 & VAR_2) >> VAR_3;

 VAR_17 = FUNC_15(VAR_11, VAR_4);
 if (VAR_17 < 0) {
  FUNC_2(VAR_11->dev, "Failed to read device ID: %d\n", VAR_17);
  goto err;
 }

 switch (VAR_17) {
 case 0x8310:
  VAR_16 = 130;
  switch (VAR_15) {
  case 0:
   FUNC_3(VAR_11->dev, "WM8310 revision %c\n",
     'A' + VAR_15);
   break;
  }
  break;

 case 0x8311:
  VAR_16 = 129;
  switch (VAR_15) {
  case 0:
   FUNC_3(VAR_11->dev, "WM8311 revision %c\n",
     'A' + VAR_15);
   break;
  }
  break;

 case 0x8312:
  VAR_16 = 128;
  switch (VAR_15) {
  case 0:
   FUNC_3(VAR_11->dev, "WM8312 revision %c\n",
     'A' + VAR_15);
   break;
  }
  break;

 case 0:





  VAR_16 = VAR_12;
  switch (VAR_15) {
  case 0:
   FUNC_3(VAR_11->dev, "WM831%d ES revision %c\n",
     VAR_16, 'A' + VAR_15);
   break;
  }
  break;

 default:
  FUNC_2(VAR_11->dev, "Unknown WM831x device %04x\n", VAR_17);
  VAR_17 = -VAR_0;
  goto err;
 }




 if (VAR_16 != VAR_12)
  FUNC_5(VAR_11->dev, "Device was registered as a WM831%lu\n",
    VAR_12);


 VAR_17 = FUNC_15(VAR_11, VAR_6);
 if (VAR_17 < 0) {
  FUNC_2(VAR_11->dev, "Failed to read security key: %d\n", VAR_17);
  goto err;
 }
 if (VAR_17 != 0) {
  FUNC_5(VAR_11->dev, "Security key had non-zero value %x\n",
    VAR_17);
  FUNC_16(VAR_11, VAR_6, 0);
 }
 VAR_11->locked = 1;

 if (VAR_14 && VAR_14->pre_init) {
  VAR_17 = VAR_14->pre_init(VAR_11);
  if (VAR_17 != 0) {
   FUNC_2(VAR_11->dev, "pre_init() failed: %d\n", VAR_17);
   goto err;
  }
 }

 VAR_17 = FUNC_13(VAR_11, VAR_13);
 if (VAR_17 != 0)
  goto err;


 switch (VAR_16) {
 case 130:
  VAR_17 = FUNC_7(VAR_11->dev, -1,
          VAR_8, FUNC_0(VAR_8),
          ((void*)0), 0);
  break;

 case 129:
  VAR_17 = FUNC_7(VAR_11->dev, -1,
          VAR_9, FUNC_0(VAR_9),
          ((void*)0), 0);
  break;

 case 128:
  VAR_17 = FUNC_7(VAR_11->dev, -1,
          VAR_10, FUNC_0(VAR_10),
          ((void*)0), 0);
  break;

 default:

  FUNC_1();
 }

 if (VAR_17 != 0) {
  FUNC_2(VAR_11->dev, "Failed to add children\n");
  goto err_irq;
 }

 if (VAR_14 && VAR_14->backlight) {

  VAR_17 = FUNC_7(VAR_11->dev, -1, VAR_7,
          FUNC_0(VAR_7), ((void*)0), 0);
  if (VAR_17 < 0)
   FUNC_2(VAR_11->dev, "Failed to add backlight: %d\n",
    VAR_17);
 }

 FUNC_14(VAR_11);

 if (VAR_14 && VAR_14->post_init) {
  VAR_17 = VAR_14->post_init(VAR_11);
  if (VAR_17 != 0) {
   FUNC_2(VAR_11->dev, "post_init() failed: %d\n", VAR_17);
   goto err_irq;
  }
 }

 return 0;

err_irq:
 FUNC_12(VAR_11);
err:
 FUNC_8(VAR_11->dev);
 FUNC_6(VAR_11);
 return VAR_17;
}
