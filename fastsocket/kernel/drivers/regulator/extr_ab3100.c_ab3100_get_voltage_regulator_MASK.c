
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dev; struct ab3100_regulator* reg_data; } ;
struct ab3100_regulator {int fixed_voltage; int voltages_len; int* typ_voltages; int regreg; int ab3100; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1)
{
 struct ab3100_regulator *VAR_2 = VAR_1->reg_data;
 u8 VAR_3;
 int VAR_4;


 if (VAR_2->fixed_voltage)
  return VAR_2->fixed_voltage;





 VAR_4 = FUNC_0(VAR_2->ab3100,
      VAR_2->regreg, &VAR_3);
 if (VAR_4) {
  FUNC_2(&VAR_1->dev,
    "failed to get regulator value in register %02x\n",
    VAR_2->regreg);
  return VAR_4;
 }


 VAR_3 &= 0xE0;
 VAR_3 >>= 5;

 if (VAR_3 > VAR_2->voltages_len) {
  FUNC_1(&VAR_1->dev,
   "regulator register %02x contains an illegal voltage setting\n",
   VAR_2->regreg);
  return -VAR_0;
 }

 return VAR_2->typ_voltages[VAR_3];
}
