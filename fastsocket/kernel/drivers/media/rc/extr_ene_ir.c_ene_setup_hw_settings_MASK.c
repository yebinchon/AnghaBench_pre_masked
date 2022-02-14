
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ene_device {scalar_t__ hw_learning_and_tx_capable; } ;


 int FUNC_0 (struct ene_device*) ;
 int FUNC_1 (struct ene_device*) ;
 int FUNC_2 (struct ene_device*) ;

__attribute__((used)) static void FUNC_3(struct ene_device *VAR_0)
{
 if (VAR_0->hw_learning_and_tx_capable) {
  FUNC_1(VAR_0);
  FUNC_2(VAR_0);
 }

 FUNC_0(VAR_0);
}
