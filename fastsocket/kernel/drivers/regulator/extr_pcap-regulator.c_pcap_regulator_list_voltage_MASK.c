
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct pcap_regulator {int* voltage_table; } ;


 size_t FUNC_0 (struct regulator_dev*) ;
 struct pcap_regulator* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_1,
       unsigned int VAR_2)
{
 struct pcap_regulator *VAR_3 = &VAR_0[FUNC_0(VAR_1)];

 return VAR_3->voltage_table[VAR_2] * 1000;
}
