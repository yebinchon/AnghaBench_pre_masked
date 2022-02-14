
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath_hw {int* paprd_gain_table_entries; int* paprd_gain_table_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int) ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_2)
{
 u32 *VAR_3 = VAR_2->paprd_gain_table_entries;
 u8 *VAR_4 = VAR_2->paprd_gain_table_index;
 u32 VAR_5 = VAR_0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_3[VAR_6] = FUNC_0(VAR_2, VAR_5);
  VAR_4[VAR_6] = (VAR_3[VAR_6] >> 24) & 0xff;
  VAR_5 += 4;
 }
}
