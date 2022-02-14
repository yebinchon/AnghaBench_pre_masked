
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int mdiode; int bdiode; } ;
struct cpu_pid_state {int cur_temp; int cur_power; scalar_t__ index; int rpm; int last_temp; int voltage; int current_a; int last_power; TYPE_1__ mpu; int overtemp; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct cpu_pid_state*,int) ;

__attribute__((used)) static int FUNC_4(struct cpu_pid_state *VAR_10, s32 *VAR_11, s32 *VAR_12)
{
 s32 VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17 = 0;


 *VAR_11 = VAR_10->cur_temp;
 *VAR_12 = VAR_10->cur_power;

 if (VAR_9 == VAR_6)
  VAR_16 = (VAR_10->index == 0) ?
   VAR_4 : VAR_5;
 else
  VAR_16 = (VAR_10->index == 0) ?
   VAR_2 : VAR_3;


 VAR_17 = FUNC_2(VAR_16, !VAR_8);
 if (VAR_17 < 0) {



  FUNC_0("  cpu %d, fan reading error !\n", VAR_10->index);
 } else {
  VAR_10->rpm = VAR_17;
  FUNC_0("  cpu %d, exhaust RPM: %d\n", VAR_10->index, VAR_10->rpm);
 }


 VAR_13 = FUNC_3(VAR_10, 1);
 if (VAR_13 == -1) {

  VAR_10->overtemp++;
  if (VAR_17 == 0)
   VAR_17 = -VAR_7;
  FUNC_0("  cpu %d, temp reading error !\n", VAR_10->index);
 } else {


  FUNC_0("  cpu %d, temp raw: %04x, m_diode: %04x, b_diode: %04x\n",
      VAR_10->index,
      VAR_13, VAR_10->mpu.mdiode, VAR_10->mpu.bdiode);
  *VAR_11 = ((s32)VAR_13 * (s32)VAR_10->mpu.mdiode + ((s32)VAR_10->mpu.bdiode << 12)) >> 2;
  VAR_10->last_temp = *VAR_11;
  FUNC_0("  temp: %d.%03d\n", FUNC_1((*VAR_11)));
 }




 VAR_14 = FUNC_3(VAR_10, 3);
 VAR_15 = FUNC_3(VAR_10, 4);




 VAR_14 *= VAR_1;
 VAR_15 *= VAR_0;
 *VAR_12 = (((u64)VAR_14) * ((u64)VAR_15)) >> 16;
 VAR_10->voltage = VAR_14;
 VAR_10->current_a = VAR_15;
 VAR_10->last_power = *VAR_12;

 FUNC_0("  cpu %d, current: %d.%03d, voltage: %d.%03d, power: %d.%03d W\n",
     VAR_10->index, FUNC_1(VAR_10->current_a),
     FUNC_1(VAR_10->voltage), FUNC_1(*VAR_12));

 return 0;
}
