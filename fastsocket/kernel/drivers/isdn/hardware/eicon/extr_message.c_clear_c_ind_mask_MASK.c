
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t word ;
struct TYPE_3__ {scalar_t__* c_ind_mask_table; } ;
typedef TYPE_1__ PLCI ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0 (PLCI *VAR_1)
{
  word VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    VAR_1->c_ind_mask_table[VAR_2] = 0;
}
