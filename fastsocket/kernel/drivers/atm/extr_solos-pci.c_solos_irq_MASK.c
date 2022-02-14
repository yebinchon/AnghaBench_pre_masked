
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solos_card {int fw_wq; int tlet; scalar_t__* atmdev; scalar_t__ config_regs; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct solos_card *VAR_3 = VAR_2;
 int VAR_4 = 1;

 FUNC_1(0, VAR_3->config_regs + VAR_0);


 if (VAR_3->atmdev[0])
  FUNC_2(&VAR_3->tlet);
 else
  FUNC_3(&VAR_3->fw_wq);

 return FUNC_0(VAR_4);
}
