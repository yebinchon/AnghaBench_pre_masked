
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dimm_pid_state {scalar_t__ ticks; int output; int last_temp; int cur_sample; int* sample_history; int* error_history; scalar_t__ first; int monitor; } ;
typedef int s64 ;
typedef int s32 ;
struct TYPE_4__ {int output_min; } ;
struct TYPE_3__ {int pwm; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct dimm_pid_state *VAR_13)
{
 s32 VAR_14, VAR_15, VAR_16, VAR_17;
 s64 VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22;

 if (--VAR_13->ticks != 0)
  return;
 VAR_13->ticks = VAR_6;

 FUNC_0("DIMM:\n");

 FUNC_0("  current value: %d\n", VAR_13->output);

 VAR_14 = FUNC_4(VAR_13->monitor, VAR_9);
 if (VAR_14 < 0)
  return;
 VAR_14 <<= 16;
 VAR_13->last_temp = VAR_14;
 FUNC_0("  temp: %d.%03d, target: %d.%03d\n", FUNC_1(VAR_14),
     FUNC_1(VAR_5));


 VAR_13->cur_sample = (VAR_13->cur_sample + 1) % VAR_4;
 VAR_13->sample_history[VAR_13->cur_sample] = VAR_14;
 VAR_13->error_history[VAR_13->cur_sample] = VAR_14 - VAR_5;


 if (VAR_13->first) {
  for (VAR_22 = 0; VAR_22 < (VAR_4 - 1); VAR_22++) {
   VAR_13->cur_sample = (VAR_13->cur_sample + 1) %
    VAR_4;
   VAR_13->sample_history[VAR_13->cur_sample] = VAR_14;
   VAR_13->error_history[VAR_13->cur_sample] =
    VAR_14 - VAR_5;
  }
  VAR_13->first = 0;
 }


 VAR_21 = 0;
 VAR_15 = 0;
 for (VAR_22 = 0; VAR_22 < VAR_4; VAR_22++)
  VAR_15 += VAR_13->error_history[VAR_22];
 VAR_15 *= VAR_6;
 FUNC_0("  integral: %08x\n", VAR_15);
 VAR_18 = ((s64)VAR_3) * (s64)VAR_15;
 FUNC_0("   integ_p: %d\n", (int)(VAR_18 >> 36));
 VAR_21 += VAR_18;


 VAR_16 = VAR_13->error_history[VAR_13->cur_sample] -
  VAR_13->error_history[(VAR_13->cur_sample + VAR_4 - 1)
        % VAR_4];
 VAR_16 /= VAR_6;
 VAR_19 = ((s64)VAR_1) * (s64)VAR_16;
 FUNC_0("   deriv_p: %d\n", (int)(VAR_19 >> 36));
 VAR_21 += VAR_19;


 VAR_20 = ((s64)VAR_2) * (s64)(VAR_13->error_history[VAR_13->cur_sample]);
 FUNC_0("   prop_p: %d\n", (int)(VAR_20 >> 36));
 VAR_21 += VAR_20;


 VAR_21 >>= 36;

 FUNC_0("   sum: %d\n", (int)VAR_21);
 VAR_13->output = (s32)VAR_21;
 VAR_13->output = FUNC_2(VAR_13->output, VAR_8);
 VAR_13->output = FUNC_3(VAR_13->output, VAR_7);
 VAR_12 = VAR_13->output;

 FUNC_0("** DIMM clamp value: %d\n", (int)VAR_13->output);


 VAR_17 = (VAR_12 * 100) / 14000;
 VAR_17 = FUNC_2(VAR_17, VAR_10.output_min);
 if (VAR_11.pwm < VAR_17) {
  VAR_11.pwm = VAR_17;
  FUNC_0(" -> applying clamp to backside fan now: %d  !\n", VAR_17);
  FUNC_5(VAR_0, VAR_17);
 }
}
