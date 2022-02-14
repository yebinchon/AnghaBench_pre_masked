
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_hw {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct skge_hw*,int) ;
 int FUNC_1 (struct skge_hw*,int) ;

__attribute__((used)) static void FUNC_2(struct skge_hw *VAR_1, int VAR_2)
{
 if (VAR_1->chip_id == VAR_0)
  FUNC_0(VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);
}
