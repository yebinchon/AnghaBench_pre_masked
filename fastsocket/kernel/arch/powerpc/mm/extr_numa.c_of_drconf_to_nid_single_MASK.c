
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_drconf_cell {int flags; int aa_index; } ;
struct assoc_arrays {int array_sz; int n_arrays; int* arrays; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct of_drconf_cell *VAR_3,
       struct assoc_arrays *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = VAR_5;
 int VAR_7;

 if (VAR_2 > 0 && VAR_2 <= VAR_4->array_sz &&
     !(VAR_3->flags & VAR_0) &&
     VAR_3->aa_index < VAR_4->n_arrays) {
  VAR_7 = VAR_3->aa_index * VAR_4->array_sz + VAR_2 - 1;
  VAR_6 = VAR_4->arrays[VAR_7];

  if (VAR_6 == 0xffff || VAR_6 >= VAR_1)
   VAR_6 = VAR_5;
 }

 return VAR_6;
}
