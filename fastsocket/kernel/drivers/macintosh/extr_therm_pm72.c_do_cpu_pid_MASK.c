
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tmax; int ttarget; scalar_t__ pid_gp; scalar_t__ pid_gd; scalar_t__ pid_gr; scalar_t__ padjmax; scalar_t__ pmaxh; } ;
struct cpu_pid_state {int cur_temp; int* temp_history; int cur_power; int count_power; int* power_history; int* error_history; int rpm; TYPE_1__ mpu; scalar_t__ first; } ;
typedef int s64 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct cpu_pid_state *VAR_2, s32 VAR_3, s32 VAR_4)
{
 s32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 s64 VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;




 VAR_5 = ((u32)(VAR_2->mpu.pmaxh - VAR_2->mpu.padjmax)) << 16;
 FUNC_0("  power target: %d.%03d, error: %d.%03d\n",
     FUNC_1(VAR_5), FUNC_1(VAR_5 - VAR_4));


 VAR_2->cur_temp = (VAR_2->cur_temp + 1) % VAR_1;
 VAR_2->temp_history[VAR_2->cur_temp] = VAR_3;
 VAR_2->cur_power = (VAR_2->cur_power + 1) % VAR_2->count_power;
 VAR_2->power_history[VAR_2->cur_power] = VAR_4;
 VAR_2->error_history[VAR_2->cur_power] = VAR_5 - VAR_4;


 if (VAR_2->first) {
  for (VAR_15 = 0; VAR_15 < (VAR_2->count_power - 1); VAR_15++) {
   VAR_2->cur_power = (VAR_2->cur_power + 1) % VAR_2->count_power;
   VAR_2->power_history[VAR_2->cur_power] = VAR_4;
   VAR_2->error_history[VAR_2->cur_power] = VAR_5 - VAR_4;
  }
  for (VAR_15 = 0; VAR_15 < (VAR_1 - 1); VAR_15++) {
   VAR_2->cur_temp = (VAR_2->cur_temp + 1) % VAR_1;
   VAR_2->temp_history[VAR_2->cur_temp] = VAR_3;
  }
  VAR_2->first = 0;
 }


 VAR_14 = 0;
 VAR_6 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_2->count_power; VAR_15++)
  VAR_6 += VAR_2->error_history[VAR_15];
 VAR_6 *= VAR_0;
 FUNC_0("  integral: %08x\n", VAR_6);
 VAR_11 = ((s64)VAR_2->mpu.pid_gr) * (s64)VAR_6;
 FUNC_0("   integ_p: %d\n", (int)(VAR_11 >> 36));
 VAR_10 = (VAR_2->mpu.tmax << 16) - ((VAR_11 >> 20) & 0xffffffff);
 VAR_9 = (VAR_2->mpu.ttarget << 16);
 if (VAR_9 > VAR_10)
  VAR_9 = VAR_10;
 FUNC_0("   adj_in_target: %d.%03d, ttarget: %d\n", FUNC_1(VAR_9),
     VAR_2->mpu.ttarget);


 VAR_7 = VAR_2->temp_history[VAR_2->cur_temp] -
  VAR_2->temp_history[(VAR_2->cur_temp + VAR_1 - 1)
        % VAR_1];
 VAR_7 /= VAR_0;
 VAR_12 = ((s64)VAR_2->mpu.pid_gd) * (s64)VAR_7;
 FUNC_0("   deriv_p: %d\n", (int)(VAR_12 >> 36));
 VAR_14 += VAR_12;


 VAR_8 = VAR_3 - VAR_9;
 VAR_13 = ((s64)VAR_2->mpu.pid_gp) * (s64)VAR_8;
 FUNC_0("   prop_p: %d\n", (int)(VAR_13 >> 36));
 VAR_14 += VAR_13;


 VAR_14 >>= 36;

 FUNC_0("   sum: %d\n", (int)VAR_14);
 VAR_2->rpm += (s32)VAR_14;
}
