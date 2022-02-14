
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int step_volume; int gamma_set; int lcdrate_set; int cpu_clock_set; int cpu_clock_get; } ;
typedef int FILE ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int volatile* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int VAR_13 ;
 int* FUNC_5 (int ,int,int,int ,int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_1__ VAR_20 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*) ;
 int VAR_21 ;
 int FUNC_10 () ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int * VAR_24 ;
 scalar_t__ VAR_25 ;

void FUNC_11(void)
{
   VAR_9 = FUNC_6("/dev/mem", VAR_3);
 if (VAR_9 == -1)
 {
  FUNC_7("open(\"/dev/mem\")");
  FUNC_0(1);
 }

 VAR_11 = FUNC_5(0, 0x10000, VAR_4|VAR_5, VAR_1, VAR_9, 0xc0000000);
 if (VAR_11 == VAR_0)
 {
  FUNC_7("mmap(memregs)");
  FUNC_0(1);
 }
 VAR_10 = (volatile unsigned int *) VAR_11;

 VAR_11[0x2880>>1] &= ~0x383;


 FUNC_4(VAR_8);


 VAR_21 = VAR_11[0x0910>>1];
 VAR_12[0] = VAR_11[0x3802>>1];
 VAR_12[1] = VAR_11[0x3804>>1];


 VAR_25 = FUNC_6("/dev/touchscreen/wm97xx", VAR_2);
 if (VAR_25 >= 0) {
  FILE *VAR_26 = FUNC_2("/etc/pointercal", "r");
  if (VAR_26) {
   FUNC_3(VAR_26, "%d %d %d %d %d %d %d", &VAR_24[0], &VAR_24[1],
    &VAR_24[2], &VAR_24[3], &VAR_24[4], &VAR_24[5], &VAR_24[6]);
   FUNC_1(VAR_26);
  }
  FUNC_8("found touchscreen/wm97xx\n");
 }


 FUNC_9("/proc/sys/vm/max-readahead", "0\n");
 FUNC_9("/proc/sys/vm/min-readahead", "0\n");

 VAR_13 = FUNC_6("/dev/mixer", VAR_3);
 if (VAR_13 == -1)
  FUNC_7("open(/dev/mixer)");

 FUNC_10();

 VAR_20.cpu_clock_get = VAR_14;
 VAR_20.cpu_clock_set = VAR_15;
 VAR_20.lcdrate_set = VAR_17;
 VAR_20.gamma_set = VAR_16;
 VAR_20.step_volume = VAR_23;

 VAR_6 = VAR_18;
 VAR_7 = VAR_19;

 VAR_22 = 0;
}
