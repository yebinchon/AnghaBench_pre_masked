
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_adapter {int hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct pch_gbe_adapter *VAR_1)
{
 FUNC_2(&VAR_1->hw);

 FUNC_1(&VAR_1->hw, VAR_0);
 if (FUNC_0(&VAR_1->hw))
  FUNC_3("Hardware Error\n");
}
