
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extif_timings {int clk_div; int* tim; int converted; int cs_pulse_width; int re_cycle_time; int we_cycle_time; int access_time; int cs_off_time; int cs_on_time; int re_off_time; int re_on_time; int we_off_time; int we_on_time; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct extif_timings *VAR_0)
{
 u32 VAR_1;
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12 = VAR_0->clk_div;

 if (VAR_12 <= 0 || VAR_12 > 2)
  return -1;





 VAR_4 = FUNC_1(VAR_0->we_on_time, VAR_12);
 VAR_5 = FUNC_1(VAR_0->we_off_time, VAR_12);
 if (VAR_5 <= VAR_4)
  VAR_5 = VAR_4 + 1;
 if (VAR_4 > 0x0f)
  return -1;
 if (VAR_5 > 0x3f)
  return -1;

 VAR_2 = FUNC_1(VAR_0->re_on_time, VAR_12);
 VAR_3 = FUNC_1(VAR_0->re_off_time, VAR_12);
 if (VAR_3 <= VAR_2)
  VAR_3 = VAR_2 + 1;
 if (VAR_2 > 0x0f)
  return -1;
 if (VAR_3 > 0x3f)
  return -1;

 VAR_6 = FUNC_1(VAR_0->cs_on_time, VAR_12);
 VAR_7 = FUNC_1(VAR_0->cs_off_time, VAR_12);
 if (VAR_7 <= VAR_6)
  VAR_7 = VAR_6 + 1;
 if (VAR_7 < FUNC_0(VAR_5, VAR_3))
  VAR_7 = FUNC_0(VAR_5, VAR_3);
 if (VAR_6 > 0x0f)
  return -1;
 if (VAR_7 > 0x3f)
  return -1;

 VAR_1 = VAR_6;
 VAR_1 |= VAR_7 << 4;
 VAR_1 |= VAR_4 << 10;
 VAR_1 |= VAR_5 << 14;
 VAR_1 |= VAR_2 << 20;
 VAR_1 |= VAR_3 << 24;

 VAR_0->tim[0] = VAR_1;

 VAR_9 = FUNC_1(VAR_0->access_time, VAR_12);
 if (VAR_9 <= VAR_2)
  VAR_9 = VAR_2 + 1;
 if (VAR_9 > 0x3f)
  return -1;

 VAR_11 = FUNC_1(VAR_0->we_cycle_time, VAR_12);
 if (VAR_11 < VAR_5)
  VAR_11 = VAR_5;
 if (VAR_11 > 0x3f)
  return -1;

 VAR_10 = FUNC_1(VAR_0->re_cycle_time, VAR_12);
 if (VAR_10 < VAR_3)
  VAR_10 = VAR_3;
 if (VAR_10 > 0x3f)
  return -1;

 VAR_8 = FUNC_1(VAR_0->cs_pulse_width, VAR_12);
 if (VAR_8 > 0x3f)
  return -1;

 VAR_1 = VAR_11;
 VAR_1 |= VAR_10 << 6;
 VAR_1 |= VAR_8 << 12;
 VAR_1 |= VAR_9 << 22;

 VAR_0->tim[1] = VAR_1;

 VAR_0->tim[2] = VAR_12 - 1;

 VAR_0->converted = 1;

 return 0;
}
