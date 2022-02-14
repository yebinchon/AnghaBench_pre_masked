
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dc_clk; int * hhc_clk; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_0->dc_clk == ((void*)0) || VAR_0->hhc_clk == ((void*)0))
  return;

 if (VAR_1) {
  FUNC_1(VAR_0->dc_clk);
  FUNC_1(VAR_0->hhc_clk);
  FUNC_2(100);
 } else {
  FUNC_0(VAR_0->hhc_clk);
  FUNC_0(VAR_0->dc_clk);
 }
}
