
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u8 ;
struct omapfb_platform_data {struct blizzard_platform_data* ctrl_platform_data; } ;
struct omapfb_mem_desc {int dummy; } ;
struct omapfb_device {TYPE_5__* dev; TYPE_4__* panel; TYPE_1__* int_ctrl; TYPE_2__* ext_if; } ;
struct blizzard_platform_data {unsigned long (* get_clock_rate ) (TYPE_5__*) ;scalar_t__ te_connected; int (* power_up ) (TYPE_5__*) ;int (* power_down ) (TYPE_5__*) ;} ;
struct TYPE_21__ {scalar_t__ data; int function; } ;
struct TYPE_20__ {struct omapfb_platform_data* platform_data; } ;
struct TYPE_19__ {int y_res; int x_res; } ;
struct TYPE_18__ {scalar_t__ format; int out_height; int out_width; scalar_t__ out_x; int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_17__ {int (* init ) (struct omapfb_device*) ;int (* cleanup ) () ;int max_transmit_size; } ;
struct TYPE_16__ {int (* init ) (struct omapfb_device*,int,struct omapfb_mem_desc*) ;int (* cleanup ) () ;int mmap; int setup_mem; int get_color_key; int set_color_key; } ;
struct TYPE_15__ {int entry; } ;
struct TYPE_14__ {int te_connected; TYPE_1__* int_ctrl; TYPE_2__* extif; int (* power_down ) (TYPE_5__*) ;int req_sema; int free_req_list; TYPE_12__* req_pool; int pending_req_list; TYPE_8__ auto_update_timer; int screen_height; int screen_width; TYPE_3__ auto_update_window; int update_mode; int max_transmit_size; int version; int reg_timings; int (* power_up ) (TYPE_5__*) ;int req_lock; struct omapfb_device* fbdev; } ;
struct TYPE_13__ {int mmap; int setup_mem; int get_color_key; int set_color_key; } ;


 int FUNC_0 (TYPE_12__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_11__ VAR_9 ;
 TYPE_10__ VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (unsigned long,unsigned long*,unsigned long*) ;
 int FUNC_5 (unsigned long,int*) ;
 int FUNC_6 (TYPE_5__*,char*,...) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned long,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct omapfb_device*,int,struct omapfb_mem_desc*) ;
 int FUNC_15 (struct omapfb_device*) ;
 unsigned long FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 () ;
 int FUNC_20 () ;

__attribute__((used)) static int FUNC_21(struct omapfb_device *VAR_12, int VAR_13,
    struct omapfb_mem_desc *VAR_14)
{
 int VAR_15 = 0, VAR_16;
 u8 VAR_17, VAR_18;
 unsigned long VAR_19;
 int VAR_20;
 unsigned long VAR_21, VAR_22;
 struct omapfb_platform_data *VAR_23;
 struct blizzard_platform_data *VAR_24;

 VAR_9.fbdev = VAR_12;

 FUNC_1(!VAR_12->ext_if || !VAR_12->int_ctrl);

 VAR_9.fbdev = VAR_12;
 VAR_9.extif = VAR_12->ext_if;
 VAR_9.int_ctrl = VAR_12->int_ctrl;

 VAR_23 = VAR_12->dev->platform_data;
 VAR_24 = VAR_23->ctrl_platform_data;
 if (VAR_24 == ((void*)0) || VAR_24->get_clock_rate == ((void*)0)) {
  FUNC_6(VAR_12->dev, "s1d1374x: missing platform data\n");
  VAR_15 = -VAR_6;
  goto err1;
 }

 VAR_9.power_down = VAR_24->power_down;
 VAR_9.power_up = VAR_24->power_up;

 FUNC_13(&VAR_9.req_lock);

 if ((VAR_15 = VAR_9.int_ctrl->init(VAR_12, 1, VAR_14)) < 0)
  goto err1;

 if ((VAR_15 = VAR_9.extif->init(VAR_12)) < 0)
  goto err2;

