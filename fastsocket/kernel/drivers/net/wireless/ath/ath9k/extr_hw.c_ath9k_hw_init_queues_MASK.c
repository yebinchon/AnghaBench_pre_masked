
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {scalar_t__ intr_txqs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 int FUNC_4 (struct ath_hw*,int) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_3(VAR_2, FUNC_0(VAR_3), 1 << VAR_3);

 FUNC_2(VAR_2);

 VAR_2->intr_txqs = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_4(VAR_2, VAR_3);
}
