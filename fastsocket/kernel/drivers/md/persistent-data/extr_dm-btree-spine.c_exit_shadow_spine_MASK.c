
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shadow_spine {int count; int * nodes; int info; } ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(struct shadow_spine *VAR_0)
{
 int VAR_1 = 0, VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
  int VAR_3 = FUNC_0(VAR_0->info, VAR_0->nodes[VAR_2]);
  if (VAR_3 < 0)
   VAR_1 = VAR_3;
 }

 return VAR_1;
}
