
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int * ah_rf_banks; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ath5k_hw *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->status);

 if (VAR_1->ah_rf_banks != ((void*)0))
  FUNC_2(VAR_1->ah_rf_banks);

 FUNC_1(VAR_1);


}
