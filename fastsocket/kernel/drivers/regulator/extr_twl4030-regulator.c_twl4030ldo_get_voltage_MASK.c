
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twlreg_info {int table_len; int * table; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct twlreg_info* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct twlreg_info*,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1)
{
 struct twlreg_info *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = FUNC_2(VAR_2, VAR_0);

 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 &= VAR_2->table_len - 1;
 return FUNC_0(VAR_2->table[VAR_3]) * 1000;
}
