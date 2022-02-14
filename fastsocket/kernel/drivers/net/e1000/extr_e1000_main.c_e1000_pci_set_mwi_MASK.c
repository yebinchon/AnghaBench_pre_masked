
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {struct e1000_adapter* back; } ;
struct e1000_adapter {int pdev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

void FUNC_2(struct e1000_hw *VAR_1)
{
 struct e1000_adapter *VAR_2 = VAR_1->back;
 int VAR_3 = FUNC_1(VAR_2->pdev);

 if (VAR_3)
  FUNC_0(VAR_0, "Error in setting MWI\n");
}
