
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeonfb_info {scalar_t__ mon1_type; scalar_t__ family; TYPE_2__* info; } ;
struct radeon_bl_privdata {int negative; struct radeonfb_info* rinfo; } ;
struct TYPE_3__ {int power; scalar_t__ max_brightness; scalar_t__ brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
typedef int name ;
struct TYPE_4__ {int node; struct backlight_device* bl_dev; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct backlight_device* FUNC_1 (char*,int ,struct radeon_bl_privdata*,int *) ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (TYPE_2__*,int ,int,int) ;
 int FUNC_4 (struct radeon_bl_privdata*) ;
 struct radeon_bl_privdata* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int VAR_10 ;
 int FUNC_9 (char*,int,char*,int) ;

void FUNC_10(struct radeonfb_info *VAR_11)
{
 struct backlight_device *VAR_12;
 struct radeon_bl_privdata *VAR_13;
 char VAR_14[12];

 if (VAR_11->mon1_type != VAR_9)
  return;







 VAR_13 = FUNC_5(sizeof(struct radeon_bl_privdata), VAR_7);
 if (!VAR_13) {
  FUNC_8("radeonfb: Memory allocation failed\n");
  goto error;
 }

 FUNC_9(VAR_14, sizeof(VAR_14), "radeonbl%d", VAR_11->info->node);

 VAR_12 = FUNC_1(VAR_14, VAR_11->info->dev, VAR_13, &VAR_10);
 if (FUNC_0(VAR_12)) {
  VAR_11->info->bl_dev = ((void*)0);
  FUNC_8("radeonfb: Backlight registration failed\n");
  goto error;
 }

 VAR_13->rinfo = VAR_11;




 VAR_13->negative =
  (VAR_11->family != VAR_0 &&
   VAR_11->family != VAR_1 &&
   VAR_11->family != VAR_2 &&
   VAR_11->family != VAR_3);
 VAR_11->info->bl_dev = VAR_12;
 FUNC_3(VAR_11->info, 0,
   63 * VAR_5 / VAR_8,
  217 * VAR_5 / VAR_8);

 VAR_12->props.max_brightness = VAR_4 - 1;
 VAR_12->props.brightness = VAR_12->props.max_brightness;
 VAR_12->props.power = VAR_6;
 FUNC_2(VAR_12);

 FUNC_8("radeonfb: Backlight initialized (%s)\n", VAR_14);

 return;

error:
 FUNC_4(VAR_13);
 return;
}
