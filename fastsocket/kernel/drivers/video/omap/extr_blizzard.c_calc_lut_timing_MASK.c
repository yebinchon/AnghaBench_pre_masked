
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct extif_timings {int clk_div; int cs_on_time; int we_on_time; int re_on_time; scalar_t__ we_off_time; int re_off_time; scalar_t__ we_cycle_time; int re_cycle_time; scalar_t__ cs_pulse_width; void* access_time; void* cs_off_time; } ;
struct TYPE_6__ {TYPE_2__* extif; TYPE_1__* fbdev; struct extif_timings lut_timings; int extif_clk_period; } ;
struct TYPE_5__ {int (* convert_timings ) (struct extif_timings*) ;} ;
struct TYPE_4__ {int dev; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,scalar_t__,...) ;
 int FUNC_1 (struct extif_timings*,int ,int) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (struct extif_timings*) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_1, int VAR_2)
{
 struct extif_timings *VAR_3;
 unsigned long VAR_4;
 VAR_4 = 1000000000 / (VAR_1 / 1000);
 FUNC_0(VAR_0.fbdev->dev,
  "Blizzard systim %lu ps extif_clk_period %u div %d\n",
  VAR_4, VAR_0.extif_clk_period, VAR_2);

 VAR_3 = &VAR_0.lut_timings;
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->clk_div = VAR_2;

 VAR_3->cs_on_time = 0;
 VAR_3->we_on_time = FUNC_2(VAR_3->cs_on_time + 2000, VAR_2);
 VAR_3->re_on_time = FUNC_2(VAR_3->cs_on_time + 2000, VAR_2);
 VAR_3->access_time = FUNC_2(VAR_3->re_on_time + 4 * VAR_4 +
           26000, VAR_2);
 VAR_3->we_off_time = FUNC_2(VAR_3->we_on_time + 1000, VAR_2);
 VAR_3->re_off_time = FUNC_2(VAR_3->re_on_time + 4 * VAR_4 +
           26000, VAR_2);
 VAR_3->cs_off_time = FUNC_2(VAR_3->re_off_time + 1000, VAR_2);
 VAR_3->we_cycle_time = FUNC_2(2 * VAR_4 + 2000, VAR_2);
 if (VAR_3->we_cycle_time < VAR_3->we_off_time)
  VAR_3->we_cycle_time = VAR_3->we_off_time;
 VAR_3->re_cycle_time = FUNC_2(2000 + 4 * VAR_4 + 26000, VAR_2);
 if (VAR_3->re_cycle_time < VAR_3->re_off_time)
  VAR_3->re_cycle_time = VAR_3->re_off_time;
 VAR_3->cs_pulse_width = 0;

 FUNC_0(VAR_0.fbdev->dev,
   "[lut]cson %d csoff %d reon %d reoff %d\n",
   VAR_3->cs_on_time, VAR_3->cs_off_time, VAR_3->re_on_time, VAR_3->re_off_time);
 FUNC_0(VAR_0.fbdev->dev,
   "[lut]weon %d weoff %d recyc %d wecyc %d\n",
   VAR_3->we_on_time, VAR_3->we_off_time, VAR_3->re_cycle_time,
   VAR_3->we_cycle_time);
 FUNC_0(VAR_0.fbdev->dev, "[lut]rdaccess %d cspulse %d\n",
   VAR_3->access_time, VAR_3->cs_pulse_width);

 return VAR_0.extif->convert_timings(VAR_3);
}
