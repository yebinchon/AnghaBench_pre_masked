
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct omapfb_platform_data {struct hwa742_platform_data* ctrl_platform_data; } ;
struct omapfb_mem_desc {int dummy; } ;
struct omapfb_device {TYPE_7__* dev; TYPE_1__* panel; TYPE_4__* int_ctrl; TYPE_3__* ext_if; } ;
struct hwa742_platform_data {scalar_t__ te_connected; } ;
struct TYPE_17__ {int entry; } ;
struct TYPE_16__ {struct omapfb_platform_data* platform_data; } ;
struct TYPE_14__ {scalar_t__ data; int function; } ;
struct TYPE_11__ {scalar_t__ format; int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_15__ {int te_connected; int prev_color_mode; TYPE_4__* int_ctrl; TYPE_3__* extif; int sys_ck; int req_sema; int free_req_list; TYPE_9__* req_pool; int pending_req_list; struct omapfb_device* fbdev; scalar_t__ prev_flags; TYPE_5__ auto_update_timer; TYPE_2__ auto_update_window; int update_mode; int max_transmit_size; int reg_timings; int req_lock; } ;
struct TYPE_13__ {int (* init ) (struct omapfb_device*,int,struct omapfb_mem_desc*) ;int (* cleanup ) () ;} ;
struct TYPE_12__ {int (* init ) (struct omapfb_device*) ;int (* cleanup ) () ;int max_transmit_size; int (* set_timings ) (int *) ;} ;
struct TYPE_10__ {int y_res; int x_res; } ;


 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (unsigned long,int*) ;
 int FUNC_4 (unsigned long,unsigned long*,unsigned long*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (TYPE_7__*,char*,...) ;
 int FUNC_10 (TYPE_7__*,char*,int,int) ;
 TYPE_6__ VAR_7 ;
 int FUNC_11 (int ) ;
 int VAR_8 ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (unsigned long,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct omapfb_device*,int,struct omapfb_mem_desc*) ;
 int FUNC_18 (struct omapfb_device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int FUNC_22 () ;

__attribute__((used)) static int FUNC_23(struct omapfb_device *VAR_9, int VAR_10,
         struct omapfb_mem_desc *VAR_11)
{
 int VAR_12 = 0, VAR_13;
 u8 VAR_14, VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17, VAR_18;
 int VAR_19;
 struct omapfb_platform_data *VAR_20;
 struct hwa742_platform_data *VAR_21;

 FUNC_1(!VAR_9->ext_if || !VAR_9->int_ctrl);

 VAR_7 = VAR_9;
 VAR_7 = VAR_9->ext_if;
 VAR_7 = VAR_9->int_ctrl;

 VAR_20 = VAR_9->dev->platform_data;
 VAR_21 = VAR_20->ctrl_platform_data;

 if (VAR_21 == ((void*)0)) {
  FUNC_9(VAR_9->dev, "HWA742: missing platform data\n");
  VAR_12 = -VAR_1;
  goto err1;
 }

 VAR_7 = FUNC_7(((void*)0), "hwa_sys_ck");

 FUNC_16(&VAR_7);

 if ((VAR_12 = VAR_7->init(VAR_9, 1, VAR_11)) < 0)
  goto err1;

 if ((VAR_12 = VAR_7->init(VAR_9)) < 0)
  goto err2;

 VAR_16 = FUNC_8(VAR_7);
 if ((VAR_12 = FUNC_3(VAR_16, &VAR_19)) < 0)
  goto err3;
 VAR_7->set_timings(&VAR_7);
 FUNC_6(VAR_7);

 FUNC_4(VAR_16, &VAR_17, &VAR_18);
 if ((VAR_12 = FUNC_3(VAR_17, &VAR_19)) < 0)
  goto err4;
 VAR_7->set_timings(&VAR_7);

 VAR_14 = FUNC_11(VAR_4);
 if ((VAR_14 & 0xfc) != 0x80) {
  FUNC_9(VAR_9->dev, "HWA742: invalid revision %02x\n", VAR_14);
  VAR_12 = -VAR_0;
  goto err4;
 }


 if (!(FUNC_11(VAR_3) & 0x80)) {
  FUNC_9(VAR_9->dev,
        "HWA742: controller not initialized by the bootloader\n");
  VAR_12 = -VAR_0;
  goto err4;
 }

 if (VAR_21->te_connected) {
  if ((VAR_12 = FUNC_15(VAR_18, VAR_19)) < 0) {
   FUNC_9(VAR_7->dev,
          "HWA742: can't setup tearing synchronization\n");
   goto err4;
  }
  VAR_7 = 1;
 }

 VAR_7 = VAR_7->max_transmit_size;

 VAR_7 = VAR_6;

 VAR_7 = 0;
 VAR_7 = 0;
 VAR_7 = VAR_9->panel->x_res;
 VAR_7 = VAR_9->panel->y_res;
 VAR_7 = 0;

 FUNC_12(&VAR_7);
 VAR_7 = VAR_8;
 VAR_7 = 0;

 VAR_7 = -1;
 VAR_7 = 0;

 VAR_7 = VAR_9;

 FUNC_2(&VAR_7);
 FUNC_2(&VAR_7);
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_7); VAR_13++)
  FUNC_13(&VAR_7[VAR_13].entry, &VAR_7);
 FUNC_1(VAR_13 <= VAR_5);
 FUNC_14(&VAR_7, VAR_13 - VAR_5);

 VAR_15 = FUNC_11(VAR_2);
 FUNC_10(VAR_9->dev, ": Epson HWA742 LCD controller rev %d "
   "initialized (CNF pins %x)\n", VAR_14 & 0x03, VAR_15 & 0x07);

 return 0;
err4:
 FUNC_5(VAR_7);
err3:
 VAR_7->cleanup();
err2:
 VAR_7->cleanup();
err1:
 return VAR_12;
}
