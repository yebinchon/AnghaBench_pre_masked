
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regulator_dev {int dummy; } ;
struct pcap_regulator {int en; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int*) ;
 void* FUNC_1 (struct regulator_dev*) ;
 size_t FUNC_2 (struct regulator_dev*) ;
 struct pcap_regulator* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3)
{
 struct pcap_regulator *VAR_4 = &VAR_2[FUNC_2(VAR_3)];
 void *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6;

 if (VAR_4->en == VAR_1)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_4->reg, &VAR_6);
 return (VAR_6 >> VAR_4->en) & 1;
}