 VAR_10.set_color_key = VAR_9.int_ctrl->set_color_key;
 VAR_10.get_color_key = VAR_9.int_ctrl->get_color_key;
 VAR_10.setup_mem = VAR_9.int_ctrl->setup_mem;
 VAR_10.mmap = VAR_9.int_ctrl->mmap;

 VAR_19 = VAR_24->get_clock_rate(VAR_12->dev);
 if ((VAR_15 = FUNC_5(VAR_19, &VAR_20)) < 0)
  goto err3;

 FUNC_11(&VAR_9.reg_timings);

 if (VAR_9.power_up != ((void*)0))
  VAR_9.power_up(VAR_12->dev);

 FUNC_4(VAR_19, &VAR_21, &VAR_22);

 if ((VAR_15 = FUNC_5(VAR_21, &VAR_20)) < 0)
  goto err3;
 FUNC_11(&VAR_9.reg_timings);

 if (!(FUNC_3(VAR_1) & 0x80)) {
  FUNC_6(VAR_12->dev,
   "controller not initialized by the bootloader\n");
  VAR_15 = -VAR_5;
  goto err3;
 }

 if (VAR_24->te_connected) {
  if ((VAR_15 = FUNC_12(VAR_22, VAR_20)) < 0)
   goto err3;
  VAR_9.te_connected = 1;
 }

 VAR_17 = FUNC_3(VAR_2);
 VAR_18 = FUNC_3(VAR_0);

 switch (VAR_17 & 0xfc) {
 case 0x9c:
  VAR_9.version = VAR_3;
  FUNC_9("omapfb: s1d13744 LCD controller rev %d "
   "initialized (CNF pins %x)\n", VAR_17 & 0x03, VAR_18 & 0x07);
  break;
 case 0xa4:
  VAR_9.version = VAR_4;
  FUNC_9("omapfb: s1d13745 LCD controller rev %d "
   "initialized (CNF pins %x)\n", VAR_17 & 0x03, VAR_18 & 0x07);
  break;
 default:
  FUNC_6(VAR_12->dev, "invalid s1d1374x revision %02x\n",
   VAR_17);
  VAR_15 = -VAR_5;
  goto err3;
 }

 VAR_9.max_transmit_size = VAR_9.extif->max_transmit_size;

 VAR_9.update_mode = VAR_8;

 VAR_9.auto_update_window.x = 0;
 VAR_9.auto_update_window.y = 0;
 VAR_9.auto_update_window.width = VAR_12->panel->x_res;
 VAR_9.auto_update_window.height = VAR_12->panel->y_res;
 VAR_9.auto_update_window.out_x = 0;
 VAR_9.auto_update_window.out_x = 0;
 VAR_9.auto_update_window.out_width = VAR_12->panel->x_res;
 VAR_9.auto_update_window.out_height = VAR_12->panel->y_res;
 VAR_9.auto_update_window.format = 0;

 VAR_9.screen_width = VAR_12->panel->x_res;
 VAR_9.screen_height = VAR_12->panel->y_res;

 FUNC_7(&VAR_9.auto_update_timer);
 VAR_9.auto_update_timer.function = VAR_11;
 VAR_9.auto_update_timer.data = 0;

 FUNC_2(&VAR_9.free_req_list);
 FUNC_2(&VAR_9.pending_req_list);
 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_9.req_pool); VAR_16++)
  FUNC_8(&VAR_9.req_pool[VAR_16].entry, &VAR_9.free_req_list);
 FUNC_1(VAR_16 <= VAR_7);
 FUNC_10(&VAR_9.req_sema, VAR_16 - VAR_7);

 return 0;
err3:
 if (VAR_9.power_down != ((void*)0))
  VAR_9.power_down(VAR_12->dev);
 VAR_9.extif->cleanup();
err2:
 VAR_9.int_ctrl->cleanup();
err1:
 return VAR_15;
}
