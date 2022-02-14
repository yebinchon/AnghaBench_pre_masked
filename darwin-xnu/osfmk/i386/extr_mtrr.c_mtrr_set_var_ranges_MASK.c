
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int base; } ;
typedef TYPE_1__ mtrr_var_range_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(const mtrr_var_range_t * VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_2(FUNC_0(VAR_2), VAR_0[VAR_2].base);
  FUNC_2(FUNC_1(VAR_2), VAR_0[VAR_2].mask);
 }
}
