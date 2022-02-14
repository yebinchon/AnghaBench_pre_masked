
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t word ;
typedef int byte ;
struct TYPE_3__ {scalar_t__* c_ind_mask_table; } ;
typedef TYPE_1__ PLCI ;


 size_t VAR_0 ;

__attribute__((used)) static byte FUNC_0 (PLCI *VAR_1)
{
  word VAR_2;

  VAR_2 = 0;
  while ((VAR_2 < VAR_0) && (VAR_1->c_ind_mask_table[VAR_2] == 0))
    VAR_2++;
  return (VAR_2 == VAR_0);
}
