
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shadow_spine {int count; struct dm_block** nodes; } ;
struct dm_block {int dummy; } ;


 int FUNC_0 (int) ;

struct dm_block *FUNC_1(struct shadow_spine *VAR_0)
{
 FUNC_0(VAR_0->count != 2);

 return VAR_0->count == 2 ? VAR_0->nodes[0] : ((void*)0);
}
