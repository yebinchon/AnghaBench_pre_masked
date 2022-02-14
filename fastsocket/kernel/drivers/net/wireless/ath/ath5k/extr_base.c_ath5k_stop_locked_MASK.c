
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int irq; int status; int hw; } ;


 int FUNC_0 (struct ath5k_hw*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (struct ath5k_hw*) ;
 int FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (struct ath5k_hw*,int ) ;
 int FUNC_5 (struct ath5k_hw*) ;
 int FUNC_6 (struct ath5k_hw*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct ath5k_hw *VAR_2)
{

 FUNC_0(VAR_2, VAR_0, "invalid %u\n",
   FUNC_9(VAR_1, VAR_2->status));
 FUNC_7(VAR_2->hw);

 if (!FUNC_9(VAR_1, VAR_2->status)) {
  FUNC_5(VAR_2);
  FUNC_4(VAR_2, 0);
  FUNC_8(VAR_2->irq);
  FUNC_6(VAR_2);
  FUNC_2(VAR_2);
  FUNC_1(VAR_2);
  FUNC_3(VAR_2);
 }

 return 0;
}
