
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct pcap_regulator {int n_voltages; int* voltage_table; int index; int reg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (void*,int ,int,int) ;
 void* FUNC_1 (struct regulator_dev*) ;
 size_t FUNC_2 (struct regulator_dev*) ;
 struct pcap_regulator* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3,
      int VAR_4, int VAR_5)
{
 struct pcap_regulator *VAR_6 = &VAR_2[FUNC_2(VAR_3)];
 void *VAR_7 = FUNC_1(VAR_3);
 int VAR_8;
 u8 VAR_9;


 if (VAR_6->n_voltages == 1)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_6->n_voltages; VAR_9++) {

  if (VAR_9 == 0 && FUNC_2(VAR_3) == VAR_1)
   VAR_9 = 1;
  else if (VAR_9 + 1 == VAR_6->n_voltages && FUNC_2(VAR_3) == VAR_1)
   VAR_9 = 0;

  VAR_8 = VAR_6->voltage_table[VAR_9] * 1000;
  if (VAR_4 <= VAR_8 && VAR_8 <= VAR_5)
   return FUNC_0(VAR_7, VAR_6->reg,
     (VAR_6->n_voltages - 1) << VAR_6->index,
     VAR_9 << VAR_6->index);

  if (VAR_9 == 0 && FUNC_2(VAR_3) == VAR_1)
   VAR_9 = VAR_6->n_voltages - 1;
 }


 return -VAR_0;
}
