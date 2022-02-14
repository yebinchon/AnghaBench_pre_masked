
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct cpufreq_frequency_table {int dummy; } ;
struct TYPE_3__ {int frequency; size_t index; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t,int,int,unsigned int,size_t,int,int) ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_11)
{
 unsigned int VAR_12;
 unsigned int VAR_13;
 u8 VAR_14, VAR_15;

 VAR_10 = FUNC_2((sizeof(struct cpufreq_frequency_table) *
    (VAR_9 + 1)), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 for (VAR_12 = 0 ; VAR_12 < VAR_9; VAR_12++) {
  VAR_14 = *VAR_11++;

  VAR_10[VAR_12].frequency = (VAR_4 * VAR_3[VAR_14]) / 10;
  VAR_10[VAR_12].index = VAR_14;

  VAR_13 = VAR_10[VAR_12].frequency;

  if ((VAR_3[VAR_14] % 10) == 5) {




  }

  if (VAR_13 < VAR_7)
   VAR_7 = VAR_13;
  if (VAR_13 > VAR_6)
   VAR_6 = VAR_13;

  VAR_15 = *VAR_11++;
  VAR_10[VAR_12].index |= (VAR_15 << 8);

  FUNC_0("   FID: 0x%x (%d.%dx [%dMHz])  "
    "VID: 0x%x (%d.%03dV)\n", VAR_14, VAR_3[VAR_14] / 10,
    VAR_3[VAR_14] % 10, VAR_13/1000, VAR_15,
    VAR_8[VAR_15]/1000,
    VAR_8[VAR_15]%1000);
 }
 VAR_10[VAR_9].frequency = VAR_0;
 VAR_10[VAR_9].index = 0;

 return 0;
}
