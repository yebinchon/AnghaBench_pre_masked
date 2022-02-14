
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cpufreq_freqs {scalar_t__ cpu; int new; int old; } ;
struct TYPE_2__ {int index; int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct cpufreq_freqs*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_4)
{

 struct cpufreq_freqs VAR_5;
 u8 VAR_6;

 VAR_5.old = FUNC_4(0);
 VAR_5.new = VAR_3[VAR_4].frequency;
 VAR_5.cpu = 0;

 FUNC_0(&VAR_5, VAR_1);

 FUNC_1("attempting to set frequency to %i kHz\n",
   VAR_3[VAR_4].frequency);

 FUNC_2();

 VAR_6 = *VAR_2 & ~0x03;
 *VAR_2 = VAR_6 | VAR_3[VAR_4].index;

 FUNC_3();

 FUNC_0(&VAR_5, VAR_0);
}
