
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mb_cache_entry {TYPE_1__* e_indexes; int e_cache; int e_block_list; } ;
struct TYPE_2__ {int o_list; } ;


 scalar_t__ FUNC_0 (struct mb_cache_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct mb_cache_entry *VAR_0)
{
 int VAR_1;

 if (FUNC_0(VAR_0)) {
  FUNC_2(&VAR_0->e_block_list);
  for (VAR_1=0; VAR_1<FUNC_3(VAR_0->e_cache); VAR_1++)
   FUNC_1(&VAR_0->e_indexes[VAR_1].o_list);
 }
}
