
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdb_cpu {void const* context; } ;


 int VAR_0 ;
 struct pdb_cpu* VAR_1 ;

__attribute__((used)) static struct pdb_cpu *FUNC_0(const void *VAR_2)
{
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    if (VAR_1[VAR_3].context == VAR_2)
      return &VAR_1[VAR_3];
  return ((void*)0);
}
