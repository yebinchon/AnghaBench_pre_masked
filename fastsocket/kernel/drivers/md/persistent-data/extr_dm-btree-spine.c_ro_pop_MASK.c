
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ro_spine {size_t count; int * nodes; int info; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct ro_spine *VAR_0)
{
 FUNC_0(!VAR_0->count);
 --VAR_0->count;
 FUNC_1(VAR_0->info, VAR_0->nodes[VAR_0->count]);
}
