
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool {int prepared_mappings; } ;
struct dm_thin_new_mapping {int list; scalar_t__ prepared; scalar_t__ quiesced; TYPE_1__* tc; } ;
struct TYPE_2__ {struct pool* pool; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct pool*) ;

__attribute__((used)) static void FUNC_2(struct dm_thin_new_mapping *VAR_0)
{
 struct pool *VAR_1 = VAR_0->tc->pool;

 if (VAR_0->quiesced && VAR_0->prepared) {
  FUNC_0(&VAR_0->list, &VAR_1->prepared_mappings);
  FUNC_1(VAR_1);
 }
}
