
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_access; int * clk_tw1; int * clk_tw0; int clk_div; } ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void FUNC_1(int VAR_1)
{
 if (VAR_1 != VAR_0.last_access) {
  VAR_0.last_access = VAR_1;
  FUNC_0(VAR_0.clk_div,
       VAR_0.clk_tw0[VAR_1], VAR_0.clk_tw1[VAR_1]);
 }
}
