
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twlreg_info {int table_len; int* table; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 struct twlreg_info* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct twlreg_info*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct regulator_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct twlreg_info *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->table_len; VAR_6++) {
  int VAR_7 = VAR_5->table[VAR_6];
  int VAR_8;

  if (FUNC_0(VAR_7))
   continue;
  VAR_8 = FUNC_1(VAR_7) * 1000;




  if (VAR_3 <= VAR_8 && VAR_8 <= VAR_4)
   return FUNC_3(VAR_5, VAR_1, VAR_6);
 }

 return -VAR_0;
}
