
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int processor_part_num; } ;
struct cpu_pid_state {int pump_min; int pump_max; TYPE_1__ mpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cpu_pid_state* VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int**,int *,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct cpu_pid_state *VAR_3 = &VAR_2[0];
 struct cpu_pid_state *VAR_4 = &VAR_2[1];
 u16 VAR_5 = 0, VAR_6 = 0xffff;
 u16 VAR_7[4];



 FUNC_1(&VAR_7, &VAR_3->mpu.processor_part_num, 8);
 if (VAR_7[0] != 0xffff && VAR_7[1] != 0xffff) {
  VAR_5 = FUNC_0(VAR_5, VAR_7[0]);
  VAR_6 = FUNC_2(VAR_6, VAR_7[1]);
 }
 if (VAR_7[2] != 0xffff && VAR_7[3] != 0xffff) {
  VAR_5 = FUNC_0(VAR_5, VAR_7[2]);
  VAR_6 = FUNC_2(VAR_6, VAR_7[3]);
 }





 if (VAR_5 == VAR_6 || VAR_5 == 0 || VAR_6 == 0xffff) {
  VAR_5 = VAR_1;
  VAR_6 = VAR_0;
 }

 VAR_3->pump_min = VAR_4->pump_min = VAR_5;
 VAR_3->pump_max = VAR_4->pump_max = VAR_6;
}
