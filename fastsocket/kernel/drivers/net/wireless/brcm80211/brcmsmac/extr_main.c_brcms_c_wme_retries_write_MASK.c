
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {int * wme_retries; int hw; int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct brcms_c_info *VAR_1)
{
 int VAR_2;


 if (!VAR_1->clk)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1->hw, FUNC_0(VAR_2),
      VAR_1->wme_retries[VAR_2]);
}
