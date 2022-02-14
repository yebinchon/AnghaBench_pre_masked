
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CFID; } ;
union msr_fidvidstatus {TYPE_1__ bits; int val; } ;
typedef int u8 ;
struct cpufreq_freqs {int old; int new; scalar_t__ cpu; } ;
struct TYPE_4__ {int index; int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cpufreq_freqs*,int ) ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__* VAR_6 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_7)
{
 u8 VAR_8, VAR_9;
 struct cpufreq_freqs VAR_10;
 union msr_fidvidstatus VAR_11;
 int VAR_12;






 VAR_8 = VAR_6[VAR_7].index & 0xFF;
 VAR_9 = (VAR_6[VAR_7].index & 0xFF00) >> 8;

 VAR_10.cpu = 0;

 FUNC_5(VAR_2, VAR_11.val);
 VAR_12 = VAR_11.bits.CFID;
 VAR_10.old = VAR_4 * VAR_3[VAR_12] / 10;

 VAR_10.new = VAR_6[VAR_7].frequency;

 FUNC_2(&VAR_10, VAR_1);



 if (VAR_5 == 1)
  FUNC_3();

 if (VAR_10.old > VAR_10.new) {

  FUNC_0(VAR_8);
  FUNC_1(VAR_9);
 } else {

  FUNC_1(VAR_9);
  FUNC_0(VAR_8);
 }


 if (VAR_5 == 1)
  FUNC_4();

 FUNC_2(&VAR_10, VAR_0);
}
