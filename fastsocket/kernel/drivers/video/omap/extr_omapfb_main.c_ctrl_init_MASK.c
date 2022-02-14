
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int region_cnt; TYPE_2__* region; } ;
struct omapfb_platform_data {TYPE_3__ mem_desc; } ;
struct omapfb_device {TYPE_3__ mem_desc; TYPE_4__* dev; TYPE_1__* ctrl; struct lcd_panel* panel; } ;
struct lcd_panel {int bpp; } ;
struct TYPE_9__ {struct omapfb_platform_data* platform_data; } ;
struct TYPE_7__ {void* size; int vaddr; int paddr; } ;
struct TYPE_6__ {int (* init ) (struct omapfb_device*,int ,TYPE_3__*) ;} ;


 void* FUNC_0 (int) ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,char*,int,int ,int ,void*) ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 int FUNC_3 (struct omapfb_device*,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct omapfb_device *VAR_4)
{
 int VAR_5;
 int VAR_6;


 if (VAR_1) {
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   VAR_4->mem_desc.region[VAR_6].size =
    FUNC_0(VAR_0[VAR_6]);
  VAR_4->mem_desc.region_cnt = VAR_6;
 } else {
  struct omapfb_platform_data *VAR_7;

  VAR_7 = VAR_4->dev->platform_data;
  VAR_4->mem_desc = VAR_7->mem_desc;
 }

 if (!VAR_4->mem_desc.region_cnt) {
  struct lcd_panel *VAR_8 = VAR_4->panel;
  int VAR_9;
  int VAR_10 = VAR_8->bpp;


  if (VAR_10 == 12)
   VAR_10 = 16;
  VAR_9 = VAR_2 * VAR_3 * VAR_10 / 8;
  VAR_4->mem_desc.region_cnt = 1;
  VAR_4->mem_desc.region[0].size = FUNC_0(VAR_9);
 }
 VAR_5 = VAR_4->ctrl->init(VAR_4, 0, &VAR_4->mem_desc);
 if (VAR_5 < 0) {
  FUNC_2(VAR_4->dev, "controller initialization failed (%d)\n",
   VAR_5);
  return VAR_5;
 }
 return 0;
}
