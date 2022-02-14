
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ro_spine {int count; int * nodes; int info; } ;
typedef int dm_block_t ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct ro_spine *VAR_0, dm_block_t VAR_1)
{
 int VAR_2;

 if (VAR_0->count == 2) {
  VAR_2 = FUNC_1(VAR_0->info, VAR_0->nodes[0]);
  if (VAR_2 < 0)
   return VAR_2;
  VAR_0->nodes[0] = VAR_0->nodes[1];
  VAR_0->count--;
 }

 VAR_2 = FUNC_0(VAR_0->info, VAR_1, VAR_0->nodes + VAR_0->count);
 if (!VAR_2)
  VAR_0->count++;

 return VAR_2;
}
