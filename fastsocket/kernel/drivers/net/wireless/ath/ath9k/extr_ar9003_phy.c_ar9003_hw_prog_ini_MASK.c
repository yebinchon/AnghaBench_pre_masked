
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ar5416IniArray {int ia_columns; unsigned int ia_rows; int ia_array; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ar5416IniArray*,unsigned int,int) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_0,
          struct ar5416IniArray *VAR_1,
          int VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;


 if (!VAR_1->ia_array)
  return;






 if (VAR_2 >= VAR_1->ia_columns)
  VAR_2 = 1;

 for (VAR_3 = 0; VAR_3 < VAR_1->ia_rows; VAR_3++) {
  u32 VAR_5 = FUNC_1(VAR_1, VAR_3, 0);
  u32 VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_2);

  FUNC_2(VAR_0, VAR_5, VAR_6);

  FUNC_0(VAR_4);
 }
}
