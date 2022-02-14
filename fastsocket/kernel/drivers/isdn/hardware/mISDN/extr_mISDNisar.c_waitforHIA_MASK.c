
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isar_hw {int (* read_reg ) (int ,int ) ;int name; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline int
FUNC_4(struct isar_hw *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2;
 u8 VAR_4 = VAR_1->read_reg(VAR_1->hw, VAR_0);

 while ((VAR_4 & 1) && VAR_3) {
  FUNC_3(1);
  VAR_3--;
  VAR_4 = VAR_1->read_reg(VAR_1->hw, VAR_0);
 }
 FUNC_0("%s: HIA after %dus\n", VAR_1->name, VAR_2 - VAR_3);
 return VAR_2;
}
