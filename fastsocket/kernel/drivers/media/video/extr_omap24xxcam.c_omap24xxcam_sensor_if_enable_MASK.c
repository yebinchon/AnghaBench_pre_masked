
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int mode; int clock_curr; int clock_min; int clock_max; int nobt_vs_inv; int nobt_hs_inv; int latch_clk_inv; int swap; int bt_sync_correct; int frame_start_on_rising_vs; } ;
struct TYPE_6__ {TYPE_1__ bt656; } ;
struct v4l2_ifparm {int if_type; TYPE_2__ u; } ;
struct TYPE_7__ {int xclk; } ;
struct TYPE_8__ {TYPE_3__ bt656; } ;
struct omap24xxcam_device {int if_type; int dev; TYPE_4__ if_u; int cc_ctrl; int sdev; } ;


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
 int VAR_12 ;
 int VAR_13 ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct omap24xxcam_device*,int) ;
 int FUNC_2 (int ,struct v4l2_ifparm*) ;

__attribute__((used)) static int FUNC_3(struct omap24xxcam_device *VAR_14)
{
 int VAR_15;
 struct v4l2_ifparm VAR_16;

 VAR_15 = FUNC_2(VAR_14->sdev, &VAR_16);
 if (VAR_15) {
  FUNC_0(VAR_14->dev, "vidioc_int_g_ifparm failed with %d\n", VAR_15);
  return VAR_15;
 }

 VAR_14->if_type = VAR_16.if_type;

 VAR_14->cc_ctrl = VAR_2;

 switch (VAR_16.if_type) {
 case 133:
  if (VAR_16.u.bt656.frame_start_on_rising_vs)
   VAR_14->cc_ctrl |= VAR_4;
  if (VAR_16.u.bt656.bt_sync_correct)
   VAR_14->cc_ctrl |= VAR_1;
  if (VAR_16.u.bt656.swap)
   VAR_14->cc_ctrl |= VAR_12;
  if (VAR_16.u.bt656.latch_clk_inv)
   VAR_14->cc_ctrl |= VAR_6;
  if (VAR_16.u.bt656.nobt_hs_inv)
   VAR_14->cc_ctrl |= VAR_3;
  if (VAR_16.u.bt656.nobt_vs_inv)
   VAR_14->cc_ctrl |= VAR_5;

  switch (VAR_16.u.bt656.mode) {
  case 128:
   VAR_14->cc_ctrl |= VAR_11;
   break;
  case 130:
   VAR_14->cc_ctrl |= VAR_9;
   break;
  case 129:
   VAR_14->cc_ctrl |= VAR_10;
   break;
  case 131:
   VAR_14->cc_ctrl |= VAR_8;
   break;
  case 132:
   VAR_14->cc_ctrl |= VAR_7;
   break;
  default:
   FUNC_0(VAR_14->dev,
    "bt656 interface mode %d not supported\n",
    VAR_16.u.bt656.mode);
   return -VAR_13;
  }





  if (VAR_16.u.bt656.clock_curr != VAR_14->if_u.bt656.xclk) {
   u32 VAR_17 = VAR_16.u.bt656.clock_curr;
   u32 VAR_18;

   if (VAR_17 == 0)
    return -VAR_13;

   if (VAR_17 > VAR_0)
    VAR_17 = VAR_0;

   VAR_18 = VAR_0 / VAR_17;
   if (VAR_18 * VAR_17 < VAR_0)
    VAR_18++;
   if (VAR_0 / VAR_18 < VAR_16.u.bt656.clock_min
       && VAR_18 > 1)
    VAR_18--;
   if (VAR_18 > 30)
    VAR_18 = 30;

   VAR_17 = VAR_0 / VAR_18;

   if (VAR_17 < VAR_16.u.bt656.clock_min
       || VAR_17 > VAR_16.u.bt656.clock_max)
    return -VAR_13;

   VAR_14->if_u.bt656.xclk = VAR_17;
  }
  FUNC_1(VAR_14, VAR_14->if_u.bt656.xclk);
  break;
 default:

  FUNC_0(VAR_14->dev, "interface type %d not supported\n",
   VAR_16.if_type);
  return -VAR_13;
 }

 return 0;
}
