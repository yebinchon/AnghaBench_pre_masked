
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {unsigned int paprd_training_power; unsigned int* paprd_gain_table_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 unsigned int FUNC_1 (struct ath_hw*,int,unsigned int) ;
 int FUNC_2 (struct ath_hw*,unsigned int) ;

void FUNC_3(struct ath_hw *VAR_3, int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8 = VAR_3->paprd_training_power;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_8);

 VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_3->paprd_gain_table_index[VAR_5] >= VAR_6)
   break;
  VAR_7++;
 }

 FUNC_2(VAR_3, VAR_7);

 FUNC_0(VAR_3, VAR_0,
   VAR_1);
}
